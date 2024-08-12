static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5.VAR6;
struct VAR7 *VAR8;
void VAR9 *VAR10;

if (!VAR4)
return -VAR11;

VAR8 = FUN2(VAR2, VAR12, 0);
VAR10 = FUN3(&VAR2->VAR5, VAR8);
if (FUN4(VAR10))
return FUN5(VAR10);

FUN6(VAR4, &VAR13,
&VAR14, VAR10);
return 0;
}