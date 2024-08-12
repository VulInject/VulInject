int FUN1(struct VAR1 *VAR2)
{
unsigned long VAR3 = 0;
char *VAR4 = NULL;
const char *VAR5;
int VAR6;

if (strcmp(VAR2->VAR7, ""))
return -22;

if (!VAR2->VAR5 || !VAR2->VAR8)
return -22;

if (FUN2(VAR2->VAR9, &VAR3, &VAR4) < 0) {
free(VAR4);
return -22;
}

VAR5 = FUN3(VAR2->VAR5, "");

VAR6 = FUN4(VAR5, VAR2->VAR8, "", VAR10 | VAR11 | VAR3, VAR4);
free(VAR4);
return VAR6;
}