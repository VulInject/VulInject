static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    VAR3 *VAR6 = NULL;
    int VAR7;
    FUN2(&VAR6, VAR4, 0);
    FUN2(&VAR6, VAR5, 0);
    FUN3(VAR2->VAR8, &VAR6);
    if ((VAR7 = FUN4(VAR2->VAR8, NULL)) < 0)
    {
        FUN5(VAR2->VAR8);
        VAR2->VAR8 = NULL;
    }
    FUN6(&VAR6);
    return VAR7;
}