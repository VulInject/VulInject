VAR1
FUN1(VAR2 *VAR3)
{
unsigned short	VAR4;
unsigned char	VAR5;	
unsigned char	VAR6;	
uint32_t	VAR7;	
unsigned short	VAR8;	
unsigned short	VAR9;	
DWORD		VAR10;
int		VAR11;
uint32_t	VAR12;
VAR13	*VAR14;
uint16_t	VAR15;	
uint32_t	VAR16;
struct VAR17	*VAR18;
struct VAR17	*VAR19;
struct VAR17	*VAR20;

VAR11 = FUN2(VAR3, "", &VAR3->VAR21, &VAR5,
&VAR6, &VAR7, &VAR8, &VAR9);
if (VAR11 != 0)
return (VAR22);

FUN3(VAR3);
if (VAR3->VAR23 == NULL) {
FUN4(VAR3, VAR24, VAR25, VAR26);
return (VAR22);
}
VAR14 = VAR3->VAR23;
if (VAR14->VAR27 == NULL) {
FUN4(VAR3, VAR28,
VAR25, VAR29);
return (VAR22);
}

if (VAR8 > VAR30 ||
VAR9 > VAR30) {
FUN4(VAR3, VAR31,
VAR25, VAR32);
return (VAR22);
}

if (VAR5 & VAR33)
VAR12 = VAR34;
else
VAR12 = VAR35;

if (VAR5 & VAR36) {
FUN5(VAR3, VAR6);
if (VAR8 == 0 && VAR9 == 0)
return (VAR37);

FUN4(VAR3, VAR28,
VAR25, VAR29);
return (VAR22);
}


if (VAR5 & VAR38) {
FUN4(VAR3, 0, VAR25,
VAR39);
return (VAR22);
}

if (VAR5 & VAR40) {

if (VAR3->VAR41->VAR42 < VAR43) {
FUN4(VAR3, VAR28,
VAR25, VAR29);
return (VAR22);
}
}


VAR16 = VAR8 + VAR9;
VAR18 = FUN6(VAR3, VAR16 * sizeof (*VAR18));
VAR19 = &VAR18[VAR8];

for (VAR4 = 0; VAR4 < VAR16; VAR4++) {
VAR20 = &VAR18[VAR4];
if (VAR5 & VAR40) {
VAR11 = FUN7(&VAR3->VAR44, "",
&VAR15, &VAR20->VAR45, &VAR20->VAR46);
} else {
uint32_t	VAR47, VAR48;
VAR11 = FUN7(&VAR3->VAR44, "",
&VAR15, &VAR47, &VAR48);
VAR20->VAR45 = VAR47;
VAR20->VAR46 = VAR48;
}
VAR20->VAR49 = VAR15;	
if (VAR11) {

FUN4(VAR3, 0, VAR50, VAR51);
return (VAR22);
}
}


if ((VAR5 & VAR52) != 0) {
VAR20 = VAR19;

VAR10 = FUN8(VAR3, VAR20->VAR45, VAR20->VAR46, VAR20->VAR49);

if (VAR10 != VAR53) {
FUN4(VAR3, 0, VAR25,
VAR54);
return (VAR22);
}
goto VAR55;
}


for (VAR4 = 0; VAR4 < VAR8; VAR4++) {
VAR20 = &VAR18[VAR4];

VAR10 = FUN9(VAR3, VAR20->VAR45, VAR20->VAR46, VAR20->VAR49);
if (VAR10 != VAR53) {
FUN4(VAR3, VAR56,
VAR25, VAR57);
return (VAR22);
}
}
for (VAR4 = 0; VAR4 < VAR9; VAR4++) {
VAR20 = &VAR19[VAR4];

VAR10 = FUN10(VAR3, VAR20->VAR45, VAR20->VAR46, VAR20->VAR49,
VAR12, VAR7);
if (VAR10 != VAR53) {

while (VAR4 > 0) {
--VAR4;
VAR20 = &VAR19[VAR4];
(void) FUN9(VAR3,
VAR20->VAR45, VAR20->VAR46, VAR20->VAR49);
}
FUN11(VAR3, VAR10);
return (VAR22);
}
}

VAR55:
if (FUN12(VAR3, 2, 0, "",
2, VAR3->VAR58, 0x27, 0) != 0)
return (VAR22);
return (VAR59);
}