static int FUN1(struct socket *VAR1)
{
struct VAR1 *VAR2 = VAR1->VAR2;
struct VAR3 *VAR4;

if (!VAR2)
return 0;

VAR4 = FUN2(VAR2);

FUN3(&VAR5);
while (VAR6 == VAR4) {
FUN4(&VAR5);
FUN5(1);
FUN3(&VAR5);
}
FUN6(&VAR4->VAR7);
FUN4(&VAR5);

FUN7(VAR2);


if (VAR4->VAR8) {
if (VAR4->VAR9) {
struct VAR10 *VAR11;

VAR11 = FUN8(FUN9(VAR2), VAR4->VAR9);
if (VAR11) {
FUN10(FUN11(VAR11), VAR11, VAR2);
FUN12(VAR11);
}
} else {
FUN10(FUN9(VAR2), NULL, VAR2);
}
}

if (VAR4->VAR12 > 1)
FUN13(VAR4->VAR13);

VAR4->VAR9 = 0;
VAR4->VAR8 = 0;
VAR4->VAR12 = 0;
FUN14(VAR4->VAR14);

FUN15(VAR2);
VAR1->VAR2 = NULL;

FUN16(VAR2);
FUN17(VAR2);

return 0;
}