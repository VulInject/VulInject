void
FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR3;
struct VAR7 *VAR8 = VAR4;
char VAR9[16] = { 0 };
int VAR10;

VAR6->VAR11 = (struct VAR12 *)VAR2;
VAR6->VAR13 = VAR8->VAR14;
FUN2("", VAR6->VAR13->VAR15);

FUN2("", VAR8->VAR16[0], VAR8->VAR17[0]);
FUN2("", VAR8->VAR18[0]);

VAR6->VAR6.VAR19 = VAR8->VAR20[0];
VAR6->VAR6.VAR21 = VAR8->VAR22;

if (FUN3(VAR6->VAR6.VAR19, VAR8->VAR16[0], VAR8->VAR17[0],
0, &VAR6->VAR6.VAR23)) {
FUN2("");
return;
}

VAR6->VAR6.VAR24 = FUN4(VAR8->VAR18[0],
VAR8->VAR25[0], VAR26, VAR27,
VAR6, VAR6->VAR6.VAR28.VAR29);
if (VAR6->VAR6.VAR24 == NULL) {
FUN2("");
goto VAR30;
}


FUN5(&VAR6->VAR6, VAR6->VAR6.VAR31);

FUN6(VAR6->VAR13, "", VAR9, sizeof(VAR9));
if (strcmp(VAR9, "") == 0)
VAR6->VAR6.VAR32 = VAR33;
else if (strcmp(VAR9, "") == 0)
VAR6->VAR6.VAR32 = VAR34;
else if (strcmp(VAR9, "") == 0)
VAR6->VAR6.VAR32 = VAR35;
else
VAR6->VAR6.VAR32 = VAR36;

VAR6->VAR6.VAR37 = VAR38;
VAR10 = FUN7(&VAR6->VAR6);
if (VAR10)
goto VAR39;

return;

VAR39:
FUN8(VAR6->VAR6.VAR24);
VAR30:
FUN9(VAR6->VAR6.VAR19, VAR6->VAR6.VAR23, VAR8->VAR17[0]);
}