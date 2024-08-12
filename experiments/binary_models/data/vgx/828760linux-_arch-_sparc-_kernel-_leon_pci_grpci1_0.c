static void FUN1(struct VAR1 *VAR2)
{
u32 VAR3;
struct VAR4 *VAR5 = VAR6;

VAR3 = (VAR7)VAR2->VAR8 - 1;
if (VAR3 > 3) 
return;
VAR3 += VAR9;

FUN2(VAR5->VAR10->VAR11, FUN3(VAR5->VAR10->VAR11) & ~(1 << VAR3));
}