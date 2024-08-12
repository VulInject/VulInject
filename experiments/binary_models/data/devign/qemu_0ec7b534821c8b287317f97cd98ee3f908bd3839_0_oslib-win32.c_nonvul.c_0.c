static int FUN1(gboolean VAR1, VAR2 *VAR3, gint VAR4, VAR5 *VAR6, guint VAR7, gint VAR8)
{
    DWORD VAR9;
    VAR5 *VAR10;
    int VAR11;
    if (VAR1)
    {
        VAR9 = FUN2(VAR4, VAR3, VAR8, VAR12, VAR13);
        if (VAR9 == VAR14)
        {
            VAR15 *VAR16 = FUN3(FUN4());
            FUN5("", VAR16);
            FUN6(VAR16);
        }
    }
    else if (VAR4 == 0)
    {
        if (VAR8 == VAR17)
        {
            VAR9 = VAR14;
        }
        else
        {
            FUN7(VAR8, VAR18);
            VAR9 = VAR19;
        }
    }
    else
    {
        VAR9 = FUN8(VAR4, VAR3, VAR20, VAR8, VAR18);
        if (VAR9 == VAR14)
        {
            VAR15 *VAR16 = FUN3(FUN4());
            FUN5("", VAR16);
            FUN6(VAR16);
        }
    }
    if (VAR9 == VAR14)
    {
        return -1;
    }
    else if (VAR9 == VAR19 || VAR9 == VAR21)
    {
        return 0;
    }
    else if (VAR1 && VAR9 == VAR22 + VAR4)
    {
        for (VAR10 = VAR6; VAR10 < &VAR6[VAR7]; ++VAR10)
        {
            if (VAR10->VAR23 == VAR24 && VAR10->VAR25 & VAR26)
            {
                VAR10->VAR27 |= VAR26;
            }
        }
        if (VAR8 != 0 || VAR4 == 0)
        {
            return 1;
        }
        VAR11 = FUN1(VAR20, VAR3, VAR4, VAR6, VAR7, 0);
        return (VAR11 == -1) ? -1 : 1 + VAR11;
    }
    else if (VAR9 < VAR22 + VAR4)
    {
        for (VAR10 = VAR6; VAR10 < &VAR6[VAR7]; ++VAR10)
        {
            if ((VAR2)VAR10->VAR23 == VAR3[VAR9 - VAR22])
            {
                VAR10->VAR27 = VAR10->VAR25;
            }
        }
        if (VAR8 == 0 && VAR4 > 1)
        {
            int VAR28;
            for (VAR28 = VAR9 - VAR22 + 1; VAR28 < VAR4; VAR28++)
            {
                VAR3[VAR28 - 1] = VAR3[VAR28];
            }
            VAR4--;
            VAR11 = FUN1(VAR20, VAR3, VAR4, VAR6, VAR7, 0);
            return (VAR11 == -1) ? -1 : 1 + VAR11;
        }
        return 1;
    }
    return 0;
}