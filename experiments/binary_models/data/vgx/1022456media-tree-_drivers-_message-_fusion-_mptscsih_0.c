int
FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
struct VAR6	*VAR7;
VAR8	*VAR9;
VAR10	*VAR11;
VAR12	*VAR13;
u16		 VAR14, VAR15;
VAR16	 *VAR17;
VAR18	 *VAR19;

VAR9 = FUN2(VAR2->VAR20);
VAR14 = FUN3(VAR4->VAR21.VAR22.VAR23.VAR24.VAR25.VAR14);
VAR15 = (VAR5 != NULL) ?
FUN3(VAR5->VAR21.VAR22.VAR23.VAR24.VAR25.VAR14) : VAR14;


if ((VAR14 != VAR15) ||
(FUN4(VAR4->VAR21.VAR22.VAR26.VAR27) == 0xdeadbeaf))
return 0;

VAR7 = FUN5(VAR2, VAR14);
if (VAR7 == NULL) {
VAR28 *VAR29 = (VAR28 *)VAR4;


if (VAR29->VAR30 == VAR31)
FUN6(VAR32 "",
VAR2->VAR33);

FUN7(VAR2, VAR14);
return 1;
}

if ((unsigned char *)VAR4 != VAR7->VAR34) {
FUN7(VAR2, VAR14);
return 1;
}

if (VAR2->VAR35 == VAR36) {
VAR16 *VAR17 = VAR7->VAR37->VAR38;

if (!VAR17 || !VAR17->VAR19 ||
VAR17->VAR19->VAR39) {
VAR7->VAR40 = VAR41 << 16;
goto VAR42;
}
}

VAR7->VAR34 = NULL;
VAR7->VAR40 = VAR43 << 16;		
VAR11 = (VAR10 *) VAR4;
VAR13 = (VAR12 *) VAR5;

if((VAR2->VAR44.VAR45 >= VAR46) && VAR13){
FUN8(VAR2, FUN6(VAR47
"",
VAR2->VAR33, VAR4, VAR5, VAR7, VAR14, VAR13->VAR48));
}else{
FUN8(VAR2, FUN6(VAR47
"",
VAR2->VAR33, VAR4, VAR5, VAR7, VAR14));
}

