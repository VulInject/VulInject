static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7;
    VAR8 *VAR9;
    VAR5 *VAR10 = NULL;
    VAR11 *VAR12 = FUN2(VAR2);
    VAR13 *VAR14 = FUN3(VAR2);
    VAR15 *VAR16 = FUN4(VAR4);
    VAR17 *VAR18 = FUN5(VAR16);
    VAR19 *VAR20 = VAR18->FUN6(VAR16);
    uint64_t VAR21 = FUN7(FUN8(VAR16), VAR22, &VAR10);
    if (VAR10)
    {
        VAR21 = FUN9(VAR12->VAR23, FUN10(&VAR12->VAR24), !VAR21 ? NULL : &VAR21, FUN10(VAR20), &VAR10);
        if (VAR10)
        {
            FUN11(FUN8(VAR4), VAR21, VAR22, &VAR10);
            if (VAR10)
            {
                FUN12(VAR21);
                VAR7 = FUN7(FUN8(VAR4), VAR25, &VAR10);
                if (VAR10)
                {
                    VAR7 = FUN13(VAR7 == VAR26 ? NULL : &VAR7, VAR14->VAR27, &VAR10);
                    if (VAR10)
                    {
                        FUN11(FUN8(VAR4), VAR7, VAR25, &VAR10);
                        if (VAR10)
                        {
                            FUN14(VAR7);
                            if (!VAR12->VAR28)
                            {
                                FUN15(&VAR10, "");
                                FUN16(&VAR12->VAR24, VAR21 - VAR12->VAR23, VAR20);
                                FUN17(VAR20, VAR4);
                                VAR9 = FUN18(VAR12->VAR28);
                                VAR9->FUN19(FUN20(VAR12->VAR28), VAR4, &VAR10);
                            VAR29:
                                FUN21(VAR6, VAR10)