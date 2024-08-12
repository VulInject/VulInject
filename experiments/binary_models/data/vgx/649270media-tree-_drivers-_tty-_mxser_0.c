static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3, unsigned long VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
struct VAR8 *VAR9 = &VAR6->VAR9;
struct async_icount VAR10;
unsigned long VAR11;
void VAR12 *VAR13 = (void VAR12 *)VAR4;
int VAR14;

if (VAR2->VAR15 == VAR16)
return FUN2(VAR3, VAR13);

if (VAR3 == VAR17 || VAR3 == VAR18) {
int VAR19;
unsigned long VAR20;
static unsigned char VAR21[] = { 0xfc, 0xf3, 0xcf, 0x3f };
int VAR22;
unsigned char VAR23, VAR24;

if (VAR6->VAR25->VAR26 != VAR27)
return -VAR28;

VAR19 = VAR2->VAR15 % 4;
if (VAR3 == VAR17) {
if (FUN3(VAR20, (int VAR12 *) VAR13))
return -VAR28;
if (VAR20 != VAR29 &&
VAR20 != VAR30 &&
VAR20 != VAR31 &&
VAR20 != VAR32)
return -VAR28;
VAR24 = VAR21[VAR19];
VAR22 = VAR19 * 2;
FUN4(&VAR6->VAR33);
VAR23 = FUN5(VAR6->VAR34);
VAR23 &= VAR24;
VAR23 |= (VAR20 << VAR22);
FUN6(VAR23, VAR6->VAR34);
FUN7(&VAR6->VAR33);
} else {
VAR22 = VAR19 * 2;
FUN4(&VAR6->VAR33);
VAR20 = FUN5(VAR6->VAR34) >> VAR22;
FUN7(&VAR6->VAR33);
VAR20 &= VAR35;
if (FUN8(VAR20, (int VAR12 *)VAR13))
return -VAR28;
}
return 0;
}

if (VAR3 != VAR36 && VAR3 != VAR37 && FUN9(VAR2))
return -VAR38;

switch (VAR3) {
case VAR36:
FUN10(&VAR9->mutex);
VAR14 = FUN11(VAR2, VAR13);
FUN12(&VAR9->mutex);
return VAR14;
case VAR39:
FUN10(&VAR9->mutex);
VAR14 = FUN13(VAR2, VAR13);
FUN12(&VAR9->mutex);
return VAR14;
case VAR40:	
return  FUN14(VAR6, VAR13);

case VAR37:
FUN15(&VAR6->VAR33, VAR11);
VAR10 = VAR6->VAR41;	
FUN16(&VAR6->VAR33, VAR11);

return FUN17(VAR6->VAR9.VAR42,
FUN18(VAR6, VAR4, &VAR10));
case VAR43:
return FUN8(VAR6->VAR44 != 115200 ? 1 : 0, (int VAR12 *)VAR13);
case VAR45:
FUN4(&VAR6->VAR33);
VAR6->VAR46.VAR47 = 0;
VAR6->VAR46.VAR48 = 0;
FUN7(&VAR6->VAR33);
return 0;

case VAR49:{
int VAR50, VAR51;

VAR50 = FUN19(VAR2);
FUN4(&VAR6->VAR33);
VAR51 = FUN5(VAR6->VAR52 + VAR53) & VAR54;
FUN7(&VAR6->VAR33);
VAR50 += (VAR51 ? 0 : 1);

return FUN8(VAR50, (int VAR12 *)VAR13);
}
case VAR55: {
int VAR56, VAR57;

FUN4(&VAR6->VAR33);
VAR57 = FUN20(VAR6->VAR52, 1, VAR2->VAR15);
FUN21(VAR2, VAR6, VAR57);

VAR56 = FUN5(VAR6->VAR52 + VAR58);
FUN7(&VAR6->VAR33);

if (VAR56 & VAR59)
VAR6->VAR46.VAR60 &= ~VAR61;
else
VAR6->VAR46.VAR60 |= VAR61;

if (VAR56 & VAR62)
VAR6->VAR46.VAR60 &= ~VAR63;
else
VAR6->VAR46.VAR60 |= VAR63;

if (VAR2->VAR64)
VAR6->VAR46.VAR60 |= VAR65;
else
VAR6->VAR46.VAR60 &= ~VAR65;

if (FUN22(VAR13, &VAR6->VAR46,
sizeof(struct VAR66)))
return -VAR28;

return 0;
}
case VAR67: {
if (FUN8(VAR6->VAR68, (unsigned char VAR12 *)VAR13))
return -VAR28;

VAR6->VAR68 = 0;
return 0;
}
case VAR69: {
int VAR70;

if (FUN3(VAR70, (int VAR12 *)VAR13))
return -VAR28;
VAR71[VAR2->VAR15] = VAR70;
return FUN8(VAR70, (int VAR12 *)VAR13);
}
default:
return -VAR72;
}
return 0;
}