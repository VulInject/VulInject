static int
FUN1(struct VAR1 *VAR2, char **VAR3)
{
struct VAR1 *VAR4 = NULL;
char *VAR5 = NULL;
int VAR6 = VAR7;

if (VAR3 != NULL)
*VAR3 = NULL;
if ((VAR4 = FUN2(VAR2)) == NULL)
return VAR8;
if ((VAR6 = FUN3(VAR4)) != 0)
goto VAR9;
if ((VAR6 = FUN4(VAR4, NULL, NULL)) != 0 ||
(VAR6 = FUN4(VAR4, NULL, NULL)) != 0 ||
(VAR6 = FUN5(VAR4, NULL, NULL)) != 0 ||
(VAR6 = FUN6(VAR4, &VAR5, NULL)) != 0 ||
(VAR6 = FUN4(VAR4, NULL, NULL)) != 0) {
FUN7(VAR6, "");
goto VAR9;
}


VAR6 = 0;
*VAR3 = VAR5;
VAR5 = NULL;
VAR9:
free(VAR5);
FUN8(VAR4);
return VAR6;
}