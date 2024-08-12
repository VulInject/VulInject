int FUN1(struct VAR1 *VAR2)
{
int VAR3;


VAR3 = FUN2(VAR2);
if (VAR3 < 0) {
FUN3(VAR2->VAR4, "", VAR3);
return VAR3;
}

FUN4(!VAR2->VAR5.VAR6);

return FUN5(int, VAR3, VAR2->VAR5.VAR6);
}