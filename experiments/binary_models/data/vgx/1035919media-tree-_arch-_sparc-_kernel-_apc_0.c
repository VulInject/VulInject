static long FUN1(struct VAR1 *VAR2, unsigned int VAR3, unsigned long VAR4)
{
__u8 VAR5, VAR6 *VAR7 = (__u8 VAR6 *) VAR4;

switch (VAR3) {
case VAR8:
if (FUN2(FUN3(VAR9) & VAR10, VAR7))
return -VAR11;
break;

case VAR12:
if (FUN2(FUN3(VAR13) & VAR10, VAR7))
return -VAR11;
break;

case VAR14:
if (FUN2(FUN3(VAR15) & VAR16, VAR7))
return -VAR11;
break;

case VAR17:
if (FUN4(VAR5, VAR7))
return -VAR11;
FUN5(VAR5 & VAR10, VAR9);
break;

case VAR18:
if (FUN4(VAR5, VAR7))
return -VAR11;
FUN5(VAR5 & VAR10, VAR13);
break;

case VAR19:
if (FUN4(VAR5, VAR7))
return -VAR11;
FUN5(VAR5 & VAR16, VAR15);
break;

default:
return -VAR20;
}

return 0;
}

static const struct file_operations VAR21 = {
.VAR22 =	VAR23,
.open =			VAR24,
.VAR25 =		VAR26,
.VAR27 =		VAR28,
};