char *FUN1(char *VAR1, char **VAR2)
{
char *VAR3 = FUN2(VAR1);

*VAR2 = NULL;
if (VAR3[0] == '') {
char *VAR4 = strchr(&VAR3[1], '');
*VAR2 = FUN3(&VAR3[1]);
if (VAR4) {

*VAR4++ = 0;
if (FUN4(VAR4, "
VAR4 += 2;
VAR3 = FUN3(VAR4);
} else

VAR3 = NULL;
}
if (VAR3 && *VAR3 == 0)
VAR3 = NULL;

return VAR3;
}