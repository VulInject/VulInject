static void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
VAR4 *VAR5 = VAR2->VAR5;
hwaddr VAR6 = VAR2->VAR7;
ram_addr_t VAR8 = FUN2(VAR2->VAR8);
unsigned int VAR9;
uint64_t VAR10;
uint32_t VAR11;


if (!FUN3(VAR5)) {
if (FUN4(VAR5)) {

FUN5("" VAR12 "" VAR12,
VAR6, VAR6 + VAR8);
}
return;
}


VAR9 = VAR13 - (VAR6 & ~VAR14);
VAR9 &= ~VAR14;
if (VAR9 > VAR8) {
return;
}
VAR6 += VAR9;
VAR8 -= VAR9;
VAR8 &= VAR14;
if (!VAR8 || (VAR6 & ~VAR14)) {
return;
}

VAR10 = (VAR15)FUN6(VAR5)
+ VAR2->VAR16 + VAR9;
if (FUN7(VAR2->VAR5)) {
VAR3 |= VAR17;
}


VAR11 = VAR18 & VAR14;
while (VAR8 > VAR11) {
FUN8(VAR6, VAR11, VAR10, VAR3);
VAR6 += VAR11;
VAR8 -= VAR11;
VAR10 += VAR11;
}

FUN8(VAR6, (VAR19)VAR8, VAR10, VAR3);
}