VAR1
FUN1(VAR2 *VAR3)
{
VAR4		*VAR5 = VAR3->VAR6;
VAR7	*VAR8 = VAR5->VAR9;
VAR10	*VAR11 = VAR5->VAR12;
VAR13	*VAR14 = (VAR13 *)
VAR11->VAR15;
VAR16		*VAR17 = (VAR16 *)
VAR5->VAR18;
VAR19	*VAR20 = (VAR19 *)
VAR8->VAR21;
VAR22			*VAR23;
fct_status_t		 VAR24;
uint8_t			 VAR25   = VAR5->VAR25;
uint32_t		 VAR26 = VAR3->VAR26;
clock_t			 VAR27;
char			 VAR28[VAR29];

FUN2(VAR30,
VAR4, VAR5,
VAR10, VAR11,
VAR19, VAR20,
int, (VAR25 != VAR31));


if ((VAR20->VAR32 + VAR20->VAR33) > 1) {

if ((VAR20->VAR34 & VAR35) == 0) {
FUN3(VAR14->VAR36, ""
"", VAR5->VAR37);

if (FUN4(VAR20, ~(VAR5->VAR25))) {
FUN5(&VAR20->VAR34,
VAR35);
} else {


}
}

VAR27 = VAR3->VAR38 +
FUN6(VAR39);
if (FUN7() > VAR27) {
(void) snprintf(VAR28, sizeof (VAR28),
""
"", (void *)VAR14,
(void *)VAR3);
(void) FUN8(VAR14->VAR40,
VAR41 | VAR42, VAR28);

return (VAR43);
}

if ((FUN7() & 0x7f) == 0) {
FUN3(VAR14->VAR36, ""
""
"", VAR5->VAR37);
}
return (VAR43);
}
FUN9(&VAR20->VAR34, ~VAR35);


if (VAR20->VAR34 & VAR44) {
FUN10(VAR14->VAR40->VAR45,
VAR20->VAR46);
FUN11(VAR20->VAR46);
VAR20->VAR46 = NULL;
FUN9(&VAR20->VAR34, ~VAR44);
}

if (VAR5->VAR25 == VAR31) {
VAR17->VAR47 = VAR17->VAR48;
VAR23 = VAR17->VAR49 = (VAR22 *)FUN12(
VAR17->VAR47, VAR50);
VAR17->VAR51 = VAR17->VAR47;
bcopy(VAR17->VAR52, VAR23, VAR17->VAR47);
VAR23[0] = VAR53;
bcopy(VAR23+20, VAR8->VAR54, 8);
bcopy(VAR23+28, VAR8->VAR55, 8);
bcopy(VAR11->VAR56, VAR23+20, 8);
bcopy(VAR11->VAR57, VAR23+28, 8);
FUN13(VAR8->VAR58, VAR8->VAR54);
FUN13(VAR8->VAR59, VAR8->VAR55);
FUN13(VAR11->VAR60, VAR11->VAR56);
FUN13(VAR11->VAR61, VAR11->VAR57);

FUN14((VAR62 *)VAR20->VAR63,
VAR8->VAR54, VAR64);
}

VAR24 = FUN15(VAR11, VAR8, VAR5);
FUN16(VAR20);
if ((VAR24 == VAR65) && !(VAR3->VAR26 & VAR66)) {
if (VAR5->VAR25 == VAR31) {
VAR24 = VAR11->FUN17(VAR5, 0);
if ((VAR24 == VAR65) && FUN18(VAR14) &&
!FUN19(VAR20->VAR67)) {
VAR4 *VAR68 = FUN20(VAR11,
VAR8, VAR69, VAR70);
if (VAR68) {
FUN21(VAR11, VAR68);
}
VAR68 = FUN20(VAR11, VAR8,
VAR71, VAR72);
if (VAR68)
FUN21(VAR11, VAR68);
VAR68 = FUN20(VAR11, VAR8,
VAR73, VAR74);
if (VAR68)
FUN21(VAR11, VAR68);
VAR68 = FUN20(VAR11, VAR8,
VAR75, VAR76);
if (VAR68)
FUN21(VAR11, VAR68);
}
} else {

FUN5(&VAR20->VAR34,
VAR77);
FUN5(&VAR3->VAR26, VAR78);
VAR24 = VAR11->FUN22(VAR5);
if (VAR24 != VAR65) {
FUN9(&VAR3->VAR26,
~VAR78);
FUN9(&VAR20->VAR34,
~VAR77);
}
}
}
FUN23(&VAR20->VAR79);

if (VAR24 == VAR65) {
if (VAR25 == VAR31) {
FUN5(&VAR20->VAR34, VAR80);
FUN24(&VAR14->VAR81);
if (VAR20->VAR82)
VAR20->VAR82 = 0;
}
if (VAR26 & VAR66) {
FUN25(VAR83,
VAR4, VAR5,
VAR10, VAR11,
VAR19, VAR20,
int, (VAR25 != VAR31),
int, VAR65);

VAR23 = VAR17->VAR49;
VAR23[0] = VAR53;
VAR5->VAR84 = VAR65;
FUN26(VAR5, VAR65, VAR85);
}
} else {
FUN25(VAR83,
VAR4, VAR5,
VAR10, VAR11,
VAR19, VAR20,
int, (VAR25 != VAR31),
int, VAR24);

FUN27(VAR5, VAR24);
}



return (VAR86);
}