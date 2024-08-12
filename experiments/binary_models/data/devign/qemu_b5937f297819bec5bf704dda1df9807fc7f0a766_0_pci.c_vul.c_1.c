static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    int class;
    VAR1 *VAR7;
    VAR7 = FUN2(""
                             ""
                             "",
                             VAR6, FUN3(VAR3->VAR8), FUN4(VAR3->VAR8), FUN5(VAR3), FUN6(VAR3), FUN7(VAR3), VAR3->VAR9.VAR10 ? VAR3->VAR9.VAR10 : "");
    if (VAR3->VAR11[VAR12] != 0)
    {
        VAR13 *VAR14 = FUN8(VAR7);
        FUN9(VAR14, "", FUN10(VAR3->VAR11[VAR15]));
    }
    class = FUN11(VAR3->VAR11 + VAR16);
    if (class == VAR17 || class == VAR18)
    {
        VAR13 *VAR14;
        VAR1 *VAR19;
        VAR19 = FUN2(""
                                        ""
                                        "" VAR20 "" VAR20 ""
                                        "" VAR20 "" VAR20 ""
                                        "" VAR20 "" VAR20 "",
                                        VAR3->VAR11[VAR21], VAR3->VAR11[VAR22], VAR3->VAR11[VAR23], FUN12(VAR3, VAR24), FUN13(VAR3, VAR24), FUN12(VAR3, VAR25), FUN13(VAR3, VAR25), FUN12(VAR3, VAR25 | VAR26), FUN13(VAR3, VAR25 | VAR26));
        if (VAR3->VAR11[VAR22] != 0)
        {
            VAR4 *VAR27 = FUN14(VAR5, VAR3->VAR11[VAR22]);
            if (VAR27)
            {
                VAR14 = FUN8(VAR19);
                FUN15(VAR14, "", FUN16(VAR27, VAR3->VAR11[VAR22]));
            }
        }
        VAR14 = FUN8(VAR7);
        FUN15(VAR14, "", VAR19);
    }
    return VAR7;
}