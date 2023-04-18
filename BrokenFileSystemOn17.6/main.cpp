#include <compare>

import brokenIter;

int main() {
	/*
	without #include <compare> code will complain about missing std::partial_order from #compare

	with #include <compare> the code during build output will generate the given error (which is also reflected as a compile error):

	..\include\type_traits(2118,13): error C2678: binary '&': no operator found which takes a left-hand operand of type '_Bitmask' (or there is no acceptable conversion)
         with
         [
             _Bitmask=__std_fs_file_attr
         ]
	*/

	//the problem functions defined are the 2 below, a static or non static method both exibits the compile error described above
	thing thingO = thing();
	thingO.iterDirBroken1(); 
	thing::iterDirBroken2();  
	


	//the following function will work though if the previous 2 are not compiled
	noStructIter();

	
	return 0;
}