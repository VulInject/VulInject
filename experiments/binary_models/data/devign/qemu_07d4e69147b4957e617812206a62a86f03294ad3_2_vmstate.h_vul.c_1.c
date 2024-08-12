int FUN1(VAR1 *VAR2, const VAR3 *VAR4, void *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR4->VAR9;
    int VAR10 = 0;
    FUN2(VAR4->VAR11, VAR6);
    if (VAR6 > VAR4->VAR6)
    {
        FUN3(""
                     "",
                     VAR4->VAR11, VAR6, VAR4->VAR6);
        FUN4(VAR4->VAR11, "", -VAR12);
        return -VAR12;
    }
    if (VAR6 < VAR4->VAR13)
    {
        if (VAR4->VAR14 && VAR6 >= VAR4->VAR15)
        {
            VAR10 = VAR4->FUN5(VAR2, VAR5, VAR6);
            FUN4(VAR4->VAR11, "", VAR10);
            return VAR10;
        }
        FUN3(""
                     "",
                     VAR4->VAR11, VAR6, VAR4->VAR13);
        FUN4(VAR4->VAR11, "", -VAR12);
        return -VAR12;
    }
    if (VAR4->VAR16)
    {
        int VAR10 = VAR4->FUN6(VAR5);
        if (VAR10)
        {
            return VAR10;
        }
    }
    while (VAR8->VAR11)
    {
        FUN7(VAR4->VAR11, VAR8->VAR11);
        if ((VAR8->VAR17 && VAR8->FUN8(VAR5, VAR6)) || (!VAR8->VAR17 && VAR8->VAR6 <= VAR6))
        {
            void *VAR18 = VAR5 + VAR8->VAR19;
            int VAR20, VAR21 = FUN9(VAR5, VAR8);
            int VAR22 = FUN10(VAR5, VAR8);
            FUN11(VAR18, VAR8, VAR5);
            if (VAR8->VAR23 & VAR24)
            {
                VAR18 = *(void **)VAR18;
                assert(VAR18 || !VAR21);
            }
            for (VAR20 = 0; VAR20 < VAR21; VAR20++)
            {
                void *VAR25 = VAR18 + VAR22 * VAR20;
                if (VAR8->VAR23 & VAR26)
                {
                    VAR25 = *(void **)VAR25;
                }
                if (VAR8->VAR23 & VAR27)
                {
                    VAR10 = FUN1(VAR2, VAR8->VAR4, VAR25, VAR8->VAR4->VAR6);
                }
                else
                {
                    VAR10 = VAR8->VAR28->FUN12(VAR2, VAR25, VAR22, VAR8);
                }
                if (VAR10 >= 0)
                {
                    VAR10 = FUN13(VAR2);
                }
                if (VAR10 < 0)
                {
                    FUN14(VAR2, VAR10);
                    FUN3("", VAR4->VAR11, VAR8->VAR11);
                    FUN15(VAR8->VAR11, VAR10);
                    return VAR10;
                }
            }
        }
        else if (VAR8->VAR23 & VAR29)
        {
            FUN3("", VAR4->VAR11, VAR8->VAR11);
            return -1;
        }
        VAR8++;
    }
    VAR10 = FUN16(VAR2, VAR4, VAR5);
    if (VAR10 != 0)
    {
        return VAR10;
    }
    if (VAR4->VAR30)
    {
        VAR10 = VAR4->FUN17(VAR5, VAR6);
    }
    FUN4(VAR4->VAR11, "", VAR10);
    return VAR10;
}