static void FUN1(VAR1 *VAR2, VAR3 *VAR4,
hwaddr VAR5,
int32_t VAR6, target_ulong VAR7)
{
hwaddr VAR8, VAR9, VAR10;
uint64_t VAR11;
target_ulong VAR12, VAR13;
int VAR14;

for (VAR14 = 0; VAR14 < 512; VAR14++) {
VAR8 = (VAR5 + VAR14 * 8) & VAR6;
VAR11 = FUN2(VAR4, VAR8, VAR15, NULL);
if (!(VAR11 & VAR16)) {

continue;
}

VAR12 = VAR7 | ((VAR14 & 0x1ff) << 21);
if (VAR11 & VAR17) {

VAR10 = (VAR11 & ~0x1fffff) & ~(0x1ULL << 63);
if (FUN3(VAR10)) {

continue;
}
VAR13 = VAR12;
FUN4(VAR2, VAR10,
VAR13, 1 << 21);
continue;
}

VAR9 = (VAR11 & VAR18) & VAR6;
FUN5(VAR2, VAR4, VAR9, VAR6, VAR12);
}
}