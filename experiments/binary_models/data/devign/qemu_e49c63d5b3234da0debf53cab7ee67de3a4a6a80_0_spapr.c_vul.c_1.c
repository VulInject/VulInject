static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(FUN3(VAR2));
    VAR9 *VAR10 = FUN4(VAR8);
    VAR11 *VAR12 = FUN5(VAR10);
    VAR13 *VAR14 = FUN6(FUN3(VAR4));
    VAR15 *VAR16 = FUN7(VAR4);
    VAR17 *VAR18 = FUN8(VAR14->VAR19);
    VAR20 *VAR21;
    VAR5 *VAR22 = NULL;
    void *VAR23 = NULL;
    int VAR24 = 0;
    int VAR25 = FUN9();
    VAR26 *VAR27;
    int VAR28;
    bool VAR29 = FUN10(VAR4);
    VAR27 = FUN11(FUN12(VAR2), VAR16->VAR30, &VAR28);
    if (!VAR27)
    {
        FUN13(VAR6, "", VAR16->VAR30);
        return;
    }
    VAR21 = FUN14(VAR31, VAR28 * VAR25);
    FUN15(VAR21 || !VAR10->VAR32);
    VAR23 = FUN16(VAR18, &VAR24, VAR8);
    if (VAR21)
    {
        FUN17(VAR21, VAR4, VAR23, VAR24, &VAR22);
        if (VAR22)
        {
            FUN18(VAR23);
            FUN19(VAR6, VAR22);
            return;
        }
        if (VAR29)
        {
            FUN20(VAR21);
        }
        else
        {
            FUN21(VAR21);
        }
    }
    VAR27->VAR33 = FUN3(VAR4);
    if (VAR12->VAR34)
    {
        VAR35 *VAR36 = FUN22(FUN3(VAR16));
        const char *typename = FUN23(VAR36->VAR37);
        size_t VAR38 = FUN24(typename);
        int VAR39;
        for (VAR39 = 0; VAR39 < VAR16->VAR40; VAR39++)
        {
            VAR13 *VAR41 = FUN6(VAR4);
            void *VAR42 = VAR41->VAR19 + VAR39 * VAR38;
            VAR18 = FUN8(VAR42);
            FUN25(VAR18->VAR43);
        }
    }
}