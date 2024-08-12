static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    uint64_t VAR11;
    hwaddr VAR12;
    VAR13 *VAR14 = FUN2();
    VAR13 *VAR15 = FUN3(VAR13, 1);
    VAR13 *VAR16 = FUN3(VAR13, 1);
    if (!VAR4)
    {
        VAR4 = "";
    }
    VAR7 = FUN4(FUN5(VAR17, VAR4));
    VAR9 = &VAR7->VAR9;
    VAR9->VAR18 = 0;
    VAR9->VAR19 = VAR20 | 1;
    VAR9->VAR21 = VAR22 | 1;
    FUN6(VAR15, NULL, "", VAR3);
    FUN7(VAR14, 0, VAR15);
    FUN8(VAR16, NULL, "", 512, &VAR23);
    FUN7(VAR14, VAR22, VAR16);
    FUN9(VAR14, VAR20, VAR7);
    if (!VAR5)
    {
        if (FUN10())
        {
            return;
        }
        FUN11("");
        FUN12(1);
    }
    VAR10 = FUN13(VAR5, NULL, NULL, &VAR11, NULL, NULL, 1, VAR24, 0, 0);
    VAR12 = VAR11;
    if (VAR10 < 0)
    {
        VAR10 = FUN14(VAR5, &VAR12, NULL, NULL, NULL, NULL);
    }
    if (VAR10 < 0)
    {
        VAR10 = FUN15(VAR5, VAR25, VAR3 - VAR25);
        VAR12 = VAR25;
    }
    if (VAR10 < 0)
    {
        FUN11("", VAR5);
        FUN12(1);
    }
    VAR9->VAR26 = VAR12;
}