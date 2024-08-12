int FUN1(VAR1 *VAR2);
void FUN2(VAR1 *VAR2);
void FUN3(VAR1 *VAR2);

bool FUN4(VAR1 *VAR2,
VAR3 *VAR4)
{
if (VAR2 == NULL) {
return false;
}

return (FUN5(VAR2->VAR5,
VAR4)
!= NULL);
}