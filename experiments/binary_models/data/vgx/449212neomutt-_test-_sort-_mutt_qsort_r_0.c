static void *VAR1;


static int FUN1(const void *VAR2, const void *VAR3, void *VAR4)
{
FUN2(VAR4 == VAR1);
if (!VAR4)
return *(int *) VAR2 - *(int *) VAR3;
return *(int *) VAR3 - *(int *) VAR2;
}