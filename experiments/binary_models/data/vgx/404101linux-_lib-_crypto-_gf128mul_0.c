static const u16 VAR1[256] = FUN1(VAR2);



static void FUN2(VAR3 *VAR4)
{
u64 VAR5 = FUN3(VAR4->VAR5);
u64 VAR6 = FUN3(VAR4->VAR6);
u64 VAR7 = VAR8[VAR6 & 0xff];

VAR4->VAR6 = FUN4((VAR6 >> 8) | (VAR5 << 56));
VAR4->VAR5 = FUN4((VAR5 >> 8) ^ (VAR7 << 48));
}