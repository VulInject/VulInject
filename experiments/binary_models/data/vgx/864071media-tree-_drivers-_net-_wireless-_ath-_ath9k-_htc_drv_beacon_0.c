void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2->VAR7);
struct VAR8 *VAR9 = (struct VAR8 *)VAR4->VAR10;
struct VAR11 *VAR12 = &VAR2->VAR13;
u64 VAR14;

if (VAR9->VAR15 == 0)
return;


VAR14 = VAR12->VAR16 * VAR9->VAR15 / VAR17;
VAR9->VAR14 = FUN3(FUN4(VAR14));

FUN5(VAR6, VAR18, "",
(unsigned long long)VAR14, VAR9->VAR15);
}