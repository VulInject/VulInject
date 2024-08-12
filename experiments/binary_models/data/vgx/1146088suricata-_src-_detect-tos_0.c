static int FUN1(void)
{
VAR1 *VAR2 = NULL;
VAR2 = FUN2("", false);
if (VAR2 != NULL && VAR2->VAR3 == 123 && !VAR2->VAR4) {
FUN3(NULL, VAR2);
return 1;
}

return 0;
}