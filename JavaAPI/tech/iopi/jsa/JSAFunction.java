package tech.iopi.jsa;

/**
 * A JSAFunction is a reference to a JavaScript function. Every JSAFunction holds a strong reference to it.
 * 
 * @author Neal
 *
 */
public interface JSAFunction {
	
	/**
	 * Invoke the JS function
	 * 
	 * @param arguments The arguments to pass to the function.
	 * @return The return value of the function call.
	 */
	public Object call(Object... arguments);
	
	/**
	 * Invoke the JS function with the specified this value
	 * 
	 * @param thisObject The value of this provided for the call to function
	 * @param arguments The arguments to pass to the function.
	 * @return The return value of the function call.
	 */
	public Object apply(Object thisObject,Object... arguments);
	
}
