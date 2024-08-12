static int FUN1(struct VAR1 *VAR2, union VAR3 *VAR4,
u16 VAR5, struct VAR6 *VAR7)
{
struct VAR8 *VAR8;
struct VAR9 *VAR10;
struct VAR11 *VAR11;
u32 VAR12;
int VAR13 = 0;

VAR12  = VAR4->VAR14.VAR15;
VAR10 = VAR2->VAR16.VAR17[VAR12];
if (!VAR10) {
FUN2(&VAR2->VAR18,
"",
VAR12);
return -1;
}

switch (VAR4->VAR14.VAR19) {
case VAR20:
case VAR21:
VAR11 = FUN3(VAR2, VAR4->VAR22.VAR23);
if (!VAR11) {
VAR13 = -1;
break;
}
FUN4(&VAR11->VAR24.VAR25);
VAR11->VAR24.VAR2 = VAR2;
memcpy(&VAR11->VAR24.VAR4, VAR4, sizeof(union VAR3));
VAR11->VAR24.VAR5 = VAR5;
VAR11->VAR24.VAR26 = true;
FUN5(&VAR11->VAR24.VAR25, &VAR7->VAR27);
break;
case VAR28:
case VAR29:
case VAR30:
VAR8 = FUN6(sizeof(*VAR8), VAR31);
if (!VAR8) {
VAR13 = -1;
break;
}
FUN4(&VAR8->VAR25);
VAR8->VAR2 = VAR2;
memcpy(&VAR8->VAR4, VAR4, sizeof(union VAR3));
VAR8->VAR5 = VAR5;
VAR8->VAR26 = false;
FUN5(&VAR8->VAR25, &VAR7->VAR27);
break;
default:
VAR13 = -1;
FUN7(&VAR2->VAR18, "");
}
return VAR13;
}