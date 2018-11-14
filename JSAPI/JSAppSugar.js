
/*
import a JSA class to use

@param {string,...} classes JSA class names
*/
function $import(classes,...){}

/*
define a JSA class

@param {string} className
@param {object} define
*/
function $class(className,define){}

/*
create a native class

@param {string} className The name of a native class
@param {string} initMethod Only available for Objective-C
@param {object,...} arguments Constructor function parameters

@return jsa.NativeObject
*/
function $new(){className,initMethod,arg,...}