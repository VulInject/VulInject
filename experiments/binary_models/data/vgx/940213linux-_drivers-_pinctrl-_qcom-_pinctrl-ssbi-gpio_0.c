static int FUN1(struct VAR1 *VAR2,
unsigned VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = VAR5->VAR8.VAR9[VAR3].VAR10;
u8 VAR11;

VAR7->VAR12 = VAR13;
VAR11 = VAR7->VAR12 << 2;

FUN3(VAR5, VAR7, 1, VAR11);

return 0;
}