static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
u8 VAR4;
u8 VAR5 = 0x0;
int VAR6;
static struct pci_device_id VAR7[] = {
{ FUN2(VAR8, 0x0101) },
{ },
};

FUN3("", VAR9, VAR2->VAR10);
if (FUN4(VAR2->VAR11) && FUN5(VAR2)) {
VAR3 = FUN6(&VAR2);
if (VAR3)
return VAR3;
VAR4 = FUN7(VAR2->VAR12);
FUN3("", VAR2->VAR12, VAR4);
switch (VAR4) {
case VAR13:
VAR5 = VAR14;
break;
case VAR15:
if (FUN8(VAR2->VAR12)) {
if ((VAR2->VAR16 >= VAR17) &&
(VAR2->VAR18 == VAR19))
VAR5 = VAR20;
else if (!FUN9(VAR2->VAR12))

VAR5 = VAR21;
else
VAR5 = VAR14;
} else {
if (VAR2->VAR16 >= VAR17)
VAR5 = VAR21;
else
VAR5 = VAR14;
}
break;
case VAR22:
switch (VAR2->VAR16) {
case VAR23:
VAR5 = VAR14;
break;
case VAR17:
if (VAR2->VAR18 == VAR19)
VAR5 = VAR20;
else
VAR5 = VAR21;
break;
case VAR24:
VAR5 = VAR25;
break;
case VAR26:

if (FUN10(VAR7))
FUN11(VAR2,
VAR25);
VAR5 = VAR27;
break;
default:
FUN12("");
return -VAR28;
}
break;
default:
FUN12("");
return -VAR28;
}
FUN3("",
VAR2->VAR10, VAR5);
VAR6 = FUN11(VAR2, VAR5);
if (VAR6) {
FUN12("");
return VAR6;
}
if (FUN13(VAR2->VAR11->VAR29)) {
FUN12("");
return -VAR30;
}
}

FUN14(1000);
FUN3("", VAR9);
return 0;
}