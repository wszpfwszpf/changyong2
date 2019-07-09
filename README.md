#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

	return 0;
}

字符本身就是数字啊！！！！！
int isPrime(int n);//判断n是否为素数，如果是则返回1，否则返回0.
int isPrime(int n)//判断n是否为素数，如果是则返回1，否则返回0.
{
	int i;
	for(i = 2; i*i <= n; i ++)//从2到算术平方根遍历。
		if(n%i == 0) return 0;//存在约数，不是素数，返回0.
	return 1;//不存在约数，返回1，表示为素数。
}


void bubble_sort(int a[], int n);//冒泡排序
void bubble_sort(int a[], int n)
{
    int i, j, temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
}


qsort
int comp(const void*a,const void*b)
{
return *(int*)a-*(int*)b;
}
上面是由小到大排序，
return *(int *)b - *(int *)a; 为由大到小排序。
qsort(a,1000,sizeof(int),comp);

快速排序
void quick_sort(int *a, int left, int right)
{
    if(left >= right)/*如果左边索引大于或者等于右边的索引就代表已经整理完成一个组了*/
    {
        return ;
    }
    int i = left;
    int j = right;
    int key = a[left];
    while(i < j)            
    {   
		 while(i < j && key <= a[j])
        {
            j--;/*向前寻找*/
        }
        a[i] = a[j];
        while(i < j && key >= a[i])
        {
            i++;
        } 
        a[j] = a[i];
    }
    a[i] = key;
    quick_sort(a, left, i - 1);
    quick_sort(a, i + 1, right);
}
void qsort(void *base, int nelem, int width, int (*fcmp)(const void *,const void *));
参数：
　　1 待排序数组首地址
　　2 数组中待排序元素数量
　　3 各元素的占用空间大小
　　4 指向函数的指针，用于确定排序的顺序
void sort(int *a, int left, int right)
{
    if(left >= right)/*如果左边索引大于或者等于右边的索引就代表已经整理完成一个组了*/
    {
        return ;
    }
    int i = left;
    int j = right;
    int key = a[left];
     
    while(i < j)                               /*控制在当组内寻找一遍*/
    {
        while(i < j && key <= a[j])
        /*而寻找结束的条件就是，1，找到一个小于或者大于key的数（大于或小于取决于你想升
        序还是降序）2，没有符合条件1的，并且i与j的大小没有反转*/ 
        {
            j--;/*向前寻找*/
        }
         
        a[i] = a[j];
        /*找到一个这样的数后就把它赋给前面的被拿走的i的值（如果第一次循环且key是
        a[left]，那么就是给key）*/
         
        while(i < j && key >= a[i])
        /*这是i在当组内向前寻找，同上，不过注意与key的大小关系停止循环和上面相反，
        因为排序思想是把数往两边扔，所以左右两边的数大小与key的关系相反*/
        {
            i++;
        }
         
        a[j] = a[i];
    }
     
    a[i] = key;/*当在当组内找完一遍以后就把中间数key回归*/
    sort(a, left, i - 1);/*最后用同样的方式对分出来的左边的小组进行同上的做法*/
    sort(a, i + 1, right);/*用同样的方式对分出来的右边的小组进行同上的做法*/
                       /*当然最后可能会出现很多分左右，直到每一组的i = j 为止*/
}



while(scanf("%d %d",&m,&n)!=EOF) 
//这一段可以用来一直读数据


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

二分查找
第一种
int BinSearch(SeqList *R，int n,KeyType K)
{
    //在有序表R[0..n-1]中进行二分查找，成功时返回结点的位置，失败时返回-1
    int low=0,high=n-1,mid；     //置当前查找区间上、下界的初值
    while(low<=high)
    {
        if(R[low].key==K)
            return low;
        if(R[high].key==k)
            return high;          //当前查找区间R[low..high]非空
        mid=low+((high-low)/2);
            /*使用(low+high)/2会有整数溢出的问题
            （问题会出现在当low+high的结果大于表达式结果类型所能表示的最大值时，
                这样，产生溢出后再/2是不会产生正确结果的，而low+((high-low)/2)
                不存在这个问题*/
        if(R[mid].key==K)
          return mid;             //查找成功返回
        if(R[mid].key<K)
          low=mid+1;              //继续在R[mid+1..high]中查找
        else
          high=mid-1;             //继续在R[low..mid-1]中查找
    }
    if(low>high)
        return -1;//当low>high时表示所查找区间内没有结果，查找失败
}

