static int FUN1(struct VAR1 *VAR2, int VAR3)
{
if (!VAR2->VAR4->VAR5)
return VAR6;

const int VAR7 = FUN2(VAR2->VAR4);
struct VAR8 *VAR9 = ((struct VAR8 *) VAR2->VAR4->VAR5) + VAR7;
char VAR10[128] = { 0 };
snprintf(VAR10, sizeof(VAR10),

FUN3(""%VAR11\""), VAR9->VAR12->VAR13);
if (FUN4(VAR10, VAR14) != VAR15)
return VAR16;

if (FUN5(VAR9->VAR17) == 0)
FUN6(VAR2->VAR4);

return VAR18;
}