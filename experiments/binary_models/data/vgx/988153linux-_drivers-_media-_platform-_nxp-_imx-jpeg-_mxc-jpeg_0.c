static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6;

FUN3(VAR4->VAR7->VAR8, "", VAR4);


for (;;) {
if (FUN4(VAR2->VAR9))
VAR6 = FUN5(VAR4->VAR10.VAR11);
else
VAR6 = FUN6(VAR4->VAR10.VAR11);
if (!VAR6)
break;
FUN7(VAR6, VAR12);
}

if (FUN4(VAR2->VAR9) || !VAR4->VAR13)
FUN8(VAR4->VAR10.VAR11, VAR2);
if (FUN4(VAR2->VAR9) &&
FUN9(VAR4->VAR10.VAR11)) {
FUN10(VAR4);
VAR4->VAR14 = false;
}

FUN11(&VAR4->VAR7->VAR15->VAR8);
}