static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5 = FUN3(VAR2);
struct VAR6 *VAR7 = VAR4->VAR8[VAR5];
unsigned int VAR9;
int VAR10;

if (!VAR7 || FUN4(VAR7) == 0)
return FUN5(VAR2);

VAR10 = FUN6(VAR2->VAR11,
VAR2->VAR12->VAR13 + VAR14,
&VAR9);
if (VAR10 != 0)
return VAR10;

VAR9 &= VAR2->VAR12->VAR15;
VAR9 >>= FUN7(VAR2->VAR12->VAR15) - 1;

return VAR9;
}