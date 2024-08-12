static char *
FUN1(size_t VAR1)
{
char *VAR2, *VAR3, *VAR4;
VAR3 = FUN2("", VAR1);
VAR4 = FUN3(VAR3, "");
free(VAR3);
VAR3 = FUN2("", VAR1);
VAR2 = FUN3(VAR4, VAR3);
free(VAR3);
free(VAR4);
return VAR2;
}