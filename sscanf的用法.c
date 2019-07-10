char * complexNumberMultiply(char * x, char * y)
{
    int a, b ,c ,d;
    char *ret = malloc(sizeof(char)*13);
    a = b = c = d = 0;
    sscanf(x, "%d+%d", &a, &b);
    sscanf(y, "%d+%d", &c, &d);
    sprintf(ret,"%d+%di",(a*c-b*d),(a*d+b*c));
    return ret;
}
力扣复数乘法的答案
