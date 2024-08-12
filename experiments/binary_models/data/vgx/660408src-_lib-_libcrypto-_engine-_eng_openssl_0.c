static int
FUN1(VAR1 *VAR2, const VAR3 **VAR4, const int **VAR5, int VAR6)
{
if (!VAR4) {

*VAR5 = VAR7;
return VAR8;
}

if (VAR6 == VAR9)
*VAR4 = &VAR10;
else {
fprintf(VAR11, ""
"", VAR6);
*VAR4 = NULL;
return 0;
}
return 1;
}