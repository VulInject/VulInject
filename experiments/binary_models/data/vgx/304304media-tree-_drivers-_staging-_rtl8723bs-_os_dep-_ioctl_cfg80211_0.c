struct VAR1 *FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5)
{
struct VAR6 *VAR7;
struct VAR1 *VAR8 = NULL;

u16 VAR9;
u32 VAR10;
u64 VAR11;
u16 VAR12;
u16 VAR13;
VAR14 *VAR15;
size_t VAR16;
s32 VAR17;
VAR14 *VAR18 = NULL, *VAR19;
size_t VAR20, VAR21 = 0;
struct VAR22 *VAR23;
VAR24 *VAR25;
u8 VAR26[] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

struct VAR27 *VAR28 = VAR3->VAR29;
struct VAR30 *VAR30 = VAR28->VAR30;
struct VAR31 *VAR32 = &(VAR3->VAR33);




VAR21 = VAR5->VAR34.VAR35+sizeof (struct VAR36);
if (VAR21 > VAR37) {
FUN2("", VAR38, VAR37);
goto VAR39;
}

{
u16 VAR40 = 0;

if (FUN3(VAR5->VAR34.VAR41, VAR5->VAR34.VAR35, NULL, &VAR40)>0)
{
if (VAR40 > 0)
{
FUN2("", VAR38);
goto VAR39;
}
}
}



if (FUN4(VAR3)->VAR42 != NULL)
{
VAR14 *VAR43 = NULL, VAR44 = 0;
struct VAR45 *VAR46 = &VAR5->VAR34.VAR47;
struct VAR48 *VAR49 = FUN4(VAR3)->VAR42;
struct VAR50 *VAR51 = VAR49->VAR51;
u32 VAR52 = 0;
VAR14 *VAR53 = NULL;

VAR53 = FUN5(VAR5->VAR34.VAR41+VAR54, VAR5->VAR34.VAR35-VAR54, NULL, &VAR52);

if (VAR53 && VAR52>0)
VAR43 = FUN6(VAR53,  VAR52, VAR55, (VAR14 *)(&VAR44), NULL);

if (VAR44 != 0)
{
if (VAR49->VAR56 == 1 && VAR49->VAR57 == 1) 
{
FUN7("", VAR46->VAR47, VAR46->VAR58);

if (VAR51[0].VAR59 == 0) {
}
else if (VAR46->VAR58 == VAR51[0].VAR59 &&
!memcmp(VAR46->VAR47, VAR51[0].VAR60, VAR51[0].VAR59))
{
FUN2("", VAR38);
}
else
{
if (VAR43 != NULL)
*VAR43 = 0; 
}
}
}
}



VAR9 = VAR5->VAR34.VAR61.VAR62;
VAR10 = FUN8(VAR9, VAR63);

VAR7 = FUN9(VAR30, VAR10);

VAR11 = FUN10();

VAR13 = FUN11(*(VAR24 *)FUN12(VAR5->VAR34.VAR41));
VAR12 = FUN11(*(VAR24 *)FUN13(VAR5->VAR34.VAR41));

VAR15 = VAR5->VAR34.VAR41+VAR54;
VAR16 = VAR5->VAR34.VAR35-VAR54;


if (FUN14(VAR32, VAR64) == true &&
FUN15(&VAR32->VAR65.VAR34, &VAR5->VAR34, 0)) {
VAR17 = 100*FUN16(VAR3->VAR66.VAR67);
} else {
VAR17 = 100*FUN16(VAR5->VAR34.VAR68.VAR69);
}

VAR18 = FUN17(VAR37, VAR70);
if (!VAR18)
goto VAR39;
VAR19 = VAR18;

VAR23 = (struct VAR22 *)VAR19;
VAR25 = &(VAR23->VAR71);
*(VAR25) = 0;

FUN18(VAR23, 0);


if (VAR5->VAR34.VAR72[0] == 1) { 
memcpy(VAR23->VAR73, VAR26, VAR74);
FUN19(VAR19, VAR75);
} else {
memcpy(VAR23->VAR73, FUN20(&(VAR3->VAR76)), VAR74);
FUN19(VAR19, VAR77);
}

memcpy(VAR23->VAR78, VAR5->VAR34.VAR79, VAR74);
memcpy(VAR23->VAR80, VAR5->VAR34.VAR79, VAR74);


VAR19 += sizeof(struct VAR36);
VAR20 = sizeof (struct VAR36);

memcpy(VAR19, VAR5->VAR34.VAR41, VAR5->VAR34.VAR35);
VAR20 += VAR5->VAR34.VAR35;

*((VAR81*)VAR19) = FUN21(VAR11);

VAR8 = FUN22(VAR30, VAR7, (struct VAR82 *)VAR18,
VAR20, VAR17, VAR70);

if (FUN23(!VAR8)) {
FUN7(VAR83"", FUN24(VAR3));
goto VAR39;
}

FUN25(VAR30, VAR8);
FUN26(VAR18);

VAR39:
return VAR8;

}