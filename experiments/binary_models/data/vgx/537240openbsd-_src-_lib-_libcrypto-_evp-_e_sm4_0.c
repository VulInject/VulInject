static int
FUN1(VAR1 *VAR2, unsigned char *VAR3, const unsigned char *VAR4, size_t VAR5)
{
while (VAR5 >= VAR6) {
FUN2(VAR4, VAR3, VAR6, &((VAR7 *)VAR2->VAR8)->VAR9, VAR2->VAR10, VAR2->VAR11);
VAR5 -= VAR6;
VAR4 += VAR6;
VAR3 += VAR6;
}

if (VAR5)
FUN2(VAR4, VAR3, VAR5, &((VAR7 *)VAR2->VAR8)->VAR9, VAR2->VAR10, VAR2->VAR11);

return 1;
}