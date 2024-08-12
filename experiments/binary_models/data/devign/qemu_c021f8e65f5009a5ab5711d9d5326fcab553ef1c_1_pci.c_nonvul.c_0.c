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
    if (class == 0x0604)
    {
        VAR13 *VAR14;
        VAR1 *VAR17;
        VAR17 = FUN2(""
                                        ""
                                        "" VAR18 "" VAR18 ""
                                        "" VAR18 "" VAR18 ""
                                        "" VAR18 "" VAR18 "",
                                        VAR3->VAR11[VAR19], VAR3->VAR11[VAR20], VAR3->VAR11[VAR21], FUN12(VAR3, VAR22), FUN13(VAR3, VAR22), FUN12(VAR3, VAR23), FUN13(VAR3, VAR23), FUN12(VAR3, VAR23 | VAR24), FUN13(VAR3, VAR23 | VAR24));
        if (VAR3->VAR11[VAR20] != 0)
        {
            VAR4 *VAR25 = FUN14(VAR5, VAR3->VAR11[VAR20]);
            if (VAR25)
            {
                VAR14 = FUN8(VAR17);
                FUN15(VAR14, "", FUN16(VAR25, VAR3->VAR11[VAR20]));
            }
        }
        VAR14 = FUN8(VAR7);
        FUN15(VAR14, "", VAR17);
    }
    return VAR7;
}