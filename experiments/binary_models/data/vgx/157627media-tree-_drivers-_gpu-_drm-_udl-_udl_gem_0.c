void FUN1(struct VAR1 *VAR2)
{
if (VAR2->VAR3.VAR4) {
FUN2(VAR2->VAR5);
VAR2->VAR5 = NULL;
return;
}

FUN3(&VAR2->VAR3, VAR2->VAR5, false, false);
VAR2->VAR5 = NULL;
}