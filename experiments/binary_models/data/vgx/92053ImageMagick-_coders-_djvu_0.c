static VAR1 *FUN1(VAR2* VAR3,const int VAR4,
const VAR5 *VAR6,VAR7 *VAR8)
{
VAR9
VAR10;

ddjvu_pageinfo_t VAR11;
VAR12 *VAR13;
VAR1 *VAR14;
int VAR15;
int VAR16;
MagickBooleanType VAR17;




VAR14 = VAR3->VAR14;



VAR15=FUN2(VAR18,FUN3(), "");
(void) VAR15;

FUN4("", VAR4);
VAR3->VAR19 = FUN5(VAR3->VAR20, VAR4); 


VAR16=(-1);
do {
while ((VAR13 = FUN6(VAR3->VAR21)))
{
VAR16=FUN7(VAR13);
if (VAR16 == 0) break;
FUN8(VAR3->VAR21);
}



VAR13 = FUN9(VAR3,VAR14);
if (VAR13)
do {
VAR16=FUN7(VAR13);
if (VAR16 == 0) break;
FUN8(VAR3->VAR21);
} while ((VAR13 = FUN6(VAR3->VAR21)));
if (VAR16 == 0) break;
} while (!FUN10(VAR3->VAR19));

FUN11(VAR3->VAR20, VAR4, &VAR11);

VAR14->VAR22.VAR23 = (float) VAR11.VAR24;
VAR14->VAR22.VAR25 =(float) VAR11.VAR24;
if (VAR6->VAR26 != (char *) NULL)
{
int
VAR27;

VAR28
VAR29;


VAR27=FUN12(VAR6->VAR26,&VAR29);
VAR14->VAR22.VAR23=VAR29.VAR30;
VAR14->VAR22.VAR25=VAR29.VAR31;
if ((VAR27 & VAR32) == 0)
VAR14->VAR22.VAR25=VAR14->VAR22.VAR23;
VAR11.VAR33*=VAR14->VAR22.VAR23/VAR11.VAR24;
VAR11.VAR34*=VAR14->VAR22.VAR25/VAR11.VAR24;
VAR11.VAR24=(VAR35) FUN13(VAR14->VAR22.VAR23,VAR14->VAR22.VAR25);
}
VAR10 = FUN14(VAR3->VAR19);







VAR14->VAR36=(VAR37) VAR11.VAR33;
VAR14->VAR38=(VAR37) VAR11.VAR34;


if (VAR10 == VAR39){
VAR14->VAR40 = VAR41;
VAR14->VAR42 = VAR43;
VAR14->VAR44 =  8UL;    
VAR14->VAR45= 2;
if (FUN15(VAR14,VAR14->VAR45,VAR8) == VAR46)
FUN16(VAR47,
"");
} else {
VAR14->VAR40 = VAR48;
VAR14->VAR42 = VAR49;

VAR14->VAR44 =  8UL;    

VAR14->VAR50 = VAR51;

}
VAR17=FUN17(VAR14,VAR14->VAR36,VAR14->VAR38,VAR8);
if (VAR17 == VAR46)
return(FUN18(VAR14));
FUN4("",(double) VAR14->VAR36,(double)
VAR14->VAR38);




FUN19(VAR3, VAR3->VAR19, 0, 0, VAR11.VAR33, VAR11.VAR34, VAR8);
int VAR52;
for (VAR52 = 0;VAR52< VAR14->VAR38; VAR52++)
{
FUN4("",VAR52);
VAR53 = FUN20(VAR14,0,VAR52,VAR14->VAR36,1);
FUN21(VAR3, VAR52, VAR54);
FUN22(VAR14);
}



FUN4("",(double) VAR14->VAR36,
(double) VAR14->VAR38);

if (!VAR14->VAR55)
FUN23(VAR14,VAR8);





if (VAR3->VAR19) {
FUN24(VAR3->VAR19);
VAR3->VAR19 = NULL;
}


if (VAR16 == 0)
VAR14=FUN25(VAR14);
return VAR14;

}


if (FUN15(VAR14,2,VAR8) == VAR46)
FUN16(VAR47,"");

VAR14->VAR56[0].VAR57=VAR58;
VAR14->VAR56[0].VAR59=VAR58;
VAR14->VAR56[0].VAR60=VAR58;
VAR14->VAR56[1].VAR57=0;
VAR14->VAR56[1].VAR59=0;
VAR14->VAR56[1].VAR60=0;

static void FUN26(VAR2* VAR3)
{
if (VAR3->VAR20)
FUN27(VAR3->VAR20);
if (VAR3->VAR21)
FUN28(VAR3->VAR21);
if (VAR3->VAR19)
FUN24(VAR3->VAR19);
FUN29(VAR3);
}