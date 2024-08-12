void FUN1(struct VAR1 * VAR2)
{
if (VAR2->VAR3 != NULL)
FUN2(VAR2);

if (VAR2->VAR4 != NULL) {
if (VAR2->VAR4->VAR5 != NULL)
VAR2->VAR4->FUN3(VAR2);
}

FUN4(VAR2->VAR6);

if (VAR2->VAR7 != NULL)
free(VAR2->VAR7);

free(VAR2);
}