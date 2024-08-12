int
FUN1(VAR1 *VAR2, fread_t VAR3, fwrite_t VAR4, fseek_t VAR5,
fclose_t VAR6, void *VAR7)
{
VAR8 *VAR9 = FUN2(VAR2);

if (VAR9 == NULL) {
VAR9 = malloc(sizeof (*VAR9));
if (VAR9 == NULL) {
return (-1);
}
FUN3(VAR2, VAR9);
}

VAR9->VAR10 = VAR3;
VAR9->VAR11 = VAR4;
VAR9->VAR12 = VAR5;
VAR9->VAR13 = VAR6;
VAR9->VAR14 = VAR7;

return (0);
}