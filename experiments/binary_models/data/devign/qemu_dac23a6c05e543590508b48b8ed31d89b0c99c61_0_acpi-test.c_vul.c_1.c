static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5, *VAR6;
    test_data VAR7;
    gboolean VAR8, VAR9;
    memset(&VAR7, 0, sizeof(VAR7));
    VAR7.VAR10 = FUN2(VAR2);
    FUN3(VAR2, false);
    for (VAR3 = 0; VAR3 < VAR2->VAR10->VAR11; ++VAR3)
    {
        VAR12 *VAR13, *VAR14;
        VAR5 = &FUN4(VAR2->VAR10, VAR4, VAR3);
        VAR6 = &FUN4(VAR7.VAR10, VAR4, VAR3);
        VAR9 = FUN5(VAR2->VAR10, VAR5);
        VAR13 = FUN6(VAR5->VAR13);
        VAR8 = FUN5(VAR7.VAR10, VAR6);
        VAR14 = FUN6(VAR6->VAR13);
        FUN7(!VAR9 || VAR8);
        if (FUN8(VAR13->VAR15, VAR14->VAR15))
        {
            uint32_t VAR16 = FUN9(VAR6->VAR17.VAR16);
            VAR5->VAR18 = true;
            VAR6->VAR18 = true;
            fprintf(VAR19, ""
                            "",
                    (VAR20 *)&VAR16, VAR5->VAR21, VAR5->VAR22, VAR6->VAR21, VAR6->VAR22);
        }
        FUN10(VAR13, true);
        FUN10(VAR14, true);
    }
    FUN11(&VAR7);
}