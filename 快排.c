qsort
int comp(const void*a,const void*b)
{
return *(int*)a-*(int*)b;
}
上面是由小到大排序，
return *(int *)b - *(int *)a; 为由大到小排序。
qsort(a,1000,sizeof(int),comp);
