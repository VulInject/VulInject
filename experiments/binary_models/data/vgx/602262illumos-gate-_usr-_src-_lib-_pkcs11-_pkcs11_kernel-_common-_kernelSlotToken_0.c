VAR1
FUN1(CK_SLOT_ID VAR2, CK_SLOT_INFO_PTR VAR3)
{
CK_RV VAR4;
crypto_get_provider_info_t VAR5;
int VAR6;

if (!VAR7)
return (VAR8);

if (VAR2 >= VAR9) {
return (VAR10);
}

if (VAR3 == NULL)
return (VAR11);


VAR5.VAR12 = VAR13[VAR2]->VAR14;
while ((VAR6 = FUN2(VAR15, VAR16, &VAR5)) < 0) {
if (VAR17 != VAR18)
break;
}
if (VAR6 < 0) {
VAR4 = VAR19;
} else {
if (VAR5.VAR20 != VAR21) {
VAR4 = FUN3(
VAR5.VAR20);
} else {
VAR4 = VAR22;
}
}

if (VAR4 == VAR22) {
bcopy(VAR5.VAR23.VAR24,
VAR3->VAR25, VAR26);
bcopy(VAR5.VAR23.VAR27,
VAR3->VAR28, VAR29);
VAR3->VAR30 = VAR31 | VAR32;
VAR3->VAR33.VAR34 =
VAR5.VAR23.VAR35.VAR36;
VAR3->VAR33.VAR37 =
VAR5.VAR23.VAR35.VAR38;
VAR3->VAR39.VAR34 =
VAR5.VAR23.VAR40.VAR36;
VAR3->VAR39.VAR37 =
VAR5.VAR23.VAR40.VAR38;
}

return (VAR4);
}