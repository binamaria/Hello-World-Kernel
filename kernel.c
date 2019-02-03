/* Kernel.c
 * Bina Maria (00366107)
 * MS (CS) Fall - 17
 * Kernel program to print "Hello World" at the top-left corner of the screen.
 */

/* Declaring Function */
void showHelloWorld();

/* Declaring Variables */
int color = 0x7;
int segmentBaseAddress = 0xB000;
int memoryBaseAddress = 0x8000;

/* The entry point of the program */
int main()
{
	showHelloWorld();
	
/* Infinite Loop */
	while (1==1)
     {
       }

}

/* Prints "Hello World!" at the top-left corner of the screen */
void showHelloWorld()
{

	putInMemory(segmentBaseAddress, memoryBaseAddress, 'H');
	putInMemory(segmentBaseAddress, memoryBaseAddress + 1, color);

	putInMemory(segmentBaseAddress, memoryBaseAddress + 2, 'e');
	putInMemory(segmentBaseAddress, memoryBaseAddress + 3, color);

	putInMemory(segmentBaseAddress, memoryBaseAddress + 4, 'l');
	putInMemory(segmentBaseAddress, memoryBaseAddress + 5, color);

	putInMemory(segmentBaseAddress, memoryBaseAddress + 6, 'l');
	putInMemory(segmentBaseAddress, memoryBaseAddress + 7, color);

	putInMemory(segmentBaseAddress, memoryBaseAddress + 8, 'o');
	putInMemory(segmentBaseAddress, memoryBaseAddress + 9, color);

	putInMemory(segmentBaseAddress, memoryBaseAddress + 10, ' ');
	putInMemory(segmentBaseAddress, memoryBaseAddress + 11, color);

	putInMemory(segmentBaseAddress, memoryBaseAddress + 12, 'W');
	putInMemory(segmentBaseAddress, memoryBaseAddress + 13, color);

	putInMemory(segmentBaseAddress, memoryBaseAddress + 14, 'o');
	putInMemory(segmentBaseAddress, memoryBaseAddress + 15, color);

	putInMemory(segmentBaseAddress, memoryBaseAddress + 16, 'r');
	putInMemory(segmentBaseAddress, memoryBaseAddress + 17, color);

	putInMemory(segmentBaseAddress, memoryBaseAddress + 18, 'l');
	putInMemory(segmentBaseAddress, memoryBaseAddress + 19, color);

	putInMemory(segmentBaseAddress, memoryBaseAddress + 20, 'd');
	putInMemory(segmentBaseAddress, memoryBaseAddress + 21, color);

	putInMemory(segmentBaseAddress, memoryBaseAddress + 22, '!');
	putInMemory(segmentBaseAddress, memoryBaseAddress + 23, color);
}


