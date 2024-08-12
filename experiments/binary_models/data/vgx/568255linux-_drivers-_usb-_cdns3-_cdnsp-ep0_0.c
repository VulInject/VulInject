static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
int VAR5)
{
enum usb_device_state VAR6;
enum usb_device_speed VAR7;
u16 VAR8;

VAR6 = VAR2->VAR9.VAR6;
VAR7 = VAR2->VAR9.VAR7;

switch (FUN2(VAR4->VAR10)) {
case VAR11:
VAR2->VAR12 = !!VAR5;
FUN3(VAR5);
break;
case VAR13:
if (VAR6 != VAR14 || VAR7 < VAR15)
return -VAR16;

VAR2->VAR17 = !!VAR5;
FUN4(VAR5);
break;
case VAR18:
if (VAR6 != VAR14 || VAR7 < VAR15)
return -VAR16;

VAR2->VAR19 = !!VAR5;
FUN5(VAR5);
break;
case VAR20:
return -VAR16;
case VAR21:
if (VAR6 != VAR14 || VAR7 > VAR22)
return -VAR16;

VAR8 = FUN2(VAR4->VAR23);

if (!VAR5 || (VAR8 & 0xff) != 0)
return -VAR16;

VAR8 = VAR8 >> 8;

if (VAR8 > VAR24 || VAR8 < VAR25)
return -VAR16;

VAR2->VAR26 = VAR8;


FUN6(VAR2);
break;
default:
return -VAR16;
}

return 0;
}