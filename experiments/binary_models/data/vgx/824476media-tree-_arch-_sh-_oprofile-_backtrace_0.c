static void FUN1(void *VAR1, unsigned long VAR2, int VAR3)
{
unsigned int *VAR4 = VAR1;

if ((*VAR4)--)
FUN2(VAR2);
}