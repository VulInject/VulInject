static int
FUN1(const VAR1 *VAR2, u_char VAR3, size_t VAR4, VAR5 *VAR6)
{
size_t VAR7;

for (VAR7 = 0; VAR7 < VAR4; VAR7++) {
if (VAR2[VAR7] != VAR3) {
*VAR6 = VAR7;
return 1;
}
}
return 0;
}