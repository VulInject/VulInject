static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = VAR4++;
struct VAR5 *VAR6 = &VAR7[VAR3];
int VAR8;

VAR6->VAR9.VAR10 = VAR3;

if (VAR3 >= VAR11)
return -VAR12;

FUN2(VAR2, VAR6);


VAR6->VAR9.VAR13 = &VAR2->VAR13;

VAR8 = FUN3(VAR2->VAR13.VAR14, VAR6);
if (VAR8)
return VAR8;

return FUN4(&VAR15, &VAR6->VAR9);
}