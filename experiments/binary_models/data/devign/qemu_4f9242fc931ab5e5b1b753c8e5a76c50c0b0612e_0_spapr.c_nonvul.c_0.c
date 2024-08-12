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
    VAR27 = FUN10(FUN11(VAR2), VAR16->VAR29, &VAR28);
    if (!VAR27)
    {
        FUN12(VAR6, "", VAR16->VAR29);
        return;
    }
    VAR21 = FUN13(VAR30, VAR28 * VAR25);
    FUN14(VAR21 || !VAR10->VAR31);
    if (VAR4->VAR32)
    {
        VAR23 = FUN15(VAR18, &VAR24, VAR8);
    }
    if (VAR21)
    {
        FUN16(VAR21, VAR4, VAR23, VAR24, !VAR4->VAR32, &VAR22);
        if (VAR22)
        {
            FUN17(VAR23);
            FUN18(VAR6, VAR22);
            return;
        }
    }
    if (VAR4->VAR32)
    {
        FUN19(VAR21);
    }
    VAR27->VAR33 = FUN3(VAR4);
    if (VAR12->VAR34)
    {
        VAR35 *VAR36 = FUN20(FUN3(VAR16));
        const char *typename = FUN21(VAR36->VAR37);
        size_t VAR38 = FUN22(typename);
        int VAR39;
        for (VAR39 = 0; VAR39 < VAR16->VAR40; VAR39++)
        {
            VAR13 *VAR41 = FUN6(VAR4);
            void *VAR42 = VAR41->VAR19 + VAR39 * VAR38;
            VAR18 = FUN8(VAR42);
            FUN23(VAR18->VAR43);
        }
    }
}