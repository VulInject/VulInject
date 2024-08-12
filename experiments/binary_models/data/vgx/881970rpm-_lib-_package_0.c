VAR1 FUN1(rpmts VAR2, FD_t VAR3, VAR4 *VAR5, char ** VAR6)
{
char *VAR7 = NULL;
struct hdrblob_s VAR8;
Header VAR9 = NULL;
rpmRC VAR10 = VAR11;		

if (VAR5)
*VAR5 = NULL;
if (VAR6)
*VAR6 = NULL;

if (FUN2(VAR3, 1, 1, VAR12, &VAR8, &VAR7) != VAR13)
goto VAR14;


VAR10 = FUN3(&VAR8, 0, &VAR9, &VAR7);

VAR14:
if (VAR5 && VAR9 && VAR10 == VAR13)
*VAR5 = FUN4(VAR9);
FUN5(VAR9);

if (VAR6 != NULL && *VAR6 == NULL && VAR7 != NULL) {
*VAR6 = VAR7;
} else {
free(VAR7);
}

return VAR10;
}