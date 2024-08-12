static VAR1 FUN1(struct VAR2 *VAR2, const char VAR3 *VAR4,
size_t VAR5, VAR6 *VAR7)
{
struct VAR8 *VAR9;
struct VAR10 *VAR11;
unsigned int *VAR12; 
ssize_t VAR13 = -VAR14;
size_t VAR15;
ktime_t VAR16;
s64 VAR17;
unsigned int VAR18 = 0; 
int VAR19;

VAR16 = FUN2();

VAR9 = FUN3(VAR2);
if (!VAR9)
return -VAR20;

if (VAR5 < sizeof(unsigned) || VAR5 % sizeof(unsigned))
return -VAR14;

VAR15 = VAR5 / sizeof(unsigned);
if (VAR15 > VAR21 || VAR15 % 2 == 0)
return -VAR14;

VAR12 = FUN4(VAR4, VAR5);
if (FUN5(VAR12))
return FUN6(VAR12);

VAR11 = VAR9->VAR11;
if (!VAR11) {
VAR13 = -VAR20;
goto VAR22;
}

if (!VAR11->VAR23) {
VAR13 = -VAR14;
goto VAR22;
}

for (VAR19 = 0; VAR19 < VAR15; VAR19++) {
if (VAR12[VAR19] > VAR24 / 1000 - VAR18 || !VAR12[VAR19]) {
VAR13 = -VAR14;
goto VAR22;
}

VAR18 += VAR12[VAR19];
}

VAR13 = VAR11->FUN7(VAR11, VAR12, VAR15);
if (VAR13 < 0)
goto VAR22;

for (VAR18 = VAR19 = 0; VAR19 < VAR13; VAR19++)
VAR18 += VAR12[VAR19];

VAR13 *= sizeof(unsigned int);


VAR17 = FUN8(FUN9(VAR16, VAR18), FUN2());
if (VAR17 > 0) {
FUN10(VAR25);
FUN11(FUN12(VAR17));
}

VAR22:
FUN13(VAR12);
return VAR13;
}