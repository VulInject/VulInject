int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *const VAR7 = &VAR2->VAR7;
    int VAR8, VAR9;
    MMCO VAR10[VAR11], *VAR12 = VAR5 ? VAR2->VAR12 : VAR10;
    int VAR13 = 0;
    if (VAR2->VAR14 == VAR15)
    {
        VAR7->VAR16 = FUN2(VAR4) - 1;
        if (FUN2(VAR4))
        {
            VAR12[0].VAR17 = VAR18;
            VAR12[0].VAR19 = 0;
            VAR13 = 1;
        }
    }
    else
    {
        if (FUN2(VAR4))
        {
            for (VAR8 = 0; VAR8 < VAR11; VAR8++)
            {
                MMCOOpcode VAR17 = FUN3(VAR4);
                VAR12[VAR8].VAR17 = VAR17;
                if (VAR17 == VAR20 || VAR17 == VAR21)
                {
                    VAR12[VAR8].VAR22 = (VAR2->VAR23 - FUN4(VAR4) - 1) & (VAR2->VAR24 - 1);
                    if (VAR12[VAR8].VAR22 >= VAR2->VAR25 || VAR2->VAR26[VAR12[VAR8].VAR22] == NULL)
                    {
                        FUN5(VAR7->VAR27, VAR28, ""
                                                       "",
                               VAR12);
                        return -1;
                    }
                }
                if (VAR17 == VAR21 || VAR17 == VAR29 || VAR17 == VAR18 || VAR17 == VAR30)
                {
                    unsigned int VAR19 = FUN3(VAR4);
                    if (VAR19 >= 32 || (VAR19 >= 16 && !(VAR17 == VAR30 && VAR19 == 16) && !(VAR17 == VAR29 && VAR31)))
                    {
                        FUN5(VAR2->VAR7.VAR27, VAR28, ""
                                                         "",
                               VAR17);
                        return -1;
                    }
                    VAR12[VAR8].VAR19 = VAR19;
                }
                if (VAR17 > (unsigned)VAR18)
                {
                    FUN5(VAR2->VAR7.VAR27, VAR28, "", VAR17);
                    return -1;
                }
                if (VAR17 == VAR32)
                    break;
            }
            VAR13 = VAR8;
        }
        else
        {
            if (VAR5)
            {
                VAR9 = FUN6(VAR2, VAR5);
                if (VAR9 < 0 && VAR7->VAR27->VAR33 & VAR34)
                    return VAR9;
            }
            VAR13 = -1;
        }
    }
    if (VAR5 && VAR13 != -1)
    {
        VAR2->VAR13 = VAR13;
    }
    else if (!VAR5 && VAR13 >= 0 && (VAR13 != VAR2->VAR13 || (VAR8 = FUN7(VAR2->VAR12, VAR10, VAR13))))
    {
        FUN5(VAR2->VAR7.VAR27, VAR28, "", VAR13, VAR2->VAR13, VAR8);
        return VAR35;
    }
    return 0;
}