static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = FUN3(VAR6, 0);
struct VAR7 *VAR9 = FUN4(VAR6, 0);
unsigned int VAR10;
unsigned int VAR11 = FUN5(VAR4);
unsigned int VAR12 = VAR11 > 192000 ? 2 : 4;
unsigned int VAR13 = 64;

VAR10 = VAR11 * VAR13 * VAR12;


FUN6(VAR8, 0, VAR10, VAR14);


FUN6(VAR9, 0, VAR10, VAR15);

return 0;
}