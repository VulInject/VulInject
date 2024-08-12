static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
unsigned long VAR5,
VAR6 *VAR7)
{
struct VAR8 *VAR9 = VAR2->VAR10;
unsigned long VAR11;
u32 VAR12;

if (VAR5 >= VAR9->VAR13)
return -VAR14;

VAR11 = VAR9->VAR15[VAR5];
VAR12 = FUN2(VAR9, VAR11);

*VAR7 = VAR9->VAR16[VAR5] + VAR12;
return 0;
}