static int FUN1(void)
{
static bool VAR1 = false;
int VAR2;

if (VAR1)
return 0;

VAR2 = FUN2();
if (VAR2 < 0)
{
FUN3("", FUN4(VAR2));
return -1;
}

VAR1 = true;
return 0;
}