第二种
int bsearchWithoutRecursion(int array[],int low,int high,int target)
{
    while(low<=high)
        {
            int mid=(low+high)/2;
            if(array[mid]>target)
                high=mid-1;
            else if(array[mid]<target)
            low=mid+1;
            else
                return mid;
        }
    return-1;
}

第三种
int binSearch(const int *Array,int start,int end,int key)
{
        int left,right;
        int mid;
        left=start;
        right=end;
        while(left<=right)
             
        {
                    mid=(left+right)/2;
                    if(key==Array[mid])  return mid;
                    else if(key<Array[mid]) right=mid-1;
                    else if(key>Array[mid]) left=mid+1;
                 
        }
        return -1;
}


//把整数123 打印成一个字符串保存在s 中。
sprintf(s, "%d", 123); //产生"123"
把字符串转为数字的函数
atoi    ASCII to integer



 while(scanf("%d", &k) != EOF)
    {
     	data = (int *)malloc(k * sizeof(int));
	for(i = 0; i < k; i ++)
        {
            scanf("%d", &data[i]);
        }
    }一种动态分配方式，不会分配多余的内存




贪心算法，求两个数列中元素的乘积，一个元素只能用一次，求最大值。
数列必须是从小到大排序的。
int greed(int shorter[],int length_short,int longer[],int length_longer)
{
	int total = 0;
	for (int i=0;i<length_short;i++)
	{
		if (shorter[i] < 0 && shorter[i]*longer[i] > 0)
		{
			total += shorter[i]*longer[i];
		}
		if (shorter[i] > 0 && shorter[i]*longer[length_longer-length_short+i] > 0)
		{
			total += shorter[i]*longer[length_longer-length_short+i];
		}
	}
	return total;
}


不能通过下面的方式将数组初始化为1
char arr[100] = {1};
但是可以利用下面的方式将数组初始化为0
char arr[100] = {0};
第二条利用的是系统的默认初始化，非完全赋值其余的自动设为0。


处理字符串的函数要记住，有时候处理字符串不见得比处理数字麻烦


本题要求实现一个函数，计算阶数为n，系数为a[0] ... a[n]的多项式f(x)=∑
?i=0
?n
?? (a[i]×x
?i
 ) 在x点的值。
double f( int n, double a[], double x )
{
	double count = 0;
	double temp = 1;
	for (int i = 1;i<=n;i++)
	{
		temp *= x;
		count += a[i]*temp;
	}
	count += a[0];
	return count;
}




求任意数字的阶乘！
#include <stdio.h>

int a[100000]; //保存最终运算结果的数组
int main()
{
	int n;	//需要求阶乘的数字
	int jinwei; //进位
	int weishu = 1; //位数
	int temp, i, j; //temp为阶乘的任一元素与临时结果的某位的乘积结果
	scanf("%d", &n); //接收阶乘次数
	a[0] = 1; //将结果先初始化为1
	for (i = 1; i <= n; i++) //开始阶乘，阶乘元素从2开始依次登场	（正常循环）
	{
		//按乘法运算思想来考虑，将临时结果的每位与阶乘元素相乘  
		for (j = 1, jinwei = 0; j <= weishu; j++)
		{
			temp = a[j - 1] * i+jinwei ; //相应阶乘中的一项与当前所得临时结果的某位相乘（加上进位）
			a[j - 1] = temp % 10; //更新临时结果的位上信息
			jinwei = temp / 10; //看是否有进位
		}
		while (jinwei) //如果有进位
		{
			a[++weishu - 1] = jinwei % 10; //新加一位，添加信息。位数增1
			jinwei /= 10; //看还能不能进位
		}
	}
	printf("结果是:\n"); //显示结果
	for (i = weishu; i >= 1; i--)
	{
		printf("%d", a[i - 1]);
	}
}
