package tech.iopi.jsa;

/**
 * JSA Syntactic Sugar for Java
 * 
 *  @author Neal
 *  
 */
public interface JSAppSugar 
{
	/**
	 * Creates a new instance of a JSA class.
	 * 
	 * @param className The name of a JSA class
	 * @param arguments The arguments to pass to the constructor.
	 * @return JSAObject
	 */
	public JSAObject newClass(String className,Object... arguments);
	
	
	/**
	 * Invoke the specified static function on the JS class
	 * 
	 * @param className The name of a JSA class
	 * @param method The name of a method
	 * @param arguments The arguments to pass to the function.
	 * @return The return value of the function call.
	 */
	public Object invokeClassMethod(String className,String method,Object... arguments);
}
