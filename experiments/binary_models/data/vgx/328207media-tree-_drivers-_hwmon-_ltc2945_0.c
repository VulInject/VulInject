static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR5);
struct VAR10 *VAR10 = FUN3(VAR3);
u8 VAR11 = VAR9->VAR12;
unsigned long VAR13;
u8 VAR14[3];
int VAR15;
int VAR16;
int VAR17;

VAR17 = FUN4(VAR6, 10, &VAR13);
if (VAR17)
return VAR17;


VAR16 = FUN5(VAR3, VAR11, VAR13);
if (FUN6(VAR11)) {
VAR16 = FUN7(VAR16, 0, 0xffffff);
VAR14[0] = VAR16 >> 16;
VAR14[1] = (VAR16 >> 8) & 0xff;
VAR14[2] = VAR16;
VAR15 = 3;
} else {
VAR16 = FUN7(VAR16, 0, 0xfff) << 4;
VAR14[0] = VAR16 >> 8;
VAR14[1] = VAR16 & 0xff;
VAR15 = 2;
}
VAR17 = FUN8(VAR10, VAR11, VAR14, VAR15);
return VAR17 < 0 ? VAR17 : VAR7;
}