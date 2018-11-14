
/*
Use native classes withod define a JS interface class. 
*/
class jsa.NativeObject extends jsa.Object{

	/*
	Invoke a method

	@param {string} methodName
	@param {object,...} arg

	@return Result of the function call.
	*/
	invoke(methodName,arg,...){}

}
