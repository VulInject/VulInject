static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
int VAR4;

VAR4 = FUN2(VAR2);
if (VAR4)
return VAR4;

FUN3(VAR3, VAR2->VAR5);

VAR4 = FUN4(VAR2, VAR6);
if (VAR4)
FUN5("");

return VAR4;
}