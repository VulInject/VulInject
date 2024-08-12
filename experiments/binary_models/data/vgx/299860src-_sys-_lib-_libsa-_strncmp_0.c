int
FUN1(const char *VAR1, const char *VAR2, size_t VAR3)
{
if (VAR3-- == 0)
return 0;

while (*VAR1 && *VAR2 && VAR3-- && *VAR1 == *VAR2)
VAR1++, VAR2++;
return *VAR1 - *VAR2;
}