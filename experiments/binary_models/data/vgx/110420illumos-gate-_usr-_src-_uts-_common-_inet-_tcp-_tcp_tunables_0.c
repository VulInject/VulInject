static int
FUN1(void *VAR1, struct VAR2 *VAR3)
{
VAR4 *VAR5 = VAR1;
char *VAR6 = VAR5->VAR7 > 0 ? "" : "";
size_t VAR8 = 0;

if (VAR5->VAR7 < VAR5->VAR9) {
VAR8 = VAR5->VAR9 - VAR5->VAR7;
}

VAR5->VAR7 += snprintf(VAR5->VAR10 + VAR5->VAR7, VAR8,
"", VAR6, VAR3->VAR11);

return (VAR5->VAR7 >= VAR5->VAR9 ? VAR12 : 0);
}