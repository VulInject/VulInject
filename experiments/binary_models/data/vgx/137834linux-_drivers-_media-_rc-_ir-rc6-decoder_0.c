static int FUN1(struct VAR1 *VAR2, struct ir_raw_event VAR3)
{
struct VAR4 *VAR5 = &VAR2->VAR6->VAR7;
u32 VAR8;
u8 VAR9;
enum rc_proto VAR10;

if (!FUN2(VAR3)) {
if (VAR3.VAR11)
VAR5->VAR12 = VAR13;
return 0;
}

if (!FUN3(VAR3.VAR14, VAR15, VAR15 / 2))
goto VAR16;

VAR17:
FUN4(&VAR2->VAR2, "",
VAR5->VAR12, VAR3.VAR14, FUN5(VAR3.VAR18));

if (!FUN3(VAR3.VAR14, VAR15, VAR15 / 2))
return 0;

switch (VAR5->VAR12) {

case VAR13:
if (!VAR3.VAR18)
break;


if (!FUN6(VAR3.VAR14, VAR19, VAR15))
break;

VAR5->VAR12 = VAR20;
VAR5->VAR21 = 0;
return 0;

case VAR20:
if (VAR3.VAR18)
break;

if (!FUN6(VAR3.VAR14, VAR22, VAR15 / 2))
break;

VAR5->VAR12 = VAR23;
VAR5->VAR24 = 0;
return 0;

case VAR23:
if (!FUN6(VAR3.VAR14, VAR25, VAR15 / 2))
break;

VAR5->VAR24 <<= 1;
if (VAR3.VAR18)
VAR5->VAR24 |= 1;
VAR5->VAR21++;
VAR5->VAR12 = VAR26;
return 0;

case VAR26:
if (VAR5->VAR21 == VAR27)
VAR5->VAR12 = VAR28;
else
VAR5->VAR12 = VAR23;

FUN7(&VAR3, VAR29);
goto VAR17;

case VAR28:
if (!FUN6(VAR3.VAR14, VAR30, VAR15 / 2))
break;

VAR5->VAR9 = VAR3.VAR18;
VAR5->VAR12 = VAR31;
return 0;

case VAR31:
if (!(VAR5->VAR24 & VAR32)) {
FUN4(&VAR2->VAR2, "");
break;
}

VAR5->VAR12 = VAR33;
FUN7(&VAR3, VAR34);
VAR5->VAR21 = 0;
VAR5->VAR35 = 0;

switch (FUN8(VAR5)) {
case VAR36:
VAR5->VAR37 = VAR38;
break;
case VAR39:
VAR5->VAR37 = VAR40;
break;
default:
FUN4(&VAR2->VAR2, "");
goto VAR16;
}
goto VAR17;

case VAR33:
if (FUN6(VAR3.VAR14, VAR25, VAR15 / 2)) {

if (VAR5->VAR21++ < VAR41 * sizeof VAR5->VAR35) {
VAR5->VAR35 <<= 1;
if (VAR3.VAR18)
VAR5->VAR35 |= 1;
}
VAR5->VAR12 = VAR42;
return 0;
} else if (VAR39 == FUN8(VAR5) && !VAR3.VAR18 &&
FUN3(VAR3.VAR14, VAR43, VAR15 / 2)) {
VAR5->VAR12 = VAR44;
goto VAR17;
}
break;

case VAR42:
if (VAR5->VAR21 == VAR5->VAR37)
VAR5->VAR12 = VAR44;
else
VAR5->VAR12 = VAR33;

FUN7(&VAR3, VAR29);
goto VAR17;

case VAR44:
if (VAR3.VAR18)
break;

switch (FUN8(VAR5)) {
case VAR36:
VAR8 = VAR5->VAR35;
VAR9 = VAR5->VAR9;
VAR10 = VAR45;
FUN4(&VAR2->VAR2, "",
VAR8, VAR9);
break;

case VAR39:
if (VAR5->VAR21 > VAR41 * sizeof VAR5->VAR35) {
FUN4(&VAR2->VAR2, "",
VAR5->VAR21);
goto VAR16;
}

VAR8 = VAR5->VAR35;
switch (VAR5->VAR21) {
case 20:
VAR10 = VAR46;
VAR9 = 0;
break;
case 24:
VAR10 = VAR47;
VAR9 = 0;
break;
case 32:
switch (VAR8 & VAR48) {
case VAR49:
case VAR50:
case VAR51:
VAR10 = VAR52;
VAR9 = !!(VAR8 & VAR53);
VAR8 &= ~VAR53;
break;
default:
VAR10 = VAR54;
VAR9 = 0;
break;
}
break;
default:
FUN4(&VAR2->VAR2, "");
goto VAR16;
}

FUN4(&VAR2->VAR2, "",
VAR10, VAR8, VAR9);
break;
default:
FUN4(&VAR2->VAR2, "");
goto VAR16;
}

FUN9(VAR2, VAR10, VAR8, VAR9);
VAR5->VAR12 = VAR13;
return 0;
}

VAR16:
FUN4(&VAR2->VAR2, "",
VAR5->VAR12, VAR3.VAR14, FUN5(VAR3.VAR18));
VAR5->VAR12 = VAR13;
return -VAR55;
}