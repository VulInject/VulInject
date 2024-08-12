static int FUN1(struct VAR1 *VAR2, int VAR3,
phy_interface_t VAR4)
{
u16 VAR5;
int VAR6;

VAR6 = FUN2(VAR2, VAR3, VAR7, &VAR5);
if (VAR6)
return VAR6;

VAR5 &= ~(VAR8 |
VAR9);

switch (VAR4) {
case VAR10:
VAR5 |= VAR8;
break;
case VAR11:
VAR5 |= VAR9;
break;
case VAR12:
VAR5 |= VAR8 |
VAR9;
break;
case VAR13:
break;
default:
return 0;
}

VAR6 = FUN3(VAR2, VAR3, VAR7, VAR5);
if (VAR6)
return VAR6;

FUN4(VAR2->VAR14->VAR15[VAR3].VAR16, "",
VAR5 & VAR8 ? "" : "",
VAR5 & VAR9 ? "" : "");

return 0;
}