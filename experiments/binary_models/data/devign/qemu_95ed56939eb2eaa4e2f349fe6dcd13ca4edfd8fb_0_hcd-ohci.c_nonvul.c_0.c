static int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4)
{
    struct ohci_ed VAR5;
    uint32_t VAR6;
    uint32_t VAR7;
    int VAR8;
    uint32_t VAR9 = 0;
    VAR8 = 0;
    if (VAR3 == 0)
        return 0;
    for (VAR7 = VAR3; VAR7; VAR7 = VAR6)
    {
        if (FUN2(VAR2, VAR7, &VAR5))
        {
            FUN3(VAR7);
            FUN4(VAR2);
            return 0;
        }
        VAR6 = VAR5.VAR10 & VAR11;
        if (++VAR9 > VAR12)
        {
            FUN4(VAR2);
            return 0;
        }
        if ((VAR5.VAR3 & VAR13) || (VAR5.VAR14 & VAR15))
        {
            uint32_t VAR16;
            VAR16 = VAR5.VAR3 & VAR11;
            if (VAR2->VAR17 && VAR16 == VAR2->VAR17)
            {
                FUN5(&VAR2->VAR18);
                VAR2->VAR17 = 0;
                FUN6(VAR2->VAR18.VAR19->VAR20, VAR2->VAR18.VAR19);
            }
            continue;
        }
        while ((VAR5.VAR3 & VAR11) != VAR5.VAR21)
        {
            FUN7(VAR7, (VAR5.VAR3 & VAR13) != 0, (VAR5.VAR3 & VAR22) != 0, VAR5.VAR3 & VAR11, VAR5.VAR21 & VAR11, VAR5.VAR10 & VAR11);
            FUN8(FUN9(VAR5.VAR14, VAR23), FUN9(VAR5.VAR14, VAR24), FUN9(VAR5.VAR14, VAR25), (VAR5.VAR14 & VAR26) != 0, (VAR5.VAR14 & VAR15) != 0, (VAR5.VAR14 & VAR27) != 0, FUN9(VAR5.VAR14, VAR28));
            VAR8 = 1;
            if ((VAR5.VAR14 & VAR27) == 0)
            {
                if (FUN10(VAR2, &VAR5))
                    break;
            }
            else
            {
                if (FUN11(VAR2, &VAR5, VAR4))
                    break;
            }
        }
        if (FUN12(VAR2, VAR7, &VAR5))
        {
            FUN4(VAR2);
            return 0;
        }
    }
    return VAR8;
}