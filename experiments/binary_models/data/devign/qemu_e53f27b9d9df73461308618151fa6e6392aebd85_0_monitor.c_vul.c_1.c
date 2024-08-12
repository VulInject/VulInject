static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7 = FUN2(VAR4, "");
    VAR8 *VAR9;
    int VAR10;
    VAR10 = FUN3(VAR2->VAR11);
    if (VAR10 == -1)
    {
        FUN4(VAR12);
        return -1;
    }
    if (FUN5(VAR7[0]))
    {
        FUN4(VAR13, "", "");
        return -1;
    }
    VAR10 = FUN6(VAR10);
    if (VAR10 == -1)
    {
        if (VAR14 == VAR15)
            FUN4(VAR16);
        else
            FUN4(VAR17);
        return -1;
    }
    FUN7(VAR9, &VAR2->VAR18, VAR19)
    {
        if (strcmp(VAR9->VAR20, VAR7) != 0)
        {
            continue;
        }
        close(VAR9->VAR10);
        VAR9->VAR10 = VAR10;
        return 0;
    }
    VAR9 = FUN8(sizeof(VAR8));
    VAR9->VAR20 = FUN9(VAR7);
    VAR9->VAR10 = VAR10;
    FUN10(&VAR2->VAR18, VAR9, VAR19);
    return 0;
}