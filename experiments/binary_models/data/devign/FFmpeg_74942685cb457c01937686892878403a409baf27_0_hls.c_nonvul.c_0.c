static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    VAR3 *VAR5 = NULL;
    int VAR6;
    FUN2(&VAR5, VAR4, 0);
    if ((VAR6 = FUN3(VAR2->VAR7, &VAR5)) < 0 || (VAR6 = FUN4(VAR2->VAR7, NULL)) < 0)
    {
        FUN5(VAR2->VAR7);
        VAR2->VAR7 = NULL;
    }
    FUN6(&VAR5);
    return VAR6;
}