void
FUN1(int VAR1, const char *VAR2, int assert)
{
int VAR3;

VAR3 = FUN2(VAR1, VAR2, "");
if (VAR3 == -1)
return;

FUN3(VAR1, VAR3, assert);
}