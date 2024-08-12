static int FUN1(struct VAR1 *VAR1)
{
int VAR2 = 0;
u8 VAR3 = 0;
enum pci_bus_speed VAR4;
struct VAR5 *VAR6 = VAR1->VAR7.VAR8->VAR6;

FUN2("", VAR9, VAR1);

FUN3();
VAR3 = VAR1->VAR10;
VAR4 = VAR1->VAR11;
FUN4();

switch (VAR4) {
case VAR12:
break;
case VAR13:
if (VAR3 == VAR14)
VAR4 += 0x01;
break;
case VAR15:
case VAR16:
VAR4 += 0x01;
break;
default:

VAR2 = -VAR17;
}

if (!VAR2)
VAR6->VAR18 = VAR4;

FUN2("", VAR9, VAR2, VAR4);
return VAR2;
}