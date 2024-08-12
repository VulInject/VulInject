int FUN1(struct VAR1 *VAR2, u8 VAR3, u16 VAR4, u32 VAR5,
u32 VAR6)
{
int VAR7;
u8 VAR8 = 0, VAR9;
int VAR10;

for (VAR10 = 0; VAR10 < 4; VAR10++) {
if (VAR5 & 0xFF) {
VAR7 = FUN2(VAR2, VAR11 + VAR10,
0xFF,
(VAR12)(VAR6 & VAR5 & 0xFF));
if (VAR7) {
FUN3(VAR2);
return VAR7;
}
VAR8 |= (1 << VAR10);
}
VAR5 >>= 8;
VAR6 >>= 8;
}

if (VAR8) {
VAR7 = FUN2(VAR2, VAR13, 0xFF, (VAR12)VAR4);
if (VAR7) {
FUN3(VAR2);
return VAR7;
}
VAR7 = FUN2(VAR2, VAR14, 0xFF,
(VAR12)(VAR4 >> 8));
if (VAR7) {
FUN3(VAR2);
return VAR7;
}

VAR7 = FUN2(VAR2, VAR15, 0xFF,
0x80 | VAR8 |
((VAR3 & 0x03) << 4));
if (VAR7) {
FUN3(VAR2);
return VAR7;
}

for (VAR10 = 0; VAR10 < VAR16; VAR10++) {
VAR7 = FUN4(VAR2, VAR15, &VAR9);
if (VAR7) {
FUN3(VAR2);
return VAR7;
}
if ((VAR9 & 0x80) == 0)
break;
}
}

return VAR17;
}