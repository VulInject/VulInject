static void FUN1(void* VAR1, size_t VAR2)
{
VAR3* VAR4;

if (!VAR1)
return;

VAR4 = ((VAR3*)VAR1) - (VAR2 + 1) / 2;
FUN2(VAR4);
}