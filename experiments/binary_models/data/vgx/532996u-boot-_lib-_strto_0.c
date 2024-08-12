VAR1 FUN1(const char *VAR2, char **VAR3, uint VAR4)
{
ulong VAR5 = 0;
uint VAR6;

VAR2 = FUN2(VAR2, &VAR4);

while (VAR6 = FUN3(*VAR2), VAR6 < VAR4) {
VAR5 = VAR5 * VAR4 + VAR6;
VAR2++;
}

if (VAR3)
*VAR3 = (char *)VAR2;

return VAR5;
}