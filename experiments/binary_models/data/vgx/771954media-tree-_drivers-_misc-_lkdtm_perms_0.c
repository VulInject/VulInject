void FUN1(void)
{

unsigned long *VAR1 = (unsigned long *)&VAR2;

FUN2("", VAR1);
*VAR1 ^= 0xabcd1234;
}