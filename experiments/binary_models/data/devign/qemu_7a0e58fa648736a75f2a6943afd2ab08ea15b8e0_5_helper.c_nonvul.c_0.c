static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, void *VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    VAR11 *VAR12 = FUN2(VAR11, 1);
    VAR3 *VAR13 = FUN3(VAR4, sizeof(VAR3));
    int VAR14 = (VAR4->VAR15 & VAR16) ? 1 : 0;
    int VAR17 = (VAR7 & VAR18) ? 1 : 0;
    VAR13->VAR19 = VAR7;
    if (VAR4->VAR20[0] && VAR4->VAR20[1])
    {
        VAR13->VAR21 = VAR4->VAR20[VAR17];
    }
    if (VAR6 == VAR22)
    {
        if (VAR4->VAR20[0] && VAR4->VAR20[1])
        {
            if ((VAR4->VAR6 == VAR23 && VAR17) || (FUN4(&VAR2->VAR24, VAR25) && !VAR17))
            {
                VAR13->VAR15 |= VAR26;
                VAR13->VAR27 = VAR28;
            }
        }
        else if ((VAR7 != VAR4->VAR19) && !VAR17)
        {
            VAR13->VAR15 |= VAR26;
            VAR13->VAR27 = VAR28;
        }
        if (VAR4->VAR6 == VAR23)
        {
            if (VAR13->VAR29 == 0)
            {
                VAR13->VAR29 = 15;
            }
            if (VAR13->VAR21)
            {
                VAR13->VAR21 += sizeof(VAR11);
            }
        }
    }
    if (VAR6 == VAR30)
    {
        if (VAR4->VAR29 == 0 || VAR4->VAR6 == VAR23)
        {
            VAR13->VAR29 = VAR31;
        }
        *VAR12 = FUN5(VAR13->VAR29, VAR13->VAR32, VAR8, VAR13->VAR33, VAR9, VAR10);
    }
    else
    {
        *VAR12 = FUN6(VAR13->VAR29, VAR14, VAR17, VAR13->VAR32, VAR8, VAR9, VAR10);
    }
    if (VAR5)
    {
        VAR13->VAR5 = VAR5;
    }
    VAR13->VAR6 = VAR6;
    VAR13->VAR8 = VAR8;
    VAR13->VAR9 = VAR9;
    VAR13->VAR10 = VAR10;
    if ((VAR4->VAR15 & VAR34))
    {
        VAR13->VAR15 |= VAR35;
    }
    if (((VAR4->VAR8 == VAR36) && VAR8 != 0) || ((VAR4->VAR9 == VAR36) && VAR9 != 0) || ((VAR4->VAR10 == VAR36) && VAR10 != 0))
    {
        VAR13->VAR15 |= VAR26;
    }
    if (!(VAR4->VAR15 & VAR37))
    {
        VAR3 *VAR38;
        VAR38 = FUN7(VAR2->VAR39, VAR12);
        if (VAR38 && !(VAR38->VAR15 & VAR37))
        {
            fprintf(VAR40, ""
                            ""
                            "",
                    VAR13->VAR29, 32 + 32 * VAR14, VAR13->VAR32, VAR13->VAR8, VAR13->VAR9, VAR13->VAR10, VAR38->VAR41, VAR13->VAR41);
            FUN8();
        }
    }
    FUN9(VAR2->VAR39, VAR12, VAR13);
}