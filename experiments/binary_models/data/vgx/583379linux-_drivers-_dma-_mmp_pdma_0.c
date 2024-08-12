static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;


if (!VAR2->VAR5) {
FUN2(VAR2->VAR6, "");
return;
}

if (FUN3(&VAR2->VAR7)) {

FUN4(VAR2);
FUN2(VAR2->VAR6, "");
return;
}

if (!VAR2->VAR8) {
VAR2->VAR8 = FUN5(VAR2);
if (!VAR2->VAR8) {
FUN2(VAR2->VAR6, "");
return;
}
}


VAR4 = FUN6(&VAR2->VAR7,
struct VAR3, VAR9);
FUN7(&VAR2->VAR7, &VAR2->VAR10);


FUN8(VAR2->VAR8, VAR4->VAR11.VAR12);
FUN9(VAR2->VAR8);
VAR2->VAR5 = false;
}