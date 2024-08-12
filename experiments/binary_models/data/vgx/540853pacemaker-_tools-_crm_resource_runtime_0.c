static int
FUN1(VAR1 *VAR2, VAR3 * VAR4, const char *VAR5,
const char *VAR6, const char *VAR7, const char *VAR8,
const char *VAR9, const char *VAR10, char **VAR11)
{
int VAR12 = VAR13;
VAR14 *VAR15 = NULL;
VAR16 *VAR17 = NULL;
const char *VAR18 = NULL;

if(VAR11) {
*VAR11 = NULL;
}

if(VAR4 == NULL) {
return VAR19;
}

VAR18 = FUN2(VAR20);
if (VAR18 == NULL) {
FUN3(VAR20 "");
return VAR21;
}

VAR17 = FUN4(1024);
FUN5(VAR17,
VAR18, "/