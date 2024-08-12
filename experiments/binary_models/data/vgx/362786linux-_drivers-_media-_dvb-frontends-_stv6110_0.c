static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
u32 VAR8, VAR9, VAR10, VAR11;
u8 VAR12[] = { 0, 0, 0, 0, 0, 0, 0, 0 };

FUN2(VAR2, VAR12, 0, 8);

VAR9 = (VAR6->VAR12[VAR13] & 0x0f) << 8;
VAR9 += VAR6->VAR12[VAR14];


VAR8  = (VAR6->VAR12[VAR13] >> 6) & 3;

VAR10  = (VAR6->VAR12[VAR13] >> 4) & 1;

VAR11 = VAR9 * (VAR6->VAR15 / 1000);
VAR11 /= (1 << (VAR8 + VAR10));
VAR11 /= 4;

*VAR4 = VAR11;

return 0;
}