int FUN1(VAR1 *VAR2, char **VAR3)
{
char *VAR4;
int VAR5;
uint32_t VAR6;
int VAR7;
if ((VAR7 = FUN2(VAR2, (unsigned char *)&VAR6, sizeof(VAR6))) < 0)
return VAR7;
VAR5 = FUN3(VAR6);
if (VAR5 == -1)
VAR4 = NULL;
else {
if ((VAR4 = (char *)malloc(VAR5 + 1)) == NULL)
return VAR8;
if (VAR5 > 0) {
if ((VAR7 = FUN2(VAR2, (unsigned char *)VAR4, VAR5)) < 0)
return VAR7;
}
VAR4[VAR5] = '';
}
*VAR3 = VAR4;
FUN4(FUN5(""%VAR9\"", *VAR3));
return VAR10;
}