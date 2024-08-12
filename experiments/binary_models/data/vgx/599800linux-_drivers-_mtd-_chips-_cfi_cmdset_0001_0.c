static int FUN1 (struct VAR1 *VAR2, struct VAR3 *VAR4, unsigned long VAR5, int VAR6)
{
FUN2(VAR7, VAR8);
struct VAR9 *VAR10 = VAR2->VAR11;
map_word VAR12, VAR13 = FUN3(0x80), VAR14 = FUN3(0x01);
struct VAR15 *VAR16 = VAR10->VAR17;
unsigned long VAR18 = VAR19 + VAR20;


if (VAR6 == VAR21 && VAR4->VAR22 != VAR23)
goto sleep;

switch (VAR4->VAR24) {

case VAR25:
for (;;) {
VAR12 = FUN4(VAR2, VAR5);
if (FUN5(VAR2, VAR12, VAR13, VAR13))
break;


if (VAR4->VAR26 && FUN5(VAR2, VAR12, VAR14, VAR14))
break;

FUN6(&VAR4->mutex);
FUN7(1);
FUN8(&VAR4->mutex);

return -VAR27;
}
VAR28;
case VAR23:
case VAR29:
case VAR30:
return 0;

case VAR31:
if (!VAR16 ||
!(VAR16->VAR32 & 2) ||
!(VAR6 == VAR23 || VAR6 == VAR33 ||
(VAR6 == VAR34 && (VAR16->VAR35 & 1))))
goto sleep;


if ((VAR5 & VAR4->VAR36) ==
VAR4->VAR37)
goto sleep;


if (FUN9(VAR10, VAR4) &&
(VAR4->VAR36 == ~(0x8000-1)))
goto sleep;


FUN10(VAR2, FUN3(0xB0), VAR4->VAR37);


FUN10(VAR2, FUN3(0x70), VAR4->VAR37);
VAR4->VAR22 = VAR31;
VAR4->VAR24 = VAR38;
VAR4->VAR39 = 1;
for (;;) {
VAR12 = FUN4(VAR2, VAR4->VAR37);
if (FUN5(VAR2, VAR12, VAR13, VAR13))
break;

if (FUN11(VAR19, VAR18)) {

FUN12(VAR2, VAR4, VAR5);
FUN13(VAR40 ""
"", VAR2->VAR41, VAR12.VAR42[0]);
return -VAR43;
}

FUN6(&VAR4->mutex);
FUN7(1);
FUN8(&VAR4->mutex);

}
VAR4->VAR24 = VAR25;
return 0;

case VAR44:
if (VAR6 != VAR23 && VAR6 != VAR33 &&
(VAR6 != VAR34 || !VAR16 || !(VAR16->VAR35&1)))
goto sleep;
VAR4->VAR22 = VAR4->VAR24;
VAR4->VAR24 = VAR23;
return 0;

case VAR45:

return -VAR43;
case VAR33:

if (VAR6 == VAR23 && VAR4->VAR22 == VAR23)
return 0;
VAR28;
default:
sleep:
FUN14(VAR46);
FUN15(&VAR4->VAR47, &VAR7);
FUN6(&VAR4->mutex);
FUN16();
FUN17(&VAR4->VAR47, &VAR7);
FUN8(&VAR4->mutex);
return -VAR27;
}
}