// print

process.stdout.write("hello");

console.log("hello");    		// new line character is extra ffrom previous command

console.log(process);
// global & process keyword
global.a="abc"; 			// to be avoided as it could causes memory leakage in a large project

var abc=0;			// variable

var obj={};			// object : work similar to malloc, memory taken from heap

function firstFunction(argument)   			// call by value
{
	argument=56;
}
