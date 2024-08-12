static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4,
int *VAR5)
{
VAR6* VAR7 = FUN2(VAR2);
const int VAR8 = VAR9;
u8 VAR10[VAR9];
switch(VAR4->VAR4) {
case VAR11:
switch(VAR4->VAR12) {
case VAR13: {
sc_apdu_t VAR14;
int VAR15;
VAR15 = FUN3(VAR2, &VAR14, VAR10, VAR8, VAR4->VAR16, VAR4->VAR17.VAR18, VAR4->VAR17.VAR19);
if (VAR15 < 0)
return VAR15;
VAR4->VAR14 = &VAR14;
VAR4->VAR17.VAR20 = 5;
VAR15 = VAR21->FUN4(VAR2, VAR4, VAR5);
if(VAR15 >= 0)
VAR7->VAR22 |= (1 << VAR4->VAR16);
return VAR15;
}
case VAR23:
case VAR24:
case VAR25:
case VAR26:
default:
FUN5(VAR2->VAR27,  "");
return VAR28;
}
case VAR29:
switch(VAR4->VAR12) {
case VAR13: {
sc_apdu_t VAR14;
int VAR15;
VAR15 = FUN6(VAR2, &VAR14, VAR10, VAR8, VAR4->VAR16, VAR4->VAR17.VAR18, VAR4->VAR17.VAR19, VAR4->VAR30.VAR18, VAR4->VAR30.VAR19);
if (VAR15 < 0)
return VAR15;
VAR4->VAR14 = &VAR14;
return VAR21->FUN4(VAR2, VAR4, VAR5);
}
case VAR23:
case VAR24:
case VAR25:
case VAR26:
default:
FUN5(VAR2->VAR27,  "");
return VAR28;
}
case VAR31:
switch(VAR4->VAR12) {
case VAR13: {
sc_apdu_t VAR14;
int VAR15;
VAR15 = FUN7(VAR2, &VAR14, VAR10, VAR8, VAR4->VAR16, VAR4->VAR17.VAR18, VAR4->VAR17.VAR19);
if (VAR15 < 0)
return VAR15;
VAR4->VAR14 = &VAR14;
return VAR21->FUN4(VAR2, VAR4, VAR5);
}
case VAR23:
case VAR24:
case VAR25:
case VAR26:
default:
FUN5(VAR2->VAR27,  "");
return VAR28;
}
default:
FUN5(VAR2->VAR27,  "");
return VAR28;

}

}