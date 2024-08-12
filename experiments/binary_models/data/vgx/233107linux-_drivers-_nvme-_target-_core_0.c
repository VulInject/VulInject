static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6[2];
struct VAR7 *VAR8;
int VAR9;

if (!VAR2->VAR10 || !VAR4->VAR11)
return;

if (VAR4->VAR8) {
VAR9 = FUN2(VAR4->VAR8, VAR2->VAR10, true);
if (VAR9 < 0)
return;

VAR8 = FUN3(VAR4->VAR8);
} else {
VAR6[0] = VAR2->VAR10;
VAR6[1] = FUN4(VAR4);

VAR8 = FUN5(VAR6, FUN6(VAR6));
if (!VAR8) {
FUN7("",
FUN8(VAR2->VAR10), VAR4->VAR12);
return;
}
}

VAR9 = FUN9(&VAR2->VAR13, VAR4->VAR14, VAR8);
if (VAR9 < 0)
FUN10(VAR8);

FUN11("", FUN12(VAR8),
VAR4->VAR14);
}