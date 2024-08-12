static int FUN1(void *VAR1, int VAR2, int VAR3, unsigned long *VAR4,
unsigned long *VAR5)
{
u32 VAR6[VAR7];
u32 VAR8[VAR7];
void *VAR9;
u64 VAR10, VAR11;
u32 VAR12, VAR13, VAR14, VAR15;
int VAR16, VAR17;

VAR9 = FUN2(VAR1);
if (!VAR9)
return 0;

FUN3(VAR9, &VAR12, &VAR13);
if (VAR13 > 2)
return 0;

VAR17 = (VAR12 + VAR13) * VAR2;

if (VAR3 < VAR17 + VAR12 + VAR13 ||
VAR18 < (VAR17 + VAR12 + VAR13) * 4)
return 0;

FUN4(VAR6, VAR19 + VAR17, VAR12);

VAR11 = FUN5(VAR19[VAR17 + VAR12]);
if (VAR13 == 2) {
VAR11 <<= 32;
VAR11 |= FUN5(VAR19[VAR17 + VAR12 + 1]);
}

for (;;) {
VAR14 = VAR12;
VAR15 = VAR13;
VAR1 = VAR9;

VAR9 = FUN2(VAR1);
if (!VAR9)
break;

FUN3(VAR9, &VAR12, &VAR13);

VAR16 = FUN6(VAR1, "", VAR19,
sizeof(VAR19));
if (VAR16 == 0)
continue;
if (VAR16 < 0 || VAR16 > sizeof(VAR19))
return 0;

VAR17 = FUN7(VAR6, VAR19, VAR14,
VAR12, VAR15, VAR16 / 4);
if (VAR17 < 0)
return 0;

FUN4(VAR8, VAR19 + VAR17, VAR14);

if (!FUN8(VAR6, VAR8))
return 0;

FUN4(VAR8, VAR19 + VAR17 + VAR14, VAR12);

if (!FUN9(VAR6, VAR8, VAR12))
return 0;
}

if (VAR12 > 2)
return 0;

VAR10 = ((VAR20)FUN5(VAR6[2]) << 32) | FUN5(VAR6[3]);
if (sizeof(void *) == 4 &&
(VAR10 >= 0x100000000ULL || VAR11 > 0x100000000ULL ||
VAR10 + VAR11 > 0x100000000ULL))
return 0;

*VAR4 = VAR10;
if (VAR5)
*VAR5 = VAR11;

return 1;
}