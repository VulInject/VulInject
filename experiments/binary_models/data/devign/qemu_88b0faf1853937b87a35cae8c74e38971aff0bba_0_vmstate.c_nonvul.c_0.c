int FUN1(VAR1 *VAR2, const VAR3 *VAR4, void *VAR5, VAR6 *VAR7)
{
    int VAR8 = 0;
    VAR9 *VAR10 = VAR4->VAR11;
    FUN2(VAR4->VAR12);
    if (VAR4->VAR13)
    {
        VAR8 = VAR4->FUN3(VAR5);
        FUN4(VAR4->VAR12, VAR8);
        if (VAR8)
        {
            FUN5("", VAR4->VAR12);
            return VAR8;
        }
    }
    if (VAR7)
    {
        FUN6(VAR7, "", VAR4->VAR12);
        FUN7(VAR7, "", VAR4->VAR14);
        FUN8(VAR7, "");
    }
    while (VAR10->VAR12)
    {
        if (!VAR10->VAR15 || VAR10->FUN9(VAR5, VAR4->VAR14))
        {
            void *VAR16 = VAR5 + VAR10->VAR17;
            int VAR18, VAR19 = FUN10(VAR5, VAR10);
            int VAR20 = FUN11(VAR5, VAR10);
            int64_t VAR21, VAR22;
            VAR6 *VAR23 = VAR7;
            FUN12(VAR4->VAR12, VAR10->VAR12, VAR19);
            if (VAR10->VAR24 & VAR25)
            {
                VAR16 = *(void **)VAR16;
                assert(VAR16 || !VAR19 || !VAR20);
            }
            for (VAR18 = 0; VAR18 < VAR19; VAR18++)
            {
                void *VAR26 = VAR16 + VAR20 * VAR18;
                VAR8 = 0;
                FUN13(VAR4, VAR23, VAR10, VAR18, VAR19);
                VAR21 = FUN14(VAR2);
                if (VAR10->VAR24 & VAR27)
                {
                    assert(VAR26);
                    VAR26 = *(void **)VAR26;
                }
                if (!VAR26 && VAR20)
                {
                    assert(VAR10->VAR24 & VAR27);
                    VAR8 = VAR28.FUN15(VAR2, VAR26, VAR20, NULL, NULL);
                }
                else if (VAR10->VAR24 & VAR29)
                {
                    VAR8 = FUN1(VAR2, VAR10->VAR4, VAR26, VAR23);
                }
                else
                {
                    VAR8 = VAR10->VAR30->FUN15(VAR2, VAR26, VAR20, VAR10, VAR23);
                }
                if (VAR8)
                {
                    FUN5("", VAR4->VAR12, VAR10->VAR12);
                    return VAR8;
                }
                VAR22 = FUN14(VAR2) - VAR21;
                FUN16(VAR4, VAR23, VAR10, VAR22, VAR18);
                if (VAR23 && FUN17(VAR10))
                {
                    VAR23 = NULL;
                }
            }
        }
        else
        {
            if (VAR10->VAR24 & VAR31)
            {
                FUN5("", VAR4->VAR12, VAR10->VAR12);
                assert(!(VAR10->VAR24 & VAR31));
            }
        }
        VAR10++;
    }
    if (VAR7)
    {
        FUN18(VAR7);
    }
    FUN19(VAR2, VAR4, VAR5, VAR7);
    return 0;
}