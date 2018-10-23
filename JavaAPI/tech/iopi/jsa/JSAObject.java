package tech.iopi.jsa;

/**
 * A JSAObject is a reference to a JavaScript object.
 * 
 * @author Neal
 *
 */
public interface JSAObject {
	/**
	 * Invoke the specified function on the JS object
	 * 
	 * @param method The name of the method
	 * @param arguments The arguments to pass to the function.
	 * @return The return value of the function call.
	 */
	public Object invokeMethod(String method,Object... arguments);
}
