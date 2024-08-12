static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
enum usb_device_state VAR5 = VAR2->VAR6.VAR5;
u32 VAR7;
int VAR8;
u32 VAR9;

VAR2->VAR10 = false;
VAR7 = FUN2(VAR4->VAR11);

switch (VAR5) {
case VAR12:
return -VAR13;

case VAR14:
VAR8 = FUN3(VAR2, VAR4);

if (VAR7 && (!VAR8 || (VAR8 == VAR15))) {


if (VAR8 == 0)
FUN4(&VAR2->VAR6,
VAR16);


VAR9 = FUN5(VAR2->VAR17, VAR18);
VAR9 |= (VAR19 | VAR20);
FUN6(VAR2->VAR17, VAR18, VAR9);

VAR2->VAR21 = true;
FUN7(VAR2->VAR22, "");
}
break;

case VAR16:
VAR8 = FUN3(VAR2, VAR4);
if (!VAR7 && !VAR8)
FUN4(&VAR2->VAR6,
VAR14);
break;
default:
VAR8 = -VAR13;
}
return VAR8;
}