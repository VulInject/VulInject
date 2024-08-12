static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = VAR2->VAR9.VAR10;
uint32_t VAR11 = VAR6->VAR11;
uint32_t VAR12 = VAR6->VAR12;

uint32_t VAR13 = VAR6->VAR14[0];
uint32_t VAR15;

if (VAR11 == VAR16) {
switch (VAR12) {
case VAR17:
FUN2(VAR2->VAR18, "");

FUN2(VAR2->VAR18, "");
FUN3(true);
break;
case VAR19:
FUN2(VAR2->VAR18, "");
break;
default:
FUN2(VAR2->VAR18, "",
VAR12);
break;
}
} else if (VAR11 == VAR20) {
FUN2(VAR2->VAR18, "");

FUN2(VAR2->VAR18, "");
FUN3(true);
} else if (VAR11 == VAR21) {
if (VAR12 == 0xfe) {

VAR15 = FUN4(VAR22, 0, VAR23);
VAR15 = FUN5(VAR15, VAR24, VAR25, 1);
FUN6(VAR22, 0, VAR23, VAR15);

switch (VAR13) {
case 0x3:
FUN7(VAR2->VAR18, "");
FUN8(VAR8);
break;
case 0x4:
FUN7(VAR2->VAR18, "");
FUN8(VAR8);
break;
case 0x7:

FUN9(&VAR8->VAR26);

if (!FUN10(&VAR2->VAR27))
return 0;

if (FUN11(&VAR2->VAR28))
FUN12(&VAR8->VAR29);

break;
}
}
}

return 0;
}