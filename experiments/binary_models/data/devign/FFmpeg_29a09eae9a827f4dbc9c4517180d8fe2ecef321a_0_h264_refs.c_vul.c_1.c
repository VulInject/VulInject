int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *const VAR6 = &VAR2->VAR6;
    int VAR7;
    VAR2->VAR8 = 0;
    if (VAR2->VAR9 == VAR10)
    {
        VAR6->VAR11 = FUN2(VAR4) - 1;
        if (FUN2(VAR4))
        {
            VAR2->VAR12[0].VAR13 = VAR14;
            VAR2->VAR12[0].VAR15 = 0;
            VAR2->VAR8 = 1;
        }
    }
    else
    {
        if (FUN2(VAR4))
        {
            for (VAR7 = 0; VAR7 < VAR16; VAR7++)
            {
                MMCOOpcode VAR13 = FUN3(VAR4);
                VAR2->VAR12[VAR7].VAR13 = VAR13;
                if (VAR13 == VAR17 || VAR13 == VAR18)
                {
                    VAR2->VAR12[VAR7].VAR19 = (VAR2->VAR20 - FUN4(VAR4) - 1) & (VAR2->VAR21 - 1);
                }
                if (VAR13 == VAR18 || VAR13 == VAR22 || VAR13 == VAR14 || VAR13 == VAR23)
                {
                    unsigned int VAR15 = FUN3(VAR4);
                    if (VAR15 >= 32 || (VAR15 >= 16 && !(VAR13 == VAR22 && VAR24)))
                    {
                        FUN5(VAR2->VAR6.VAR25, VAR26, "", VAR13);
                        return -1;
                    }
                    VAR2->VAR12[VAR7].VAR15 = VAR15;
                }
                if (VAR13 > (unsigned)VAR14)
                {
                    FUN5(VAR2->VAR6.VAR25, VAR26, "", VAR13);
                    return -1;
                }
                if (VAR13 == VAR27)
                    break;
            }
            VAR2->VAR8 = VAR7;
        }
        else
        {
            FUN6(VAR2);
        }
    }
    return 0;
}