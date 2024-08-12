static VAR1
FUN1(struct VAR2 *VAR3, u8 VAR4, VAR1 *VAR5, VAR6 *VAR7, VAR6 *VAR8)
{
struct VAR9 *VAR10;
u8  VAR11, VAR12;
u32 VAR13;

VAR13 = FUN2(VAR3, VAR7, &VAR11, &VAR12, VAR8);
if (VAR13 && *VAR7 >= 0x30) {
VAR13 += VAR11;
while (VAR12--) {
if (FUN3(VAR3, VAR13 + 0) == VAR4) {
*VAR5 = FUN4(VAR3, VAR13 + 3);
return VAR13;
}
VAR13 += *VAR8;
}
return 0x0000;
}

VAR10 = FUN5(VAR3);
while (VAR10 && VAR10->VAR5) {
if (VAR10->VAR4 == VAR4 && *VAR7 >= 0x20) {
u32 VAR14 = (VAR13 += VAR11);
*VAR5 = VAR10->VAR5;
while (VAR12--) {
if (FUN4(VAR3, VAR13) == VAR10->VAR5)
return VAR13;
VAR13 += *VAR8;
}
return VAR14;
} else
if (VAR10->VAR4 == VAR4) {
*VAR5 = VAR10->VAR5;
return VAR13 + 1;
}
VAR10++;
}

return 0x0000;
}