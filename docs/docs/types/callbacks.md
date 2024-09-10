---
---

import Tabs from '@theme/Tabs';
import TabItem from '@theme/TabItem';

# Callbacks (`(...) => T`)

Callbacks are functions created in one language and passed to another to provide a way to "call back" later.

Nitro has a clever reference counting system to allow users to use callbacks/functions from JS safely, and without any limitations.
Each callback holds a strong reference on the native side and can be called as often as needed.
Once the callback is no longer used, it will be safely deleted from memory.

<Tabs>
  <TabItem value="ts" label="TypeScript" default>
    In TypeScript, a callback is represented as an anonymous function:

    ```ts
    type Orientation = "portrait" | "landscape"
    interface DeviceInfo extends HybridObject {
      listenToOrientation(onChanged: (o: Orientation) => void): void
    }

    const deviceInfo = // ...
    deviceInfo.listenToOrientation((o) => {
      console.log(`Orientation changed to ${o}!`)
    })
    ```
  </TabItem>
  <TabItem value="cpp" label="C++">
    In C++, a callback is represented as a function:

    ```cpp
    void listenToOrientation(std::function<void(Orientation)> onChanged) {
      this->listeners.push_back(onChanged);
    }

    void onRotate() {
      for (const auto& listener: this->listeners) {
        listener(newOrientation);
      }
    }
    ```
  </TabItem>
  <TabItem value="swift" label="Swift">
    In Swift, a callback is represented as a closure:

    ```swift
    func listenToOrientation(onChanged: (Orientation) -> Void) {
      self.listeners.append(onChanged)
    }

    func onRotate() {
      for listener in self.listeners {
        listener(newOrientation)
      }
    }
    ```
  </TabItem>
  <TabItem value="kotlin" label="Kotlin">
    In Kotlin, a callback is represented as a lambda:

    ```kotlin
    fun listenToOrientation(onChanged: (Orientation) -> Unit) {
      this.listeners.add(onChanged)
    }

    fun onRotate() {
      for (listener in this.listeners) {
        listener(newOrientation)
      }
    }
    ```
  </TabItem>
</Tabs>

Since callbacks can be safely kept in memory for longer and called multiple times, Nitro does not have a special type for an "event".
It is simply a function you store in memory and call later. ✨

## Callbacks that return a value (`(...) => T`)

Since JS callbacks could theoretically be called from any native Thread,
Nitro safely wraps the result types of callbacks that return a value in **Promises which need to be awaited**.

<div className="side-by-side-container">
<div className="side-by-side-block">

```ts title="Math.nitro.ts"
interface Math extends HybridObject {
  some(getValue: () => number): void
}
```

</div>
<div className="side-by-side-block">

```swift title="HybridMath.swift"
func some(getValue: () -> Promise<Double>) {
  Task {
    let promise = getValue()
    let valueFromJs = promise.await()
  }
}
```

</div>
</div>

## How was it before Nitro?

Conventionally (in legacy React Native Native Modules), a native method could only have a maximum of two callbacks, one "success" and one "failure" callback.
Once one of these callbacks is called, both will be destroyed and can no longer be called later.
This is why React Native introduced "Events" as a way to call into JS more than just once.
This also meant that an asynchronous function could not have any callbacks, since a Promise's resolve and reject functions are already two callbacks.
For example, this was **not possible**:

```ts
interface Camera {
  startRecording(onStatusUpdate: () => void,
                 onRecordingFailed: () => void,
                 onRecordingFinished: () => void): Promise<void>
}
```

Thanks to Nitro's clever reference system, functions can be safely held in memory and called as many times as you like, just like in a normal JS class.
This makes "Events" obsolete, and allows using as many callbacks per native method as required.