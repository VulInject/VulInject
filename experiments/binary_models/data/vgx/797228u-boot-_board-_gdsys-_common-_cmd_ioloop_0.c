static void FUN1(struct VAR1 *VAR2)
{
u16 VAR3[VAR4 + 128];
struct VAR5 *VAR6;

if (FUN2(VAR2, 0, VAR3, 0))
return;

VAR6 = (struct VAR5 *)&VAR3;

FUN3(VAR2, 0, VAR3, VAR4 + VAR6->VAR7);
}