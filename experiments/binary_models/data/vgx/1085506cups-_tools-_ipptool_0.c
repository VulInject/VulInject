static void
FUN1(
VAR1 *VAR2,		
int              VAR3,		
const char       *VAR4)		
{
if (VAR2->VAR5)
{
FUN2(VAR2->VAR6, "");
FUN2(VAR2->VAR6, "");
FUN2(VAR2->VAR6, VAR3 ? "" : "");
if (VAR4)
{
FUN2(VAR2->VAR6, "");
FUN3(VAR2->VAR6, "", VAR4);
}
FUN2(VAR2->VAR6, "");
FUN2(VAR2->VAR6, "");

VAR2->VAR5 = 0;
}
}