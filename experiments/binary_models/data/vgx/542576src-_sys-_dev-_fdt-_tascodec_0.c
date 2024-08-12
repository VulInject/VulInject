int
FUN1(void *VAR1, VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR1;
u_char VAR6;

switch (VAR3->VAR7) {
case VAR8:
VAR6 = VAR3->VAR9.VAR10.VAR6[VAR11];
VAR5->VAR12 = (VAR13 * (255 - VAR6)) / 255;
FUN2(VAR5, VAR14, VAR5->VAR12);
return 0;
}

return VAR15;
}