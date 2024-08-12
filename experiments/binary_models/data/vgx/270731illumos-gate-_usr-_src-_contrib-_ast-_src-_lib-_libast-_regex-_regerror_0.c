VAR1
FUN1(int VAR2, const VAR3* VAR4, char* VAR5, size_t VAR6)
{
const char*	VAR7;

FUN2(VAR4);
if (VAR2++ == VAR8)
VAR7 = (const char*)FUN3(&VAR9[1]);
else if (VAR2 >= 0 && VAR2 < FUN4(VAR10))
VAR7 = VAR10[VAR2];
else
VAR7 = (const char*)"";
if (VAR6)
{
FUN5(VAR5, VAR7, VAR6);
VAR5[VAR6 - 1] = 0;
}
else
VAR5 = (char*)VAR7;
return strlen(VAR5) + 1;
}