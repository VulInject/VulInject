void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR2, VAR2);
    uint32_t VAR8 = FUN3(VAR4);
    FUN4(VAR7->VAR9.VAR10, VAR3, VAR4, VAR5);
    if (FUN5(VAR7->VAR9.VAR11, &VAR8, VAR5, VAR7->VAR12 + VAR3) != VAR5)
    {
        FUN6("", VAR13, VAR7->VAR9.VAR10, VAR3, VAR4, VAR5);
    }
    if (VAR2->VAR14 & VAR15 && FUN7(VAR3, VAR5, VAR2->VAR16, VAR7->VAR17))
    {
        int VAR18, VAR19 = FUN8(VAR2);
        FUN9(VAR2, VAR3, VAR4, VAR5);
        VAR18 = FUN8(VAR2);
        if (!VAR19)
        {
            if (VAR18)
            {
                FUN10(VAR7);
            }
        }
        else
        {
            if (!VAR18)
            {
                FUN11(VAR7);
            }
            else
            {
                FUN12(VAR7);
            }
        }
    }
    else if (VAR2->VAR14 & VAR20 && FUN7(VAR3, VAR5, VAR2->VAR21, VAR22))
    {
        int VAR18, VAR19 = FUN13(VAR2);
        FUN9(VAR2, VAR3, VAR4, VAR5);
        VAR18 = FUN13(VAR2);
        if (!VAR19 && VAR18)
        {
            FUN14(VAR7);
        }
        else if (VAR19 && !VAR18)
        {
            FUN15(VAR7);
        }
    }
    else
    {
        FUN9(VAR2, VAR3, VAR4, VAR5);
    }
}