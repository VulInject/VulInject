static enum VAR1
FUN1(struct VAR2 *VAR3, u32 VAR4,
enum vxge_hw_event VAR5)
{
switch (VAR5) {
case VAR6:
break;
case VAR7:
case VAR8:
case VAR9:
case VAR10:
goto VAR11;
case VAR12:
goto VAR11;
case VAR13:
case VAR14:
goto VAR11;
case VAR15:
case VAR16:
case VAR17:
case VAR18:
break;
case VAR19:
case VAR20:
goto VAR11;
case VAR21:
break;
default:
FUN2(0);
goto VAR11;
}


if (VAR3->VAR22->VAR23)
VAR3->VAR22->FUN3(VAR3,
VAR5, VAR4);
VAR11:

return VAR24;
}