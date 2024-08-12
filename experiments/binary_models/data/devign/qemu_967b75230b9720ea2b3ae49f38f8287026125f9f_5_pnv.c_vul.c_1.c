static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR3 *VAR7 = NULL;
    VAR8 *VAR9 = FUN3(VAR6);
    char *typename = FUN4(VAR9->VAR10);
    size_t VAR11 = FUN5(typename);
    int VAR12, VAR13;
    if (!FUN6(typename))
    {
        FUN7(VAR4, "", typename);
        FUN8(VAR6, &VAR7);
        VAR6->VAR14 = FUN9(VAR11 * VAR6->VAR15);
        for (VAR12 = 0, VAR13 = 0; (VAR13 < sizeof(VAR6->VAR16) * 8) && (VAR12 < VAR6->VAR15); VAR13++)
        {
            char VAR17[32];
            void *VAR18 = VAR6->VAR14 + VAR12 * VAR11;
            if (!(VAR6->VAR16 & (1ull << VAR13)))
            {
                continue;
                FUN10(VAR18, VAR11, typename);
                snprintf(VAR17, sizeof(VAR17), "", VAR13);
                FUN11(FUN12(VAR6), VAR17, FUN12(VAR18), &VAR19);
                FUN13(FUN12(VAR18), VAR20, "", &VAR19);
                FUN13(FUN12(VAR18), VAR13, VAR21, &VAR19);
                FUN13(FUN12(VAR18), VAR9->FUN14(VAR6, VAR13), "", &VAR19);
                FUN15(FUN12(VAR18), true, "", &VAR19);
                FUN16(FUN12(VAR18));
                VAR12++;
                FUN17(typename)