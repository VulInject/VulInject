static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
u32 VAR5;

if (FUN3(VAR4))
VAR5 = FUN4(VAR4);
else
VAR5 = sizeof(VAR6) + sizeof(VAR7);

VAR5 += ((VAR8 + 2) * sizeof(VAR9));
VAR5 += FUN5(VAR4);
return VAR5;
}