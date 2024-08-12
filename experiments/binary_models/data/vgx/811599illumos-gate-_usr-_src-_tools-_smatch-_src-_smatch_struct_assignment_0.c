static int FUN1(struct VAR1 *VAR2)
{
char *VAR3;

if (VAR2->VAR4 != VAR5 || VAR2->VAR3->VAR4 != VAR6)
return 0;
VAR3 = FUN2(VAR2->VAR3);
if (!VAR3)
return 0;
if (strcmp(VAR3, "") == 0)
return 1;
if (VAR7 == VAR8 && strstr(VAR3, ""))
return 1;
return 0;
}