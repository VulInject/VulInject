static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5,
int VAR6, int VAR7)
{

const struct VAR8	*VAR9 ;
int		VAR10 ;
char		*VAR11 ;
char		*VAR12 ;
const char	*VAR13 ;
char		VAR14 ;
char		*VAR15 ;
struct VAR16	*VAR17 ;
struct VAR18	*VAR19 = NULL;
struct VAR20	*VAR21 = NULL;
struct VAR22	*VAR23 = NULL;
int		VAR24 ;
int		VAR25 ;
int		VAR26 ;
FUN2(VAR27,VAR28) ;
FUN2(VAR29,VAR30) ;
FUN2(VAR31,VAR32) ;

VAR24 = VAR5 - VAR33 ;
VAR25 = VAR5 - VAR34 ;
VAR26 = VAR5 - VAR35 ;
VAR10 = VAR4->VAR36 ;
VAR11 = (char *) (VAR4 + 1 ) ;

VAR17 = &VAR2->VAR17 ;
switch (VAR4->VAR37 & 0xf000) {
case 0x1000 :
default :
VAR15 = (char *) VAR17 ;
break ;
case 0x2000 :
if (VAR24 < 0 || VAR24 >= VAR38) {
return VAR39;
}
VAR19 = &VAR2->VAR17.VAR40[VAR24] ;
VAR15 = (char *) VAR19 ;
VAR11 += 4 ;		
VAR10 -= 4 ;
break ;
case 0x3000 :
if (VAR25 < 0 || VAR25 >= VAR41) {
return VAR39;
}
VAR21 = &VAR2->VAR17.VAR42[VAR25] ;
VAR15 = (char *) VAR21 ;
VAR11 += 4 ;		
VAR10 -= 4 ;
break ;
case 0x4000 :
if (VAR26 < 0 || VAR26 >= FUN3(VAR2)) {
return VAR39;
}
VAR23 = &VAR2->VAR17.VAR43[FUN4(VAR2,VAR26)] ;
VAR15 = (char *) VAR23 ;
VAR11 += 4 ;		
VAR10 -= 4 ;
break ;
}
switch (VAR4->VAR37) {
case VAR44 :
case VAR45 :
case VAR46 :
case VAR47 :
case VAR48 :
case VAR49 :
case VAR50 :
case VAR51 :
case VAR52 :
case VAR53 :
case VAR54 :
if (!VAR6)
return VAR39;
break ;
}
VAR9 = FUN5(VAR4->VAR37) ;
if (!VAR9)
return (VAR4->VAR37 & 0xff00) ? VAR39 :
VAR55;
switch (VAR9->VAR56) {
case VAR57 :
case VAR58 :
break ;
default :
return VAR55;
}
VAR12 = VAR15 + VAR9->VAR59 ;
VAR13 = VAR9->VAR60 ;		

while (VAR13 && (VAR14 = *VAR13++)) {
switch(VAR14) {
case '' :
VAR12 = (char *) &VAR28 ;
break ;
case '' :
VAR12 = (char *) &VAR30 ;
break ;
case '' :
VAR12 = (char *) &VAR32 ;
break ;
case '' :
case '' :
case '' :
case '' :
if (VAR10 < 4) {
goto VAR61 ;
}
if (VAR11[0] | VAR11[1])
goto VAR62 ;
if (VAR14 == '') {
VAR12[0] = VAR11[2] ;
VAR12[1] = VAR11[3] ;
}
else {
VAR12[1] = VAR11[2] ;
VAR12[0] = VAR11[3] ;
}
VAR12[0] = VAR11[2] ;
VAR12[1] = VAR11[3] ;
VAR11 += 4 ;
VAR12 += 2 ;
VAR10 -= 4 ;
break ;
case '' :
case '' :
if (VAR10 < 4) {
goto VAR61 ;
}
if (VAR11[0] | VAR11[1] | VAR11[2])
goto VAR62 ;
VAR12[0] = VAR11[3] ;
VAR10 -= 4 ;
VAR11 += 4 ;
VAR12 += 4 ;
break ;
case '' :
case '' :
case '' :
if (VAR10 < 4) {
goto VAR61 ;
}
VAR12[3] = *VAR11++ ;
VAR12[2] = *VAR11++ ;
VAR12[1] = *VAR11++ ;
VAR12[0] = *VAR11++ ;
VAR12[0] = *VAR11++ ;
VAR12[1] = *VAR11++ ;
VAR12[2] = *VAR11++ ;
VAR12[3] = *VAR11++ ;
VAR10 -= 4 ;
VAR12 += 4 ;
break ;
case '' :
if (VAR10 < 8)
goto VAR61 ;
if (VAR7)
memcpy(VAR12,VAR11+2,6) ;
VAR12 += 8 ;
VAR11 += 8 ;
VAR10 -= 8 ;
break ;
case '' :
if (VAR10 < 4)
goto VAR61 ;
if (VAR7)
memcpy(VAR12,VAR11,4) ;
VAR12 += 4 ;
VAR11 += 4 ;
VAR10 -= 4 ;
break ;
case '' :
if (VAR10 < 8)
goto VAR61 ;
if (VAR7)
memcpy(VAR12,VAR11,8) ;
VAR12 += 8 ;
VAR11 += 8 ;
VAR10 -= 8 ;
break ;
case '' :
if (VAR10 < 32)
goto VAR61 ;
if (VAR7)
memcpy(VAR12,VAR11,32) ;
VAR12 += 32 ;
VAR11 += 32 ;
VAR10 -= 32 ;
break ;
case '' :		
if (VAR7) {
VAR12[0] = *VAR11++ ;
VAR12[1] = *VAR11++ ;
VAR12[2] = *VAR11++ ;
VAR12[3] = *VAR11++ ;
VAR12[4] = *VAR11++ ;
VAR12[5] = *VAR11++ ;
VAR12[6] = *VAR11++ ;
VAR12[7] = *VAR11++ ;
}
VAR12 += 8 ;
VAR10 -= 8 ;
break ;
default :
FUN6(VAR2,VAR63, VAR64) ;
return VAR55;
}
}

switch (VAR4->VAR37) {
case VAR65:			
if (VAR30 & ~1)
goto VAR62 ;
FUN7(VAR17->VAR66 = VAR30) ;
break ;
case VAR67 :		
if (!(VAR30 & VAR68))
goto VAR62 ;
FUN7(VAR17->VAR69 = VAR30) ;
break ;
case VAR70 : 		
if (VAR30 < 2 || VAR30 > 30)
goto VAR62 ;
FUN7(VAR17->VAR71 = VAR30) ;
break ;
case VAR72 :		
if (VAR28 & ~1)
goto VAR62 ;
FUN7(VAR17->VAR73 = VAR28) ;
break ;
case VAR74 :		

if (VAR32 < (long)0x478bf51L)
goto VAR62 ;
FUN7(VAR17->VAR75 = VAR32) ;
break ;
case VAR46 :		
if (VAR32 > 1562)
goto VAR62 ;
if (VAR7 && VAR2->VAR17.VAR76 != VAR32) {
VAR2->VAR77.VAR78 = VAR79 ;
VAR2->VAR17.VAR76 = VAR32 ;
}
break ;
case VAR47 :		
if (VAR32 < 50 || VAR32 > 5000)
goto VAR62 ;
if (VAR7 && VAR2->VAR17.VAR76 &&
VAR2->VAR17.VAR80 != VAR32) {
VAR2->VAR77.VAR78 = VAR79 ;
VAR2->VAR17.VAR80 = VAR32 ;
}
break ;
case VAR48 :		
if (VAR32 > -FUN8(5) || VAR32 < -FUN8(165))
goto VAR62 ;
FUN7(VAR17->VAR81 = VAR32) ;
break ;
case VAR49 :		
if (VAR32 < 1 || VAR32 > 4478)
goto VAR62 ;
FUN7(VAR17->VAR82 = VAR32) ;
break ;
case VAR50 :		
if ((VAR32 & 0xffff) != 1)
goto VAR62 ;
FUN7(VAR17->VAR83 = VAR32) ;
break ;
case VAR51 :		
if (VAR30 > 1)
goto VAR62 ;
FUN7(VAR17->VAR84 = VAR30) ;
break ;
case VAR52 :		
if (VAR28 != VAR85 && VAR28 != VAR86)
goto VAR62 ;
FUN7(VAR17->VAR87 = VAR28) ;
break ;
case VAR53 :		
if (VAR28 > 100)
goto VAR62 ;
FUN7(VAR17->VAR88 = VAR28) ;
break ;
case VAR89 :		
if ((VAR30 & (VAR90 |
VAR91)) == 0 )
goto VAR62 ;
FUN7(VAR19->VAR92 = VAR30) ;
break ;
case VAR93 :		

FUN7(VAR19->VAR94 = VAR30) ;
break ;
case VAR95 :		

FUN7(VAR19->VAR96 = VAR30) ;
break ;
case VAR97:			
if (VAR28 & ~1)
goto VAR62 ;
if (VAR7) {
VAR19->VAR98 = VAR28 ;
FUN9(VAR2,VAR99,VAR100) ;
}
break ;
case VAR54 :		
FUN7(VAR19->VAR101 = VAR32) ;
break ;
case VAR102 :
if (VAR32 > 1562)
goto VAR62 ;
FUN7(VAR21->VAR103 = VAR32) ;
if (VAR7)
FUN10(VAR2) ;
break ;
case VAR104 :
if (VAR32 > 5000)
goto VAR62 ;

if (VAR32 != 0 && VAR21->VAR103 == 0)
goto VAR62 ;

FUN7(VAR21->VAR105 = VAR32) ;
if (VAR7)
FUN10(VAR2) ;
break ;
case VAR106:			

if (VAR7) {
VAR21->VAR107 = VAR32 ;
FUN11(VAR2) ;
}
break ;
case VAR108 :		
if (VAR32 > 0x00BEBC20L)
goto VAR62 ;
if (VAR7 && VAR17->VAR87 == VAR85)
goto VAR62 ;
FUN7(VAR21->VAR109 = VAR32) ;
break ;
case VAR110 :		
FUN7(VAR21->VAR111 = VAR32) ;
goto VAR112 ;
case VAR113 :		
FUN7(VAR21->VAR114 = VAR32) ;
goto VAR112 ;
case VAR115 :		
FUN7(VAR21->VAR116 = VAR32) ;

VAR112:
if (VAR7 && FUN12(VAR2)) {
FUN13(VAR2,VAR117) ;
VAR2->VAR118.VAR119 = 1 ;
FUN9(VAR2,VAR120,VAR121) ;
}
break ;
case VAR122 :		
if (VAR28 > 1)
goto VAR62 ;
FUN7(VAR23->VAR123 = VAR28) ;
break ;
case VAR124 :		

FUN7(memcpy((char *)VAR23->VAR125,
(char *)&VAR32,4)) ;
break ;
case VAR126:			
if (VAR30 > 4)
goto VAR62 ;
FUN7(VAR23->VAR127 = VAR30) ;
break ;
case VAR128 :		
if (VAR28 < 4 || VAR28 > 15)
goto VAR62 ;
FUN7(VAR23->VAR129 = VAR28) ;
break ;
case VAR130 :		
if (VAR28 < 4 || VAR28 > 15)
goto VAR62 ;
FUN7(VAR23->VAR131 = VAR28) ;
break ;


case VAR132 :		
if (FUN14(VAR2,VAR133, (int) VAR30, 0))
goto VAR62 ;
break ;
case VAR134:			
if (FUN14(VAR2,VAR135, (int) VAR30,
FUN4(VAR2,VAR26)))
goto VAR62 ;
break ;
default :
break ;
}
return 0;

VAR62:

return VAR136;

VAR61:

return VAR137;

VAR138:

return VAR139;
}