void FUN1(void)
{
unsigned long VAR1, VAR2, VAR3;
unsigned long VAR4;
static int VAR5;
unsigned long VAR6;


VAR1 = VAR7[VAR8].VAR9;
VAR3 = VAR7[VAR10].VAR9;
VAR2 = VAR7[VAR11].VAR9;
FUN2()->VAR12 = VAR13 | VAR2;
VAR6 = VAR7[VAR14].VAR9;
if (!VAR5) {
VAR5 = 1;
FUN3("", VAR1);
FUN3("", VAR3);
FUN3("", VAR6);
}

FUN2()->VAR15 = VAR16 - 1;
FUN2()->VAR17 = (1U << VAR16) - 1;
FUN2()->VAR18 = FUN2()->VAR17;

VAR4 = VAR13 | VAR1;


asm volatile("":::"");
asm volatile(""::"" (0) : "");
asm volatile("":::"");
FUN4(VAR19, VAR20, VAR4, VAR21);


FUN5(VAR22);
if (FUN6() != VAR23 &&
(FUN2()->VAR24 & FUN7(VAR20)) > VAR19)
FUN4(FUN2()->VAR24,
VAR20, VAR4, VAR22);

asm volatile("":::"");
}