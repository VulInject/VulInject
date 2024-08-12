static void FUN1(struct VAR1 *VAR2, bool VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR6;

VAR6 = FUN3(VAR2);
if (VAR3)
FUN4(FUN5(VAR2));
else
FUN6(VAR2);
if (FUN4(!FUN7(VAR7, &VAR6->private))) {
FUN8(VAR2);
return;
}
FUN9(&VAR5->VAR8);
FUN10(&VAR2->VAR9);
FUN11(&VAR5->VAR8);

if (FUN12(&VAR2->VAR10, VAR11))
return;

if (FUN13(VAR12, &VAR6->private) ||
FUN14(VAR13, &VAR6->private)) {
FUN8(VAR2);
return;
}

if (!VAR2->VAR14 && FUN15(VAR2) &&
VAR2->VAR15 == 0 && FUN16(VAR2)) {
if (!FUN12(&VAR2->VAR10, VAR11)) {
FUN17(VAR13, &VAR6->private);
FUN8(VAR2);
}
return;
}

FUN18(VAR2);
FUN19(VAR5, VAR2);
FUN17(VAR13, &VAR6->private);
FUN8(VAR2);
}