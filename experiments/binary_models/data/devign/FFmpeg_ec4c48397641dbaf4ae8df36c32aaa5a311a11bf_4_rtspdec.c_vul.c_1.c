static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    char VAR6[128], VAR7[128], VAR8[512], VAR9[128];
    char VAR10[500];
    int VAR11;
    int VAR12 = VAR13;
    char VAR14[500];
    const char *VAR15 = "";
    unsigned char VAR16[4096];
    unsigned char VAR17[10];
    int VAR18 = 0;
    int VAR19;
    enum RTSPMethod VAR20;
    if (!VAR4->VAR21)
    {
        VAR4->VAR21 = FUN2(NULL, NULL);
        if (!VAR4->VAR21)
            return FUN3(VAR22);
    }
    FUN4(VAR6, sizeof(VAR6), VAR9, sizeof(VAR9), VAR7, sizeof(VAR7), &VAR11, VAR8, sizeof(VAR8), VAR2->VAR23);
    FUN5(VAR4->VAR24, sizeof(VAR4->VAR24), VAR6, NULL, VAR7, VAR11, "", VAR8);
    if (!strcmp(VAR6, ""))
    {
        VAR15 = "";
        VAR12 = VAR25;
    }
    if (VAR11 < 0)
        VAR11 = VAR12;
    FUN5(VAR14, sizeof(VAR14), VAR15, NULL, VAR7, VAR11, "", VAR4->VAR26 * 1000);
    if (VAR19 = FUN6(&VAR4->VAR27, VAR14, VAR28, &VAR2->VAR29, NULL, VAR4->VAR21))
    {
        FUN7(VAR2, VAR30, "");
        return VAR19;
    }
    VAR4->VAR31 = VAR32;
    VAR4->VAR33 = VAR4->VAR27;
    for (;;)
    {
        VAR19 = FUN8(VAR2, VAR16, sizeof(VAR16), &VAR18);
        if (VAR19 < 0)
            return VAR19;
        VAR19 = FUN9(VAR2, VAR16, VAR18, VAR10, sizeof(VAR10), VAR17, sizeof(VAR17), &VAR20);
        if (VAR19)
        {
            FUN7(VAR2, VAR30, "");
            return VAR19;
        }
        if (VAR20 == VAR34)
        {
            VAR19 = FUN10(VAR2);
            VAR4->VAR31 = VAR35;
        }
        else if (VAR20 == VAR36)
        {
            VAR19 = FUN11(VAR2);
        }
        else if (VAR20 == VAR37)
        {
            VAR19 = FUN12(VAR2);
            if (!VAR19)
                return 0;
        }
        else if (VAR20 == VAR38)
            VAR19 = FUN13(VAR2, VAR7, VAR10);
        if (VAR19)
        {
            FUN14(VAR4->VAR27);
            return VAR39;
        }
    }
    return 0;
}