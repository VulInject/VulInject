static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR3 *VAR5)
{
int VAR6 = (FUN2(VAR4) != FUN2(VAR5));
struct VAR3 *VAR7 = NULL;

FUN3();


if (FUN2(VAR4)) {
FUN4(VAR4, VAR4->VAR8->VAR9, false);
if (VAR2->VAR10.VAR11) {

FUN5(VAR2, VAR4);
}
} else {
VAR7 = VAR4;
}

if (FUN2(VAR5)) {
FUN4(VAR5, VAR5->VAR8->VAR9, false);
if (VAR2->VAR10.VAR11) {

FUN5(VAR2, VAR5);
}
} else {
VAR7 = VAR5;
}

if (VAR2->VAR10.VAR11 && VAR6) {

FUN6(VAR2,
VAR7->VAR8->VAR9);
}
}