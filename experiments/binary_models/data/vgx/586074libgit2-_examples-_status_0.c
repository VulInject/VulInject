static void FUN1(VAR1 *VAR2, int VAR3)
{
int VAR4 = 0;
const char *VAR5 = NULL;
VAR6 *VAR7 = NULL;

VAR4 = FUN2(&VAR7, VAR2);

if (VAR4 == VAR8 || VAR4 == VAR9)
VAR5 = NULL;
else if (!VAR4) {
VAR5 = FUN3(VAR7);
} else
FUN4(VAR4, "", NULL);

if (VAR3 == VAR10)
FUN5("",
VAR5 ? VAR5 : "");
else
FUN5("", VAR5 ? VAR5 : "");

FUN6(VAR7);
}