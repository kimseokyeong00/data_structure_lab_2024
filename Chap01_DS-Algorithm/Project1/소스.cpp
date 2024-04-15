void sub(int x, int arr[]) {
	x = 10;
	arr[0] = 10;
}
void main()
{
	int var,
		int list[2];

	var = 0;
	list[0] = 0;
	sub(var, list);
	//var?, list[0]?
	printf("var=%d, list[0]=%d \n", var, list[0]);
}