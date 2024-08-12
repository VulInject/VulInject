int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7;
    MMCO VAR8[VAR9], *VAR10 = VAR8;
    int VAR11 = 0;
    if (VAR2->VAR12 == VAR13)
    {
        FUN2(VAR4);
        if (FUN3(VAR4))
        {
            VAR10[0].VAR14 = VAR15;
            VAR10[0].VAR16 = 0;
            VAR11 = 1;
        }
    }
    else
    {
        if (FUN3(VAR4))
        {
            for (VAR6 = 0; VAR6 < VAR9; VAR6++)
            {
                MMCOOpcode VAR14 = FUN4(VAR4);
                VAR10[VAR6].VAR14 = VAR14;
                if (VAR14 == VAR17 || VAR14 == VAR18)
                {
                    VAR10[VAR6].VAR19 = (VAR2->VAR20 - FUN5(VAR4) - 1) & (VAR2->VAR21 - 1);
                    if (VAR10[VAR6].VAR19 >= VAR2->VAR22 || !VAR2->VAR23[VAR10[VAR6].VAR19])
                    {
                        FUN6(VAR24->VAR25, VAR26, ""
                                                       "",
                               VAR10);
                        return -1;
                    }
                }
                if (VAR14 == VAR18 || VAR14 == VAR27 || VAR14 == VAR15 || VAR14 == VAR28)
                {
                    unsigned int VAR16 = FUN4(VAR4);
                    if (VAR16 >= 32 || (VAR16 >= 16 && !(VAR14 == VAR28 && VAR16 == 16) && !(VAR14 == VAR27 && FUN7(VAR2))))
                    {
                        FUN6(VAR2->VAR25, VAR26, ""
                                                       "",
                               VAR14);
                        return -1;
                    }
                    VAR10[VAR6].VAR16 = VAR16;
                }
                if (VAR14 > (unsigned)VAR15)
                {
                    FUN6(VAR2->VAR25, VAR26, "", VAR14);
                    return -1;
                }
                if (VAR14 == VAR29)
                    break;
            }
            VAR11 = VAR6;
        }
        else
        {
            if (VAR5)
            {
                VAR7 = FUN8(VAR2, VAR5);
                if (VAR7 < 0 && VAR2->VAR25->VAR30 & VAR31)
                    return VAR7;
            }
            VAR11 = -1;
        }
    }
    if (VAR5 && VAR11 != -1)
    {
        memcpy(VAR2->VAR10, VAR8, sizeof(VAR2->VAR10));
        VAR2->VAR11 = VAR11;
    }
    else if (!VAR5 && VAR11 >= 0 && (VAR11 != VAR2->VAR11 || FUN9(VAR2->VAR10, VAR8, VAR11)))
    {
        FUN6(VAR2->VAR25, VAR26, "", VAR11, VAR2->VAR11);
        return VAR32;
    }
    return 0;
}