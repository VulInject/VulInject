static VAR1 FUN1(VAR2 *VAR3, u32 VAR4)
{
u32 VAR5 = VAR6 + VAR7 +
sizeof(struct VAR8) + VAR9;
u16 VAR10 = FUN2(VAR3);

if (VAR4 < VAR5 ||
FUN3(!VAR10) ||
FUN3(VAR10 + VAR11 > VAR4) ||
FUN3(VAR10 & 0x3) ||
FUN3(VAR10 < VAR5))
return 0;

return VAR11 + VAR10;
}