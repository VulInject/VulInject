VAR1 FUN1(void *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = VAR4->VAR7.VAR8;
struct VAR9 *VAR10 = FUN3(VAR6->VAR11.VAR12);

if (VAR10->VAR13 < VAR14)
return VAR4->VAR15 >> VAR16;
return VAR4->VAR15;
}