static void FUN1(unsigned int VAR1)
{
u16 VAR2;
u16 VAR3 = FUN2(&VAR4->VAR1[VAR1].VAR5.VAR6);

if (!(VAR3 & VAR7)) {
if (VAR8 > 0)
FUN3("",
VAR9, VAR1);
return;
}

VAR2 = FUN2(&VAR4->VAR1[VAR1].VAR5.VAR10);
if (VAR2) {
struct VAR11 *VAR12;
u32 VAR13;
VAR14 *VAR15;

VAR12 = FUN4(VAR16, VAR1);
if (VAR12 && VAR12->VAR17) {
struct VAR18 *VAR18 = VAR12->VAR17;
unsigned int VAR19 = VAR18->VAR20 -
VAR18->VAR21;

if (VAR19) {
int VAR22 = 0; 

if (VAR2 > VAR19)
VAR13 = VAR19;
else
VAR13 = VAR2;

VAR15 = (VAR14 *) VAR18->VAR23;
VAR15 += VAR18->VAR21;


FUN5(VAR1, VAR13, VAR15);

if (VAR13 == VAR2)
FUN6(VAR1);
else
VAR24 |= (1 << VAR1);


FUN7(VAR12, VAR13, VAR22);

} else {
if (VAR8 > 0)
FUN3(""
"",
VAR9, VAR1);

VAR24 |= (1 << VAR1);
}
} else {
if (VAR8 > 0)
FUN3(""
"",
VAR9, VAR1);

VAR24 |= (1 << VAR1);
}

} else {
if (VAR8 > 0)
FUN3("",
VAR9, VAR1);

FUN6(VAR1);
}
}