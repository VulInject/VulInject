void FUN1(struct VAR1 *VAR2)
{
    if (VAR2->VAR3 == -1)
    {
        return;
    }
    FUN2(FUN3(VAR2->VAR4), NULL, NULL, NULL);
    FUN4(VAR2->VAR4, VAR2->VAR3);
    FUN5(VAR2, 2, "", VAR2->VAR3);
    VAR2->VAR3 = -1;
}