static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
unsigned int VAR5;

for (VAR5 = 0; VAR5 < VAR4->VAR6; VAR5++) {
struct VAR7 *VAR8 = VAR4->VAR8[VAR5];
unsigned long VAR9;

if (VAR8) {
FUN3(VAR8->VAR10, VAR9);
if (FUN4(&VAR8->VAR2) == VAR4)
FUN5(&VAR8->VAR2, NULL);
FUN6(VAR8->VAR10, VAR9);
FUN7(&VAR8->VAR2);
}
}

FUN8(VAR4);
}