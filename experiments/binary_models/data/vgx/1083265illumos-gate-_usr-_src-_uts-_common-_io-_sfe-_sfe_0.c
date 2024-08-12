static void
FUN1(struct VAR1 *VAR2, int VAR3)
{
uint_t			VAR4 = VAR2->VAR5.VAR6;
struct VAR7		*VAR8;
uint32_t		VAR9;

VAR8 = (void *)&VAR2->VAR10[VAR11 * VAR3];


VAR8->VAR12 = 0;


VAR9 = ((VAR13)VAR2->VAR14) + VAR11*VAR3;

VAR8 = (void *)
&VAR2->VAR10[VAR11 * FUN2(VAR3 - 1, VAR4)];
VAR8->VAR15 = FUN3(VAR9);
}