void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
size_t VAR5;

switch (VAR2->VAR6.VAR7) {
case VAR8:
case VAR9:
break;
default:
return;
}

VAR4 = FUN2(sizeof(*VAR4), VAR10);
if (!VAR4)
goto VAR11;
FUN3(VAR4->VAR12);

VAR5 = sizeof(struct VAR13) * VAR14;
VAR4->VAR15 = FUN2(VAR5, VAR10);
if (!VAR4->VAR15)
goto VAR16;

VAR5 = sizeof(struct VAR17) * VAR14;
VAR4->VAR18 = FUN2(VAR5, VAR10);
if (!VAR4->VAR18)
goto VAR16;

VAR4->VAR19 = 0;
VAR4->VAR20 = 0;

VAR2->VAR4 = VAR4;

VAR2->VAR21->VAR22 = &VAR23;

VAR24 | \
VAR25)

VAR2->VAR21->VAR26 |= VAR27;
VAR2->VAR21->VAR28 |= VAR27;

return;

VAR16:
FUN4(VAR4->VAR15);
FUN4(VAR4->VAR18);
FUN4(VAR4);
VAR11:
FUN5(VAR2->VAR21, "");
}