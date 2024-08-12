static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

if (FUN2(VAR2->VAR4, VAR5))
return -VAR6;

if (VAR2->VAR7 == VAR8) {
VAR3 = FUN3(VAR2);
if (VAR3) {
FUN4(VAR2->VAR4);
return VAR3;
}
}

return 0;
}