static void
FUN1(struct VAR1 *VAR2)
{
if (VAR2->VAR3)
return;
if (!FUN2(&VAR2->VAR4) || !VAR2->VAR5)
return;

FUN3("", VAR2->VAR6);

FUN4(VAR7, &VAR7, VAR2);

free((void *)VAR2->VAR6);
free(VAR2);
}