static int
FUN1(
struct VAR1 *VAR2,
struct VAR3 *VAR4,
int VAR5,
struct VAR6 *VAR7,
VAR8 *VAR9)
{
struct VAR10 *VAR11;
struct VAR12 *VAR13;
int VAR14;
char VAR15;
struct pctime VAR16;
int64_t VAR17;

FUN2(8, "", (void *)VAR2);

VAR13 = FUN3(VAR2->VAR18);
VAR14 = FUN4(VAR13, 0, 0);
if (VAR14)
return (VAR14);


if ((VAR11 = FUN5(VAR2)) == NULL) {
FUN6(VAR13);
return (VAR19);
}

VAR4->VAR20 = VAR2->VAR21;
VAR15 = VAR11->VAR22.VAR23;
if (FUN7(VAR13, VAR15))
VAR4->VAR24 = 0;
else if (VAR15 & VAR25)
VAR4->VAR24 = 0444;
else if (VAR15 & VAR26)
VAR4->VAR24 = 0555;
else if (VAR13->VAR27 & VAR28) {
VAR4->VAR24 = 0755;
} else {
VAR4->VAR24 = 0777;
}

if (VAR15 & VAR29)
VAR4->VAR24 |= VAR30;
else
VAR4->VAR24 |= VAR31;
if (VAR13->VAR27 & VAR28) {
VAR4->VAR32 = 0;
VAR4->VAR33 = 0;
} else {
VAR4->VAR32 = FUN8(VAR7);
VAR4->VAR33 = FUN9(VAR7);
}
VAR4->VAR34 = VAR2->VAR18->VAR35;
VAR4->VAR36 = (VAR37)FUN10(VAR11->VAR38,
VAR11->VAR39, VAR11->VAR22.VAR23,
FUN11(VAR13, &VAR11->VAR22), FUN12(VAR13));
VAR4->VAR40 = 1;
VAR4->VAR41 = (VAR42)VAR11->VAR43;
VAR4->VAR44 = 0;
VAR4->VAR45 =
(VAR46)FUN13((VAR47)VAR11->VAR43, VAR48);
VAR4->VAR49 = VAR13->VAR50;


if (VAR2->VAR51 & VAR52) {
VAR4->VAR53 = VAR13->VAR54;
VAR4->VAR55 = VAR13->VAR54;
VAR4->VAR56 = VAR13->VAR54;
FUN6(VAR13);
return (0);
}

FUN14(&VAR11->VAR22.VAR57, &VAR17);
if ((VAR13->VAR27 & VAR58) == 0) {
if (VAR17 > VAR59)
FUN15(VAR60, VAR61, VAR17);
VAR17 = FUN16(VAR17, VAR59);
} else if (VAR17 > VAR59 &&
FUN17() == VAR62) {
FUN6(VAR13);
FUN15(VAR63, VAR61, VAR17);
return (VAR64);
}

VAR4->VAR53.VAR65 = (VAR66)VAR17;
VAR4->VAR53.VAR67 = 0;


VAR4->VAR56 = VAR4->VAR53;


VAR16.VAR68 = VAR11->VAR22.VAR69;
if (VAR16.VAR68 == VAR11->VAR22.VAR57.VAR68)
VAR16.VAR70 = VAR11->VAR22.VAR57.VAR70;
else
VAR16.VAR70 = 0;
FUN14(&VAR16, &VAR17);
if ((VAR13->VAR27 & VAR58) == 0) {
if (VAR17 > VAR59)
FUN15(VAR71, VAR61, VAR17);
VAR17 = FUN16(VAR17, VAR59);
} else if (VAR17 > VAR59 &&
FUN17() == VAR62) {
FUN6(VAR13);
FUN15(VAR72, VAR61, VAR17);
return (VAR64);
}

VAR4->VAR55.VAR65 = (VAR66)VAR17;
VAR4->VAR55.VAR67 = 0;

FUN6(VAR13);
return (0);
}