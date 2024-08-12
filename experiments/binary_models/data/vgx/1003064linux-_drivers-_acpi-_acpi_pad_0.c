static void FUN1(void)
{
unsigned int VAR1, VAR2, VAR3, VAR4;
unsigned int VAR5 = 0;
unsigned int VAR6 = 0;
int VAR7;

if (!FUN2(VAR8))
return;
if (VAR9.VAR10 < VAR11)
return;

FUN3(VAR11, &VAR1, &VAR2, &VAR3, &VAR4);

if (!(VAR3 & VAR12) ||
!(VAR3 & VAR13))
return;

VAR4 >>= VAR14;
for (VAR7 = 0; VAR7 < 7 && VAR4; VAR7++, VAR4 >>= VAR14) {
if (VAR4 & VAR15) {
VAR5 = VAR7;
VAR6 = VAR4 & VAR15;
}
}
VAR16 = (VAR5 << VAR14) |
(VAR6 - 1);

switch (VAR9.VAR17) {
case VAR18:
case VAR19:
case VAR20:
case VAR21:

if (!FUN2(VAR22))
VAR23 = 1;
break;
default:

VAR23 = 1;
}
}

static unsigned long VAR24[VAR25];
static int VAR26[VAR25] = {[0 ... VAR25-1] = -1};
static FUN4(VAR27, VAR25);
static void FUN5(unsigned int VAR28)
{
struct VAR29 *VAR30 = FUN6(VAR27);
cpumask_var_t VAR31;
int VAR32;
unsigned long VAR33 = -1;
unsigned long VAR34;

if (!FUN7(&VAR31, VAR35))
return;

FUN8(&VAR36);
FUN9(VAR31);
FUN10(VAR32, VAR30)
FUN11(VAR31, VAR31, FUN12(VAR32));
FUN13(VAR31, VAR37, VAR31);

if (FUN14(VAR31))
FUN13(VAR31, VAR37, VAR30);
if (FUN14(VAR31)) {
FUN15(&VAR36);
FUN16(VAR31);
return;
}
FUN10(VAR32, VAR31) {
if (VAR24[VAR32] < VAR33) {
VAR33 = VAR24[VAR32];
VAR34 = VAR32;
}
}

if (VAR26[VAR28] != -1)
FUN17(VAR26[VAR28], VAR30);
VAR26[VAR28] = VAR34;
FUN18(VAR34, VAR30);
VAR24[VAR34]++;
FUN15(&VAR36);

FUN19(VAR38, FUN20(VAR34));

FUN16(VAR31);
}