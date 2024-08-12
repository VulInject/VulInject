int FUN1(VAR1 *VAR2)
{
    int VAR3;
    FUN2(VAR2->VAR4, VAR5, "");
    VAR3 = FUN3(&VAR2->VAR6, VAR7);
    if (VAR3)
        FUN2(VAR2->VAR4, VAR8, "");
    FUN2(VAR2->VAR4, VAR5, "");
    if (FUN4(&VAR2->VAR9))
        while (sem_wait(&VAR2->VAR10) == -1 && VAR11 == VAR12)
            ;
    FUN5(&VAR2->VAR6);
    VAR3 = FUN6(&VAR2->VAR6);
    if (VAR3)
    {
        FUN2(VAR2->VAR4, VAR8, "");
        return VAR3;
    }
    VAR3 = FUN7(&VAR2->VAR6);
    if (VAR3)
    {
        FUN2(VAR2->VAR4, VAR8, "");
        return VAR3;
    }
    FUN8(&VAR2->VAR10);
    FUN9(&VAR2->VAR10, 0, 0);
    VAR2->VAR13 = 0;
    VAR2->VAR14 = 0;
    return 0;
}