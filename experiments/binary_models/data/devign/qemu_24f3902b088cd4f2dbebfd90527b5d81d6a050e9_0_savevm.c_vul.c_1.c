static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5;
    MigrationParams VAR6 = {.VAR7 = 0, .VAR8 = 0};
    VAR9 *VAR10 = FUN2(&VAR6);
    VAR10->VAR11 = VAR2;
    if (FUN3(VAR4))
    {
        return -VAR12;
    }
    FUN4();
    FUN5(VAR2);
    FUN6(VAR2, &VAR6);
    FUN7();
    while (FUN8(VAR2) == 0)
    {
        if (FUN9(VAR2, false) > 0)
        {
            break;
        }
    }
    VAR5 = FUN8(VAR2);
    if (VAR5 == 0)
    {
        FUN10(VAR2, false);
        VAR5 = FUN8(VAR2);
    }
    FUN11();
    if (VAR5 != 0)
    {
        FUN12(VAR4, -VAR5, "");
    }
    return VAR5;
}