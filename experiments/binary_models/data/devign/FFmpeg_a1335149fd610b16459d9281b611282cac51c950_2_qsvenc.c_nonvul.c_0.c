static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    AVPacket VAR7 = {0};
    VAR8 *VAR9;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = NULL;
    int VAR14;
    if (VAR6)
    {
        VAR14 = FUN2(VAR4, VAR6, &VAR11);
        if (VAR14 < 0)
        {
            FUN3(VAR2, VAR15, "");
            return VAR14;
        }
    }
    VAR14 = FUN4(&VAR7, VAR4->VAR16);
    if (VAR14 < 0)
    {
        FUN3(VAR2, VAR15, "");
        return VAR14;
    }
    VAR9 = FUN5(sizeof(*VAR9));
    if (!VAR9)
    {
        FUN6(&VAR7);
        return FUN7(VAR17);
    }
    VAR9->VAR18 = VAR7.VAR19;
    VAR9->VAR20 = VAR7.VAR21;
    VAR13 = FUN5(sizeof(*VAR13));
    if (!VAR13)
    {
        FUN8(&VAR9);
        FUN6(&VAR7);
        return FUN7(VAR17);
    }
    do
    {
        VAR14 = FUN9(VAR4->VAR22, NULL, VAR11, VAR9, VAR13);
        if (VAR14 == VAR23)
            FUN10(1);
    } while (VAR14 > 0);
    if (VAR14 < 0)
    {
        FUN6(&VAR7);
        FUN8(&VAR9);
        FUN8(&VAR13);
        return (VAR14 == VAR24) ? 0 : FUN11(VAR14);
    }
    if (VAR14 == VAR25 && VAR6->VAR26)
        FUN12(VAR2, VAR4);
    if (*VAR13)
    {
        FUN13(VAR4->VAR27, &VAR7, sizeof(VAR7), NULL);
        FUN13(VAR4->VAR27, &VAR13, sizeof(VAR13), NULL);
        FUN13(VAR4->VAR27, &VAR9, sizeof(VAR9), NULL);
    }
    else
    {
        FUN8(&VAR13);
        FUN6(&VAR7);
        FUN8(&VAR9);
    }
    return 0;
}