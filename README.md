# JSAPPSugar
JSAppSugar is a Syntactic Sugar for JavaScript. It enables App(iOS/Android) developers to develop cross platform business logic in JavaScript language. The primary goal of this project is to make the application development process simple, cheap, and of high quality.

## QuickStart
### Use JS Object In Objective-C
```objective-c
//initialize JSA4Cocoa
JSA4Cocoa* jsa = [[JSA4Cocoa alloc]init];
[jsa startEngine];

//create a JS Object
id<JSAObject> jsObject = [jsa newClass:@"JSObject"];

//invoke methods on the object
NSString* text = [jsObject invokeMethod:@"getText"];
```
### Use JS Object In Java
```java
//initialize JSA4Java
JSA4Java jsa = new JSA4Java();
jsa.startEngine();

//create a JS Object
JSAObject jsObject = jsa.newClass("JSObject");

//invoke methods on the object
String text = (String)jsObject.invokeMethod("getText");
```
### Use Native Object In JavaScript
```javascript
//define the interface for native class
$class("NativeObject",{
  $implementation:{
    $java : "JavaObject",//the name of a java class
    $oc : "OCObject"//the name of a OC class
  },
  getText:{
    $java : "getText",
    $oc : "getText:"
  }
});

//define a js class. Then you can use this class in JavaScript, Java and objective-c
$class("JSObject",{
  getText:function(){
    //create a native object
    var nativeObject = new NativeObject();
    //invoke methods on the object
    var text = nativeObject.getText("Hello");
    return text;
  }
});
```
## Installation
### iOS and Mac
[JSA4Cocoa](https://github.com/JSAppSugar/JSA4Cocoa)
### Android
[JSA4Java](https://github.com/JSAppSugar/JSA4Java)
## Document
[中文](https://github.com/JSAppSugar/JSAppSugar/wiki)