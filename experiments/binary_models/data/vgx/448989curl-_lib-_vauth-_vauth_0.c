bool FUN1(const char *VAR1)
{
bool VAR2 = VAR3;

if(VAR1 && *VAR1) {

char *VAR4 = strpbrk(VAR1, "");

VAR2 = (VAR4 != NULL && VAR4 > VAR1 && VAR4 < VAR1 + strlen(VAR1) - 1 ? VAR5 :
VAR3);
}
else

VAR2 = VAR5;

return VAR2;
}