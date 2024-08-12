static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR6, struct VAR7 *VAR8)
{
struct t4_cqe VAR9;
struct VAR10 *VAR11 = VAR4 ? &VAR4->VAR11 : NULL;
u32 VAR12 = 0;
u8 VAR13;
u64 VAR14 = 0;
int VAR15;

VAR15 = FUN2(VAR11, &(VAR2->VAR16), &VAR9, &VAR13, &VAR14, &VAR12,
VAR8 ? &VAR8->VAR11 : NULL);
if (VAR15)
goto VAR17;

VAR6->VAR18 = VAR14;
VAR6->VAR19 = &VAR4->VAR20;
VAR6->VAR21 = FUN3(&VAR9);
VAR6->VAR22 = 0;


if (VAR8 && !(VAR8->VAR23 & VAR24) && VAR8->VAR25 &&
VAR8->VAR11.VAR26 < VAR8->VAR27)
FUN4(VAR8);

FUN5("",
FUN6(&VAR9),
FUN7(&VAR9), FUN8(&VAR9),
FUN3(&VAR9), FUN9(&VAR9),
FUN10(&VAR9), FUN11(&VAR9),
(unsigned long long)VAR14);

if (FUN7(&VAR9) == 0) {
if (!FUN3(&VAR9))
VAR6->VAR28 = FUN9(&VAR9);
else
VAR6->VAR28 = 0;

switch (FUN8(&VAR9)) {
case VAR29:
VAR6->VAR30 = VAR31;
break;
case VAR32:
case VAR33:
VAR6->VAR30 = VAR31;
VAR6->VAR34.VAR35 = FUN12(&VAR9);
VAR6->VAR22 |= VAR36;
FUN13(VAR4->VAR37, VAR6->VAR34.VAR35);
break;
case VAR38:
VAR6->VAR30 = VAR39;
VAR6->VAR34.VAR40 = FUN14(&VAR9);
VAR6->VAR22 |= VAR41;
break;
default:
FUN15("",
FUN8(&VAR9), FUN6(&VAR9));
VAR15 = -VAR42;
goto VAR17;
}
} else {
switch (FUN8(&VAR9)) {
case VAR38:
case VAR43:
VAR6->VAR30 = VAR44;
break;
case VAR45:
VAR6->VAR30 = VAR46;
VAR6->VAR28 = FUN9(&VAR9);
break;
case VAR32:
case VAR33:
VAR6->VAR30 = VAR47;
VAR6->VAR22 |= VAR36;
break;
case VAR29:
case VAR48:
VAR6->VAR30 = VAR47;
break;

case VAR49:
VAR6->VAR30 = VAR50;
break;
case VAR51:
VAR6->VAR30 = VAR52;


if (FUN3(&VAR9) != VAR53)
FUN13(VAR4->VAR37,
FUN16(&VAR9));
break;
default:
FUN15("",
FUN8(&VAR9), FUN6(&VAR9));
VAR15 = -VAR42;
goto VAR17;
}
}

if (VAR13)
VAR6->VAR54 = VAR55;
else {

switch (FUN3(&VAR9)) {
case VAR53:
VAR6->VAR54 = VAR56;
break;
case VAR57:
VAR6->VAR54 = VAR58;
break;
case VAR59:
VAR6->VAR54 = VAR60;
break;
case VAR61:
case VAR62:
VAR6->VAR54 = VAR58;
break;
case VAR63:
VAR6->VAR54 = VAR64;
break;
case VAR65:
VAR6->VAR54 = VAR66;
break;
case VAR67:
case VAR68:
VAR6->VAR54 = VAR69;
break;
case VAR70:
case VAR71:
case VAR72:
case VAR73:
case VAR74:
case VAR75:
case VAR76:
case VAR77:
case VAR78:
case VAR79:
case VAR80:
case VAR81:
case VAR82:
case VAR83:
VAR6->VAR54 = VAR84;
break;
case VAR85:
VAR6->VAR54 = VAR55;
break;
default:
FUN15("",
FUN3(&VAR9), FUN6(&VAR9));
VAR6->VAR54 = VAR84;
}
}
VAR17:
return VAR15;
}