static VAR1 *FUN1(const VAR2 *VAR3,VAR1 *VAR4,
VAR5 *VAR6)
{
typedef struct {
unsigned char VAR7[4];
unsigned int VAR8;
unsigned int VAR9;
unsigned int VAR10;
unsigned int VAR11;
} VAR12;

VAR13
VAR14;

VAR1
*VAR15;

VAR16
VAR17;

VAR12
VAR18;

VAR19
*VAR20;

VAR21
VAR22;

VAR23
VAR24,
VAR25,
VAR26,
VAR27;

unsigned char
*VAR28;

unsigned int
VAR29;

VAR20=(VAR19 *) NULL;
(void) FUN2(VAR4,0,VAR30);
VAR17=VAR31;
while (FUN3(VAR4) == VAR32)
{

VAR26=FUN4(VAR4);
if(FUN3(VAR4)) break;
if ((VAR26 > 9999) || (VAR26 < 0))
break;
VAR18.VAR7[3]=VAR26 % 10; VAR26 /= 10;  
VAR18.VAR7[2]=VAR26 % 10; VAR26 /= 10;  
VAR18.VAR7[1]=VAR26 % 10; VAR26 /= 10;  
VAR18.VAR7[0]=VAR26;        
if (VAR18.VAR7[3] != 0)
break;  
if (VAR18.VAR7[2] != 0)
break;  
if (VAR18.VAR7[0] == 0)
{
VAR18.VAR8=FUN4(VAR4);
VAR18.VAR9=FUN4(VAR4);
VAR18.VAR10=FUN4(VAR4);
VAR18.VAR11=FUN4(VAR4);
VAR14=VAR33;
}
else
{
VAR18.VAR8=FUN5(VAR4);
VAR18.VAR9=FUN5(VAR4);
VAR18.VAR10=FUN5(VAR4);
VAR18.VAR11=FUN5(VAR4);
VAR14=VAR34;
}
if ((VAR18.VAR10 != 0) && (VAR18.VAR10 != 1))
break;
if (VAR18.VAR11 > 0xFFFF)
return(FUN6(VAR4));
for (VAR25=0; VAR25 < (VAR23) VAR18.VAR11; VAR25++)
{
int
VAR35;


VAR35=FUN7(VAR4);
if (VAR35 == VAR36)
{
FUN8(VAR6,VAR37,"",
VAR4->VAR38);
break;
}
}
VAR4->VAR39=(VAR40) VAR18.VAR8;
VAR4->VAR41=(VAR40) VAR18.VAR9;
if ((VAR4->VAR39 == 0) || (VAR4->VAR41 == 0))
return(FUN6(VAR4));
if (VAR3->VAR42 != VAR32)
{
FUN9(VAR4->VAR39,VAR4->VAR41);
if(VAR18.VAR10==1) VAR26 *= 2;
FUN2(VAR4, VAR18.VAR9*VAR26, VAR43);
if ((VAR4->VAR39 == 0) || (VAR4->VAR41 == 0))
return(VAR4->VAR44 == (VAR1 *) NULL ? FUN6(VAR4)
: VAR4);
goto VAR45;
}
VAR17=FUN10(VAR4,VAR4->VAR39,VAR4->VAR41,VAR6);
if (VAR17 == VAR32)
return(FUN6(VAR4));
(void) FUN11(VAR4,VAR6);
(void) FUN12(VAR4,VAR46,VAR6);
VAR20=FUN13(VAR3,VAR4);
if (VAR20 == (VAR19 *) NULL)
return(FUN6(VAR4));
switch(VAR18.VAR7[1])
{
case 0:
VAR22=VAR47;
VAR29=64;
break;
case 1:
VAR22=VAR47;
VAR29=32;
break;
case 2:
VAR22=VAR48;
VAR29=16;
break;
case 3:
VAR22=VAR49;
VAR29=16;
break;
case 4:
VAR22=VAR48;
VAR29=8;
break;
default:
VAR22=VAR48;
VAR29=8;
break;
}
VAR4->VAR29=VAR29;
if (VAR18.VAR7[0] != 0)
FUN14(VAR4,VAR20,VAR34);
VAR17=FUN15(VAR4,VAR20,VAR22);
VAR17=FUN16(VAR4,VAR20,VAR29);
VAR17=FUN14(VAR4,VAR20,VAR14);
FUN17(VAR20,1.0);
VAR28=(unsigned char *) FUN18(VAR20);
for (VAR27=0; VAR27 < (VAR23) VAR4->VAR41; VAR27++)
{
VAR50
*magick_restrict VAR51;

VAR24=FUN19(VAR4,VAR29/8*VAR4->VAR39,(char *) VAR28);
if (VAR24 == -1)
break;
VAR51=FUN20(VAR4,0,VAR4->VAR41-VAR27-1,VAR4->VAR39,1,
VAR6);
if (VAR51 == (VAR50 *) NULL)
break;
(void) FUN21(VAR4,(VAR52 *) NULL,VAR20,
VAR53,VAR28,VAR6);
if ((VAR18.VAR7[1] == 2) || (VAR18.VAR7[1] == 3))
FUN22(VAR4,VAR51,(int) VAR4->VAR39);
if (FUN23(VAR4,VAR6) == VAR32)
break;
if (VAR4->VAR44 == (VAR1 *) NULL)
{
VAR17=FUN24(VAR4,VAR54,(VAR55) VAR27,
VAR4->VAR41);
if (VAR17 == VAR32)
break;
}
}
if (VAR18.VAR10 == 1)
for (VAR27=0; VAR27 < (VAR23) VAR4->VAR41; VAR27++)
{

VAR24=FUN19(VAR4,VAR29/8*VAR4->VAR39,(char *) VAR28);
if (VAR24 == -1)
break;
if (VAR18.VAR7[1] == 0)
FUN25(VAR4,(double *) VAR28,VAR27,0,0,VAR6);
else
FUN26(VAR4,(float *) VAR28,VAR27,0,0,VAR6);
}
if (VAR20 != (VAR19 *) NULL)
VAR20=FUN27(VAR20);
if (FUN3(VAR4) != VAR32)
{
FUN8(VAR6,VAR37,"",
VAR4->VAR38);
break;
}
VAR15=FUN28(VAR4,90.0,VAR6);
if (VAR15 != (VAR1 *) NULL)
{
VAR15->VAR56.VAR57=0;
VAR15->VAR56.VAR27=0;
VAR15->VAR58 = VAR4->VAR58;
FUN29(VAR15);
VAR15->VAR59=FUN30(VAR4->VAR59);
FUN31(&VAR4,VAR15);
VAR4=VAR15;
}

if (VAR3->VAR60 != 0)
if (VAR4->VAR61 >= (VAR3->VAR61+VAR3->VAR60-1))
break;

VAR45:
if ((VAR3->VAR42 != VAR32) && (VAR3->VAR60 != 0))
if (VAR4->VAR61 >= (VAR3->VAR61+VAR3->VAR60-1))
break;
FUN32(VAR3,VAR4,VAR6);
if (FUN33(VAR4) == (VAR1 *) NULL)
{
VAR17=VAR32;
break;
}
VAR4=FUN34(VAR4);
VAR17=FUN24(VAR4,VAR62,FUN35(VAR4),
FUN36(VAR4));
if (VAR17 == VAR32)
break;
}
(void) FUN37(VAR4);
if (VAR17 == VAR32)
return(FUN6(VAR4));
return(FUN38(VAR4));
}