static bool FUN1(const struct VAR1 *VAR2,
const struct VAR3 *VAR4,
struct VAR5 *VAR5)
{
chunk_t VAR6 = FUN2(VAR7, VAR4->VAR8);
FUN3(VAR6.VAR9 == VAR4->VAR10);
chunk_t VAR11 = FUN2(VAR7, VAR4->VAR12);
FUN3(VAR11.VAR9 == VAR4->VAR13);
chunk_t VAR14 = FUN2(VAR7, VAR4->VAR15);
chunk_t VAR16 = FUN2(VAR7, VAR4->VAR17);
chunk_t VAR18 = FUN2(VAR7, VAR4->VAR19);
FUN3(VAR18.VAR9 == VAR4->VAR20);
chunk_t VAR21 = FUN2(VAR7, VAR4->VAR22);
FUN3(VAR21.VAR9 == VAR4->VAR20);
chunk_t VAR23 = FUN2(VAR7, VAR4->VAR24);
chunk_t VAR25 =
FUN2(VAR7, VAR4->VAR26);
chunk_t VAR27 = FUN2(VAR7, VAR4->VAR28);
FUN3(VAR27.VAR9 == VAR4->VAR29);
bool VAR30 = true;



VAR31 *VAR19 = FUN4("", VAR18, VAR5);
VAR31 *VAR24 = FUN5(VAR2, VAR6, VAR11,
VAR19, VAR5);
if (!FUN6(VAR4->VAR32, VAR23, VAR24,
VAR5)) {
VAR30 = false;
}


ike_spis_t VAR33;
FUN3(sizeof(VAR33.VAR34.VAR35) == VAR14.VAR9);
memcpy(VAR33.VAR34.VAR35, VAR14.VAR36, VAR14.VAR9);
FUN3(sizeof(VAR33.VAR37.VAR35) == VAR16.VAR9);
memcpy(VAR33.VAR37.VAR35, VAR16.VAR36, VAR16.VAR9);
VAR31 *VAR28 = FUN7(VAR2, VAR24,
VAR6, VAR11,
&VAR33,
VAR4->VAR29,
VAR5);

if (!FUN6(VAR4->VAR32, VAR27, VAR28, VAR5)) {
VAR30 = false;
}


VAR31 *VAR38 = FUN8("", VAR28,
0, VAR2->VAR39,
VAR40, VAR5);
VAR31 *VAR22 = FUN4("", VAR21,
VAR5);
VAR31 *VAR26 =
FUN9(VAR2, VAR38, VAR22,
VAR6, VAR11,
VAR5);
if (!FUN6(VAR4->VAR32, VAR25,
VAR26, VAR5)) {
VAR30 = false;
}

FUN10(VAR41, "", VAR7, VAR4->VAR32,
VAR30 ? "" : "");

FUN11(VAR7, "", &VAR19);
FUN11(VAR7, "", &VAR22);
FUN11(VAR7, "", &VAR24);
FUN11(VAR7, "", &VAR28);
FUN11(VAR7, "", &VAR38);
FUN11(VAR7, "", &VAR26);

FUN12(&VAR6);
FUN12(&VAR11);
FUN12(&VAR18);
FUN12(&VAR21);
FUN12(&VAR14);
FUN12(&VAR16);
FUN12(&VAR23);
FUN12(&VAR25);
FUN12(&VAR27);
return VAR30;
}