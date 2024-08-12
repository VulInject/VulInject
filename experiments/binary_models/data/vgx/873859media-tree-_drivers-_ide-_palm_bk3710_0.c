static void FUN1(void VAR1 *VAR2, unsigned int VAR3,
unsigned short VAR4,
unsigned int VAR5)
{
u8 VAR6, VAR7, VAR8;
u32 VAR9;
u16 VAR10;
struct VAR11 *VAR12;
int VAR13;

VAR12 = FUN2(VAR5);
VAR13 = FUN3(int, VAR12->VAR14, VAR4);


VAR8 = FUN4(VAR13, VAR15);
VAR6 = FUN4(VAR12->VAR16, VAR15);
VAR7 = VAR8 - VAR6 - 1;
VAR6 -= 1;

VAR9 = FUN5(VAR2 + VAR17) & (0xFF << (VAR3 ? 0 : 8));
VAR9 |= (VAR6 << (VAR3 ? 8 : 0));
FUN6(VAR9, VAR2 + VAR17);

VAR9 = FUN5(VAR2 + VAR18) & (0xFF << (VAR3 ? 0 : 8));
VAR9 |= (VAR7 << (VAR3 ? 8 : 0));
FUN6(VAR9, VAR2 + VAR18);


VAR10 = FUN7(VAR2 + VAR19) & ~(1 << VAR3);
FUN8(VAR10, VAR2 + VAR19);
}