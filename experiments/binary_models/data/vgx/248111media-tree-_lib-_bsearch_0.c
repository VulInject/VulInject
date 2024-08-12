void *FUN1(const void *VAR1, const void *VAR2, size_t VAR3, size_t VAR4,
int (*VAR5)(const void *VAR1, const void *VAR6))
{
size_t VAR7 = 0, VAR8 = VAR3;
int VAR9;

while (VAR7 < VAR8) {
size_t VAR10 = VAR7 + (VAR8 - VAR7) / 2;

VAR9 = FUN2(VAR1, VAR2 + VAR10 * VAR4);
if (VAR9 < 0)
VAR8 = VAR10;
else if (VAR9 > 0)
VAR7 = VAR10 + 1;
else
return (void *)VAR2 + VAR10 * VAR4;
}

return NULL;
}