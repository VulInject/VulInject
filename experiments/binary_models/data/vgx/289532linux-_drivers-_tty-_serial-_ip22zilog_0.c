static void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
const struct VAR3 *VAR5)
{
struct VAR6 *VAR7 =
FUN2(VAR2, struct VAR6, VAR2);
unsigned long VAR8;
int VAR9, VAR10;

VAR9 = FUN3(VAR2, VAR4, VAR5, 1200, 76800);

FUN4(&VAR7->VAR2.VAR11, VAR8);

VAR10 = FUN5(VAR9, VAR12 / VAR13);

FUN6(VAR7, VAR4->VAR14, VAR4->VAR15, VAR10);

if (FUN7(&VAR7->VAR2, VAR4->VAR14))
VAR7->VAR8 |= VAR16;
else
VAR7->VAR8 &= ~VAR16;

FUN8(VAR7, FUN9(VAR2));
FUN10(VAR2, VAR4->VAR14, VAR9);

FUN11(&VAR7->VAR2.VAR11, VAR8);
}