VAR1 FUN1(char *VAR2, const VAR3 *VAR4, size_t VAR5)
{
size_t VAR6 = VAR4->VAR7 - VAR4->VAR8;

if (VAR5) {
size_t VAR9 = VAR6 >= VAR5 ? VAR5 - 1 : VAR6;
memcpy(VAR2, VAR4->VAR8, VAR9);
VAR2[VAR9] = '';
}
return VAR6;
}