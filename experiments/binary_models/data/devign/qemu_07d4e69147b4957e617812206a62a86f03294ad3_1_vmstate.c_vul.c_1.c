void FUN1(VAR1 *VAR2, const VAR3 *VAR4, void *VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR4->VAR10;
    FUN2(VAR4->VAR11);
    if (VAR4->VAR12)
    {
        VAR4->FUN3(VAR5);
    }
    if (VAR7)
    {
        FUN4(VAR7, "", VAR4->VAR11);
        FUN5(VAR7, "", VAR4->VAR13);
        FUN6(VAR7, "");
    }
    while (VAR9->VAR11)
    {
        if (!VAR9->VAR14 || VAR9->FUN7(VAR5, VAR4->VAR13))
        {
            void *VAR15 = VAR5 + VAR9->VAR16;
            int VAR17, VAR18 = FUN8(VAR5, VAR9);
            int VAR19 = FUN9(VAR5, VAR9);
            int64_t VAR20, VAR21;
            VAR6 *VAR22 = VAR7;
            FUN10(VAR4->VAR11, VAR9->VAR11, VAR18);
            if (VAR9->VAR23 & VAR24)
            {
                VAR15 = *(void **)VAR15;
                assert(VAR15 || !VAR18);
            }
            for (VAR17 = 0; VAR17 < VAR18; VAR17++)
            {
                void *VAR25 = VAR15 + VAR19 * VAR17;
                FUN11(VAR4, VAR22, VAR9, VAR17, VAR18);
                VAR20 = FUN12(VAR2);
                if (VAR9->VAR23 & VAR26)
                {
                    assert(VAR25);
                    VAR25 = *(void **)VAR25;
                }
                if (VAR9->VAR23 & VAR27)
                {
                    FUN1(VAR2, VAR9->VAR4, VAR25, VAR22);
                }
                else
                {
                    VAR9->VAR28->FUN13(VAR2, VAR25, VAR19, VAR9, VAR22);
                }
                VAR21 = FUN12(VAR2) - VAR20;
                FUN14(VAR4, VAR22, VAR9, VAR21, VAR17);
                if (VAR22 && FUN15(VAR9))
                {
                    VAR22 = NULL;
                }
            }
        }
        else
        {
            if (VAR9->VAR23 & VAR29)
            {
                FUN16("", VAR4->VAR11, VAR9->VAR11);
                assert(!(VAR9->VAR23 & VAR29));
            }
        }
        VAR9++;
    }
    if (VAR7)
    {
        FUN17(VAR7);
    }
    FUN18(VAR2, VAR4, VAR5, VAR7);
}