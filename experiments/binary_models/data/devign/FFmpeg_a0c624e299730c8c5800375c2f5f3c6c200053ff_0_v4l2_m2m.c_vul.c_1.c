int FUN1(VAR1 *VAR2)
{
    void *VAR3 = VAR2->VAR4;
    int VAR5;
    FUN2(VAR3, VAR6, "", VAR2->VAR7);
    if (FUN3(&VAR2->VAR8))
        while (sem_wait(&VAR2->VAR9) == -1 && VAR10 == VAR11)
            ;
    FUN4(VAR2->VAR4);
    VAR2->VAR12 = 0;
    VAR2->VAR13 = 0;
    VAR2->VAR14 = open(VAR2->VAR7, VAR15 | VAR16, 0);
    if (VAR2->VAR14 < 0)
        return FUN5(VAR10);
    VAR5 = FUN6(VAR2);
    if (VAR5 < 0)
        goto VAR17;
    VAR5 = FUN7(&VAR2->VAR18);
    if (VAR5)
    {
        FUN2(VAR3, VAR6, "");
        goto VAR17;
    }
    VAR5 = FUN7(&VAR2->VAR19);
    if (VAR5)
    {
        FUN2(VAR3, VAR6, "");
        goto VAR17;
    }
    VAR5 = FUN8(&VAR2->VAR18);
    if (VAR5)
    {
        FUN2(VAR3, VAR20, "");
        goto VAR17;
    }
    VAR5 = FUN8(&VAR2->VAR19);
    if (VAR5)
    {
        FUN2(VAR3, VAR20, "");
        goto VAR17;
    }
    VAR5 = FUN9(&VAR2->VAR18);
    if (VAR5)
    {
        FUN2(VAR3, VAR20, "");
        goto VAR17;
    }
    if (!FUN10(VAR2->VAR4->VAR21))
    {
        VAR5 = FUN9(&VAR2->VAR19);
        if (VAR5)
        {
            FUN2(VAR3, VAR20, "");
            goto VAR17;
        }
    }
    return 0;
VAR17:
    if (close(VAR2->VAR14) < 0)
    {
        VAR5 = FUN5(VAR10);
        FUN2(VAR3, VAR20, "", VAR2->VAR7, FUN11(FUN5(VAR10)));
    }
    VAR2->VAR14 = -1;
    return VAR5;
}