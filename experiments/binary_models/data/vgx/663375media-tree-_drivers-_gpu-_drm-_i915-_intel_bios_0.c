static void
FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
const struct VAR5 *VAR6;
const struct VAR7 *VAR8;
const struct VAR9 *VAR10;
int VAR11 = VAR2->VAR12.VAR11;


if (!FUN2(VAR2, NULL))
return;


VAR2->VAR12.VAR13.VAR14 = VAR15;




VAR6 = FUN3(VAR4, VAR16);
if (!VAR6) {
FUN4("");
return;
}

FUN5("",
VAR11);


VAR8 = &VAR6->VAR8[VAR11];
VAR10 = &VAR6->VAR10[VAR11];


VAR2->VAR12.VAR13.VAR8 = FUN6(VAR8, sizeof(struct VAR7), VAR17);
if (!VAR2->VAR12.VAR13.VAR8)
return;

VAR2->VAR12.VAR13.VAR10 = FUN6(VAR10, sizeof(struct VAR9), VAR17);
if (!VAR2->VAR12.VAR13.VAR10) {
FUN7(VAR2->VAR12.VAR13.VAR8);
return;
}


if (VAR2->VAR12.VAR13.VAR8->VAR18 && VAR4->VAR19 < 197) {
VAR2->VAR12.VAR13.VAR8->VAR20 = 0;
VAR2->VAR12.VAR13.VAR8->VAR21 = 0;
}


VAR2->VAR12.VAR13.VAR14 = VAR22;
}