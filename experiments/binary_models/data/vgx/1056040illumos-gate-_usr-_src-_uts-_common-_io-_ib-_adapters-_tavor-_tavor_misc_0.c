int
FUN1(VAR1 *VAR2, uint_t VAR3, VAR4 *VAR5)
{
sm_portinfo_t		VAR6;
sm_guidinfo_t		VAR7;
sm_pkey_table_t		VAR8;
VAR9		*VAR10;
uint_t			VAR11, VAR12, VAR13;
int			VAR14, VAR15, VAR16, VAR17;

FUN2(FUN3(*VAR5))


if (!FUN4(VAR2, VAR3)) {
return (VAR18);
}


VAR17 = FUN5(VAR2, VAR3,
FUN6(), &VAR6);
if (VAR17 != VAR19) {
FUN7(VAR20, ""
"", VAR3, VAR17);
return (FUN8(0));
}


VAR5->VAR21		= VAR6.VAR22;
VAR5->VAR23	= VAR6.VAR24;
VAR5->VAR25	= VAR6.VAR26;
VAR5->VAR27		= VAR6.VAR28;
VAR5->VAR29		= VAR6.VAR30;
VAR5->VAR31		= VAR6.VAR32;
VAR5->VAR33		= VAR6.VAR34;
VAR5->VAR35	= VAR6.VAR36;
VAR5->VAR37	= VAR6.VAR38;
VAR5->VAR39	= VAR6.VAR40;
VAR5->VAR41	= VAR6.VAR42;
VAR5->VAR43	= VAR6.VAR44;
VAR5->VAR45	= VAR6.VAR46;
VAR5->VAR47	= VAR6.VAR48;
VAR5->VAR49		= VAR6.VAR50;
VAR5->VAR51		= VAR6.VAR52;
VAR5->VAR53		= VAR6.VAR54;
VAR5->VAR55	= VAR6.VAR56;
VAR5->VAR57		= ((VAR58)1 << VAR59);
VAR13 = VAR2->VAR60->VAR61;
VAR5->VAR62	= (1 << VAR13);
VAR13 = VAR2->VAR60->VAR63;
VAR5->VAR64	= (1 << VAR13);


if (VAR6.VAR65 & VAR66)
VAR5->VAR67 |= VAR68;
if (VAR6.VAR65 & VAR69)
VAR5->VAR67 |= VAR70;
if (VAR6.VAR65 & VAR71)
VAR5->VAR67 |= VAR72;
if (VAR6.VAR65 & VAR73)
VAR5->VAR67 |= VAR74;
if (VAR6.VAR65 & VAR75)
VAR5->VAR67 |= VAR76;


for (VAR14 = 0; VAR14 < VAR5->VAR62; VAR14 += 8) {
VAR17 = FUN9(VAR2, VAR3, VAR14 >> 3,
FUN6(), &VAR7);
if (VAR17 != VAR19) {
FUN7(VAR20, ""
"", VAR3, VAR17);
return (FUN8(0));
}


VAR11 = FUN10((VAR5->VAR62 - VAR14), 8);
for (VAR15 = 0; VAR15 < VAR11; VAR15++) {
VAR16 = (VAR14 + VAR15);
VAR10 = &VAR5->VAR77[VAR16];
FUN2(FUN3(*VAR10))
VAR10->VAR78 = VAR6.VAR79;
VAR10->VAR80	 = VAR7.VAR81[VAR15];
}
}


for (VAR14 = 0; VAR14 < VAR5->VAR64; VAR14 += 32) {
VAR17 = FUN11(VAR2, VAR3, VAR14,
FUN6(), &VAR8);
if (VAR17 != VAR19) {
FUN7(VAR20, ""
"", VAR3, VAR17);
return (FUN8(0));
}


VAR12 = FUN10((VAR5->VAR64 - VAR14), 32);
for (VAR15 = 0; VAR15 < VAR12; VAR15++) {
VAR16 = (VAR14 + VAR15);
VAR5->VAR82[VAR16] = VAR8.VAR83[VAR15];
}
}

return (VAR84);
}