if (VAR13 == NULL) {

;
} else {
u32	 VAR49;
u16	 VAR50;
u8	 VAR51, VAR52;
u32	 VAR53;

VAR50 = FUN3(VAR13->VAR54) & VAR55;

VAR51 = VAR13->VAR56;
VAR52 = VAR13->VAR57;
VAR49 = FUN4(VAR13->VAR58);
FUN9(VAR7, FUN10(VAR7) - VAR49);
VAR53 = FUN4(VAR13->VAR59);


if (VAR50 == VAR60 && VAR49 == 0 &&
(VAR52 == VAR61 ||
VAR52 == VAR62 ||
VAR52 == VAR63)) {
VAR50 = VAR64;
}

if (VAR51 & VAR65)
FUN11(VAR7, VAR9, VAR4, VAR13);


if (VAR51 & VAR66 &&
VAR13->VAR67) {
FUN6(VAR68 ""
"", VAR2->VAR33,
VAR7->VAR37->VAR69->VAR70, VAR7->VAR37->VAR71,
VAR7->VAR37->VAR72, VAR7->VAR37->VAR73,
FUN4(VAR13->VAR67));
}

switch(VAR50) {
case VAR74:			
case VAR75:	

VAR7->VAR40 = VAR76;
break;

case VAR77:		
case VAR78:	
VAR7->VAR40 = VAR79 << 16;
break;

case VAR80:	

if (VAR2->VAR35 != VAR81)
VAR7->VAR40 = VAR41 << 16;

else
VAR7->VAR40 = VAR82 << 16;

if (VAR9->VAR83[VAR11->VAR84] < 0xFFFF)
VAR9->VAR83[VAR11->VAR84]++;

VAR17 = VAR7->VAR37->VAR38;
if (!VAR17)
break;
VAR19 = VAR17->VAR19;
if (VAR19->VAR85 & VAR86) {
FUN12(VAR2, VAR19,
VAR87);
VAR19->VAR85 &= ~VAR86;
}
break;

case VAR88:		
if ( VAR2->VAR35 == VAR36 ) {
u16 VAR89 =
FUN3(VAR13->VAR54);
if ((VAR89 &
VAR90)
&&
((VAR53 & VAR91) ==
VAR92)) {
VAR16 *VAR17 =
VAR7->VAR37->VAR38;


if (VAR17 && VAR17->
VAR19 &&
VAR17->VAR19->
VAR93)
FUN6(VAR94
""
"");
else if (VAR17 &&
VAR17->VAR19)
VAR17->VAR19->
VAR95 = 1;

VAR7->VAR40 =
(VAR96
<< 16);
break;
}
} else if (VAR2->VAR35 == VAR81) {

VAR7->VAR40 = VAR97 << 16;
break;
}



case VAR98:	

VAR7->VAR40 = VAR99 << 16;
break;

case VAR100:		
if (VAR2->VAR35 == VAR81)
VAR7->VAR40 = VAR97 << 16;
else
VAR7->VAR40 = VAR99 << 16;
break;

case VAR101:	
FUN9(VAR7, FUN10(VAR7) - VAR49);
if((VAR49==0)||(VAR7->VAR102 > VAR49))
VAR7->VAR40=VAR103 << 16;
else 
VAR7->VAR40 = (VAR43 << 16) | VAR52;
FUN13(VAR2, FUN6(VAR47
"",
VAR2->VAR33, VAR7->VAR40, VAR7->VAR37->VAR71, VAR7->VAR37->VAR72));
break;

case VAR60:		

VAR7->VAR40 = (VAR43 << 16) | VAR52;
if (!(VAR51 & VAR65)) {


if (VAR2->VAR35 == VAR104) {
if ((VAR11->VAR105[0] == VAR106  && ((VAR11->VAR105[1] & 0x02) == 0)) ||
VAR11->VAR105[0] == VAR107 ||
VAR11->VAR105[0] == VAR108 ||
(VAR11->VAR105[0] == VAR109 &&
((VAR11->VAR105[1] & 0x02) == 0)) ||
VAR11->VAR105[0] == VAR110  ||
VAR11->VAR105[0] == VAR111) {
if (FUN10(VAR7) !=
VAR49) {
VAR7->VAR40 =
VAR103 << 16;
FUN6(VAR112 ""
""
""
"",
FUN10(VAR7),
VAR49);
}
}
}

if (VAR49 < VAR7->VAR102) {
if (VAR52 == VAR76)
VAR7->VAR40 = VAR76;
else
VAR7->VAR40 = VAR103 << 16;
}
if (VAR51 & (VAR113 | VAR114)) {

VAR7->VAR40 = VAR103 << 16;
}
else if (VAR51 & VAR115) {

VAR7->VAR40 = VAR99 << 16;
}
}


FUN13(VAR2, FUN6(VAR47
"",
VAR2->VAR33, VAR7->VAR102));
FUN13(VAR2, FUN6(VAR47
"", VAR2->VAR33, VAR49));


if (VAR52 == VAR63)
FUN14(VAR7, VAR13, VAR11);

break;

case VAR116:		
FUN9(VAR7, 0);
case VAR117:	
case VAR64:			
VAR7->VAR40 = (VAR43 << 16) | VAR52;
if (VAR51 == 0) {
;
} else if (VAR51 &
VAR65) {


if ((VAR2->VAR35 == VAR104) &&
(VAR7->VAR118[2] & 0x20)) {
u32	 VAR119;
VAR119 =
VAR7->VAR118[3] << 24 |
VAR7->VAR118[4] << 16 |
VAR7->VAR118[5] << 8 |
VAR7->VAR118[6];
if (((VAR7->VAR118[3] & 0x80) ==
0x80) && (FUN10(VAR7)
!= VAR49)) {
VAR7->VAR118[2] =
VAR120;
VAR7->VAR118[12] = 0xff;
VAR7->VAR118[13] = 0xff;
FUN6(VAR112""
""
""
"" ,
FUN10(VAR7),
VAR49);
}
if (((VAR7->VAR118[3] & 0x80)
!= 0x80) &&
(FUN10(VAR7) !=
VAR49 + VAR119)) {
VAR7->VAR118[2] =
VAR120;
VAR7->VAR118[12] = 0xff;
VAR7->VAR118[13] = 0xff;
FUN6(VAR112
""
""
""
"",
FUN10(VAR7),
VAR49,
VAR119);
}
}


if (VAR13->VAR57 == VAR63)
FUN14(VAR7, VAR13, VAR11);

}
else if (VAR51 &
(VAR113 | VAR114)
) {

VAR7->VAR40 = VAR103 << 16;
}
else if (VAR51 & VAR115) {

VAR7->VAR40 = VAR99 << 16;
}
else if (VAR51 & VAR121) {

}

if (VAR7->VAR40 == VAR63)
FUN14(VAR7, VAR13, VAR11);


break;

case VAR122:		
VAR7->VAR40 = VAR103 << 16;
break;

case VAR123:		
case VAR124:			
case VAR125:		
case VAR126:			
case VAR127:		
case VAR128:		
case VAR129:		
case VAR130:	
default:

VAR7->VAR40 = VAR103 << 16;
break;

}	

if (VAR7->VAR40 && (VAR2->VAR131 & VAR132))
FUN15(VAR2, VAR7, VAR13);

} 
VAR42:

FUN16(VAR7);

VAR7->FUN17(VAR7);		


FUN7(VAR2, VAR14);
return 1;
}