int FUN1(const VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    VAR8 *VAR9 = VAR4->VAR9;
    int VAR10 = 0;
    if (VAR2->VAR11 == VAR12)
    {
        FUN2(VAR6);
        if (FUN3(VAR6))
        {
            VAR9[0].VAR13 = VAR14;
            VAR9[0].VAR15 = 0;
            VAR10 = 1;
        }
        VAR4->VAR16 = 1;
    }
    else
    {
        VAR4->VAR16 = FUN3(VAR6);
        if (VAR4->VAR16)
        {
            for (VAR7 = 0; VAR7 < VAR17; VAR7++)
            {
                MMCOOpcode VAR13 = FUN4(VAR6);
                VAR9[VAR7].VAR13 = VAR13;
                if (VAR13 == VAR18 || VAR13 == VAR19)
                {
                    VAR9[VAR7].VAR20 = (VAR4->VAR21 - FUN5(VAR6) - 1) & (VAR4->VAR22 - 1);
                    if (VAR9[VAR7].VAR20 >= VAR2->VAR23 || !VAR2->VAR24[VAR9[VAR7].VAR20])
                    {
                        FUN6(VAR25->VAR26, VAR27, ""
                                                       "",
                               VAR9);
                        return -1;
                    }
                }
                if (VAR13 == VAR19 || VAR13 == VAR28 || VAR13 == VAR14 || VAR13 == VAR29)
                {
                    unsigned int VAR15 = FUN4(VAR6);
                    if (VAR15 >= 32 || (VAR15 >= 16 && !(VAR13 == VAR29 && VAR15 == 16) && !(VAR13 == VAR28 && FUN7(VAR2))))
                    {
                        FUN6(VAR2->VAR26, VAR27, ""
                                                       "",
                               VAR13);
                        return -1;
                    }
                    VAR9[VAR7].VAR15 = VAR15;
                }
                if (VAR13 > (unsigned)VAR14)
                {
                    FUN6(VAR2->VAR26, VAR27, "", VAR13);
                    return -1;
                }
                if (VAR13 == VAR30)
                    break;
            }
            VAR10 = VAR7;
        }
    }
    VAR4->VAR10 = VAR10;
    return 0;
}