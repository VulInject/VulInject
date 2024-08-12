static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR2, VAR2);
    uint32_t VAR8 = FUN3(VAR4);
    FUN4("", VAR9, VAR7->VAR10.VAR11, VAR7->VAR10.VAR12, VAR7->VAR10.VAR13, VAR7->VAR10.VAR14, VAR3, VAR4, VAR5);
    if (FUN5(VAR7->VAR15, &VAR8, VAR5, VAR7->VAR16 + VAR3) != VAR5)
    {
        FUN6("", VAR9, VAR7->VAR10.VAR11, VAR7->VAR10.VAR12, VAR7->VAR10.VAR13, VAR7->VAR10.VAR14, VAR3, VAR4, VAR5);
    }
    if (VAR2->VAR17 & VAR18 && FUN7(VAR3, VAR5, VAR2->VAR19, VAR7->VAR20))
    {
        int VAR21, VAR22 = FUN8(VAR2);
        FUN9(VAR2, VAR3, VAR4, VAR5);
        VAR21 = FUN8(VAR2);
        if (!VAR22 && VAR21)
        {
            FUN10(VAR7);
        }
        else if (VAR22 && !VAR21)
        {
            FUN11(VAR7);
        }
    }
    else if (VAR2->VAR17 & VAR23 && FUN7(VAR3, VAR5, VAR2->VAR24, VAR25))
    {
        int VAR21, VAR22 = FUN12(VAR2);
        FUN9(VAR2, VAR3, VAR4, VAR5);
        VAR21 = FUN12(VAR2);
        if (!VAR22 && VAR21)
        {
            FUN13(VAR7);
        }
        else if (VAR22 && !VAR21)
        {
            FUN14(VAR7);
        }
    }
    else
    {
        FUN9(VAR2, VAR3, VAR4, VAR5);
    }
}