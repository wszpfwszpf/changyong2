int isPrime(int n);//判断n是否为素数，如果是则返回1，否则返回0.
int isPrime(int n)//判断n是否为素数，如果是则返回1，否则返回0.
{
	int i;
	for(i = 2; i*i <= n; i ++)//从2到算术平方根遍历。
		if(n%i == 0) return 0;//存在约数，不是素数，返回0.
	return 1;//不存在约数，返回1，表示为素数。
}
