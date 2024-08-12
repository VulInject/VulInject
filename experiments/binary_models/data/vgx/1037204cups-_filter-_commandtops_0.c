static void
FUN1(VAR1 *VAR2,		
const char *VAR3)		
{
(void)VAR3;

if (VAR2->VAR4)
{
fputs(VAR2->VAR4, VAR5);
fputs(VAR2->VAR6, VAR5);
}

FUN2("");
FUN2("");

FUN3(VAR5);
}