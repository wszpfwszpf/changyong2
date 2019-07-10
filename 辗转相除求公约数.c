//用辗转相除法求最大公约数
int Foo(int a, int b)
{
	if(a == 0 || b == 0)
	{
               printf("don't do that");
	}
	int c = a % b;
	if (c == 0)
	{
		return b;
	}
	return Foo(b, c);
}
