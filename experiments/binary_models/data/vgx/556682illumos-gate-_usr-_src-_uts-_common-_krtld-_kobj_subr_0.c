static VAR1
FUN1(char *VAR2, const char *VAR3, size_t VAR4)
{
char *VAR5 = VAR2;
size_t VAR6 = VAR4;
size_t VAR7;
size_t VAR8 = strlen(VAR3);
size_t VAR9;

while (VAR6-- != 0 && *VAR5 != '')
VAR5++;
VAR7 = VAR5 - VAR2;
if (VAR4 == VAR7)
return (VAR7 + VAR8);

VAR9 = VAR7 + VAR8 >= VAR4 ? VAR4 - VAR7 - 1 : VAR8;
bcopy(VAR3, VAR2 + VAR7, VAR9);
VAR2[VAR7+VAR9] = '';
return (VAR7 + VAR8);
}