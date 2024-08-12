int FUN1(const char *VAR1, unsigned int VAR2, void *VAR3)
{
volatile int *VAR4 = (int *)VAR3;

FUN2(VAR1);
FUN2(VAR2);

(*VAR4)++;

return 0;
}