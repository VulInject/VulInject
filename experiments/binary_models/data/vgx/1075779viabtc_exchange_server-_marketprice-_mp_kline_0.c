void FUN1(struct VAR1 *VAR2, struct VAR1 *update)
{
FUN2(VAR2->close, update->close, &VAR3);
FUN3(VAR2->VAR4, VAR2->VAR4, update->VAR4, &VAR3);
FUN3(VAR2->VAR5, VAR2->VAR5, update->VAR5, &VAR3);
if (FUN4(update->VAR6, VAR2->VAR6, &VAR3) > 0)
FUN2(VAR2->VAR6, update->VAR6, &VAR3);
if (FUN4(update->VAR7, VAR2->VAR7, &VAR3) < 0)
FUN2(VAR2->VAR7, update->VAR7, &VAR3);
}