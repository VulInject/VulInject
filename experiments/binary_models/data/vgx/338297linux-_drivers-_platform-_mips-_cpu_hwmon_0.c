int FUN1(int VAR1)
{
u32 VAR2, VAR3;

if (VAR4) {
VAR2 = (FUN2(VAR5) & 0xff);
goto VAR6;
}

VAR2 = FUN3(VAR1);
VAR3 = FUN4() & VAR7;

switch (VAR3) {
case VAR8:
VAR2 = (VAR2 >> 8) & 0xff;
break;
case VAR9:
case VAR10:
case VAR11:
case VAR12:
VAR2 = ((VAR2 >> 8) & 0xff) - 100;
break;
case VAR13:
case VAR14:
default:
VAR2 = (VAR2 & 0xffff) * 731 / 0x4000 - 273;
break;
}

VAR6:
return (int)VAR2 * 1000;
}

static int VAR15;
static struct VAR16 *VAR17;

static VAR18 FUN5(struct VAR16 *VAR19,
struct VAR20 *VAR21, char *VAR22)
{
int VAR23 = (FUN6(VAR21))->VAR24 - 1;

return sprintf(VAR22, "", VAR23);
}