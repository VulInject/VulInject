static int FUN1(struct VAR1 *VAR2,
s16 VAR3)
{
u8 VAR4 = FUN2(VAR2, 0x1d) & 0xf0,
VAR5    = FUN2(VAR2, 0x1f) & 0x3f,
VAR6  = FUN2(VAR2, 0x20) & 0xf3;
u8 VAR7 = VAR3 >= VAR2->VAR8;

FUN3("",
VAR3, VAR2->VAR8,
VAR2->VAR7, VAR7);

if (VAR7 == VAR2->VAR7)
return 0; 

VAR4 |= 0xf;

if (VAR7) {
VAR6 |= VAR9 << 2;
VAR5   |= (VAR10 << 3) | VAR10;
} else {
VAR6 |= VAR11 << 2;
VAR5  |= (VAR12 << 3) | VAR13;
}
VAR2->VAR7 = VAR7;

FUN4(VAR2, 0x1d, VAR4);
FUN4(VAR2, 0x1f, VAR5);
FUN4(VAR2, 0x20, VAR6);

return 1; 
}