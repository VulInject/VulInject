static int FUN1(void)
{
int VAR1 = 0;
VAR2 *VAR3 = NULL;
VAR3 = FUN2(NULL, "", NULL);
if (VAR3 != NULL) {
FUN3(NULL, VAR3);
VAR1 = 1;
}

return VAR1;
}