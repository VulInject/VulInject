static int FUN1(struct VAR1 *VAR2,
int VAR3, int VAR4, u8 VAR5,
u32 VAR6, u32 VAR7)
{
u32 VAR8;
u32 VAR9;
u32 VAR10;
u32 VAR11;

if (VAR3 >= VAR12)
return -VAR13;
if (VAR5 + 1 < 8)
return -VAR13;
if (VAR5 > 63)
return -VAR13;
if (VAR3 == 0) {
if (VAR14 < (2ULL << VAR5))
return -VAR13;
}
if (VAR3 != 0) {
if (VAR15 < (2ULL << VAR5))
return -VAR13;
}

VAR11 = (VAR3 << VAR16);

VAR8 = VAR5 & VAR17;
VAR8 |= VAR6 & VAR18;
VAR9 = VAR7;
VAR10 = (1 << 23 | VAR4);

FUN2(VAR2, VAR8,
VAR19 + VAR11);
FUN2(VAR2, VAR9,
VAR20 + VAR11);
FUN2(VAR2, VAR10,
VAR21 + VAR11);
FUN2(VAR2, 0,
VAR22 + VAR11);

return 0;
}