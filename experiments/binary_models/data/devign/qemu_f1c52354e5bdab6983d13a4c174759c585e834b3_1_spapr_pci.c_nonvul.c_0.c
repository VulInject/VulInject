static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(FUN3(VAR2));
    VAR9 *VAR10 = FUN4(VAR4);
    VAR11 *VAR12 = FUN5(VAR8, VAR10);
    if (!VAR8->VAR13)
    {
        FUN6(VAR6, VAR14, FUN7(FUN8(VAR8)));
        return;
    }
    FUN9(VAR12);
    FUN9(VAR12->VAR15 == VAR4);
    if (!FUN10(VAR12))
    {
        VAR16 *VAR17 = FUN11(FUN12(FUN3(VAR10)));
        uint32_t VAR18 = FUN13(VAR10->VAR19);
        VAR11 *VAR20;
        VAR21 *VAR22;
        sPAPRDREntitySense VAR23;
        int VAR24;
        if (FUN14(VAR10->VAR19) == 0)
        {
            for (VAR24 = 1; VAR24 < 8; VAR24++)
            {
                VAR20 = FUN15(VAR8, FUN16(VAR17), FUN17(VAR18, VAR24));
                VAR22 = FUN18(VAR20);
                VAR23 = VAR22->FUN19(VAR20);
                if (VAR23 == VAR25 && !FUN10(VAR20))
                {
                    FUN6(VAR6, ""
                                     "",
                               VAR18, VAR24);
                    return;
                }
            }
        }
        FUN20(VAR12);
        if (FUN14(VAR10->VAR19) == 0)
        {
            for (VAR24 = 7; VAR24 >= 0; VAR24--)
            {
                VAR20 = FUN15(VAR8, FUN16(VAR17), FUN17(VAR18, VAR24));
                VAR22 = FUN18(VAR20);
                VAR23 = VAR22->FUN19(VAR20);
                if (VAR23 == VAR25)
                {
                    FUN21(VAR20);
                }
            }
        }
    }
}