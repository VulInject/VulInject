static long FUN1(struct VAR1 *VAR1, unsigned int VAR2, unsigned long VAR3)
{
void VAR4 *VAR5 = (void VAR4 *)VAR3;
int VAR4 *VAR6 = VAR5;
int VAR7;
int VAR8;

struct watchdog_info VAR9 = {
.VAR10 =		VAR11|
VAR12|
VAR13,
.VAR14 =	1,
.VAR15 =		"",
};


VAR9.VAR10 |= (VAR16|VAR17);
if (VAR18 == 501) {
VAR9.VAR10 |= (VAR19|VAR20|
VAR21);
if (VAR22)
VAR9.VAR10 |= VAR23;
}

switch (VAR2) {
case VAR24:
return FUN2(VAR5, &VAR9, sizeof(VAR9)) ? -VAR25 : 0;
case VAR26:
VAR8 = FUN3();
return FUN4(VAR8, VAR6);
case VAR27:
return FUN4(0, VAR6);
case VAR28:
FUN5();
return 0;
case VAR29:
if (FUN6(VAR7, VAR6))
return -VAR25;
if (FUN7(VAR7))
return -VAR30;
FUN5();
VAR31;
case VAR32:
return FUN4(VAR33, VAR6);
default:
return -VAR34;
}
}