//
//  JSAppSugar.h
//  JSA4Cocoa
//
//  Created by Neal on 2018/10/23.
//  Copyright (c) 2018 Neal. All rights reserved.
//


/*!
 @protocol
 @discussion A JSAFunction is a reference to a JavaScript function. Every JSAFunction holds a strong reference to it.
 */
@protocol JSAFunction <NSObject>

/*!
 @method
 @abstract Invoke the JS function
 @return The return value of the function call.
 */
-(id) call;

/*!
 @method
 @abstract Invoke the JS function
 @param arguments The arguments to pass to the function.
 @return The return value of the function call.
 */
-(id) callWithArguments:(NSArray *)arguments;

/*!
 @method
 @abstract Invoke the JS function with the specified this value
 @param thisObject The value of this provided for the call to function
 @return The result of calling the function with the specified this value
 */
-(id) applyWithObject:(id)thisObject;

/*!
 @method
 @abstract Invoke the JS function with the specified this value
 @param thisObject The value of this provided for the call to function
 @param arguments The arguments to pass to the function.
 @return The result of calling the function with the specified this value
 */
-(id) applyWithObject:(id)thisObject Arguments:(NSArray *)arguments;

@end

@protocol JSAWeakObject;

/*!
 @protocol
 @abstract A JSAObject is a reference to a JavaScript object. Every JSAObject holds a strong reference to it.
 */
@protocol JSAObject <NSObject>

/*!
 @method
 @abstract Invoke the specified function on the JS object
 @param method The name of the method
 @return The return value of the function call.
 */
-(id) invokeMethod:(NSString *)method;

/*!
 @method
 @abstract Invoke the specified function on the JS object
 @param method The name of the method
 @param arguments The arguments to pass to the function.
 @return The return value of the function call.
 */
-(id) invokeMethod:(NSString *)method Arguments:(NSArray *)arguments;

/*!
 @method
 @abstract Get a JSAWeakObject which has a weak reference to the JS object
 @return JSAWeakObject
 */
-(id<JSAWeakObject>) weakObject;

@end

/*!
 @protocol
 @abstract A JSAWeakObject is a reference to a JavaScript object. Every JSAWeakObject holds a weak reference to it.
 */
@protocol JSAWeakObject <NSObject>

/*!
 @method
 @abstract Get The corresponding JSAObject for this JSAWeakObject or nil if the JSValue has been collected.
 @return The corresponding JSAObject
 */
-(id<JSAObject>) value;

@end

/*!
 @protocol
 @abstract JSA Syntactic Sugar for Cocoa
 */
@protocol JSAppSugar <NSObject>

/*!
 @method
 
 @abstract Creates a new instance of a JSA class.
 @param className The name of a JSA class
 @result ESAObject
 */
-(id<JSAObject>)newClass:(NSString*) className;

/*!
 @method
 
 @abstract Creates a new instance of a JSA class.
 @param className The name of a JSA class
 @param arguments The arguments to pass to the constructor.
 @result JSAObject
 */
-(id<JSAObject>)newClass:(NSString*) className Arguments:(NSArray*) arguments;


/*!
 @method
 @abstract Invoke the specified static function on the JS class
 @param className The name of a JSA class
 @param method The name of a method
 @return The return value of the function call.
 */
-(id) invokeClass:(NSString*) className Method:(NSString *)method;

/*!
 @method
 @abstract Invoke the specified static function on the JS class
 @param className The name of a method
 @param method The name of a method
 @param arguments The arguments to pass to the function.
 @return The return value of the function call.
 */
-(id) invokeClass:(NSString*) className Method:(NSString *)method Arguments:(NSArray *)arguments;

@end
