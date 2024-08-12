static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, char *VAR6, VAR7 **VAR8)
{
    AVRational VAR9 = {1, 1000};
    uint32_t VAR10, VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15 = NULL;
    int VAR16;
    char VAR17[5];
    if (FUN2(VAR2, VAR4, 0, &VAR15, &VAR5) < 0)
        return;
    if (VAR5 < 16)
        return;
    VAR10 = FUN3(VAR4);
    VAR11 = FUN3(VAR4);
    FUN4(VAR4, 8);
    VAR13 = FUN5(VAR2, VAR2->VAR18 + 1, VAR9, VAR10, VAR11, VAR15);
    if (!VAR13)
    {
        FUN6(VAR15);
        return;
    }
    VAR5 -= 16;
    while (VAR5 > 10)
    {
        FUN7(VAR4, VAR17, 4);
        VAR17[4] = 0;
        VAR16 = FUN3(VAR4);
        FUN4(VAR4, 2);
        VAR5 -= 10;
        if (VAR16 < 0 || VAR16 > VAR5)
        {
            FUN6(VAR15);
            return;
        }
        if (VAR17[0] == '')
            FUN8(VAR2, VAR4, VAR16, &VAR13->VAR19, VAR17);
        else
            FUN4(VAR4, VAR16);
        VAR5 -= VAR16;
    }
    FUN9(&VAR13->VAR19, NULL, VAR20);
    FUN9(&VAR13->VAR19, NULL, VAR21);
    FUN6(VAR15);
}