static int FUN1(VAR1* VAR2, const char* VAR3, int VAR4)
{
int VAR5;
VAR6* VAR7 = (VAR6*)FUN2(VAR2);
FUN3(VAR2, VAR8);
EnterCriticalSection(&VAR7->VAR9);
VAR5 = FUN4(VAR7, (const VAR10*)VAR3, VAR4);
LeaveCriticalSection(&VAR7->VAR9);

if (VAR5 < 0)
{
FUN3(VAR2, VAR11);
return -1;
}
else if (VAR5 < VAR4)
{
FUN5(VAR2, VAR8);
FUN6(VAR12);
}
else
{
FUN5(VAR2, VAR8);
}

return VAR5;
}