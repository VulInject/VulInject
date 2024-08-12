static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5;
    if (VAR2->VAR6 == VAR7)
    {
        VAR4->VAR8 = FUN2(&VAR4->VAR9) - 1;
        VAR2->VAR10[0].VAR11 = FUN2(&VAR4->VAR9) - 1;
        if (VAR2->VAR10[0].VAR11 == -1)
            VAR2->VAR12 = 0;
        else
        {
            VAR2->VAR10[0].VAR13 = VAR14;
            VAR2->VAR12 = 1;
        }
    }
    else
    {
        if (FUN2(&VAR4->VAR9))
        {
            for (VAR5 = 0; VAR5 < VAR15; VAR5++)
            {
                MMCOOpcode VAR13 = FUN3(&VAR4->VAR9);
                ;
                VAR2->VAR10[VAR5].VAR13 = VAR13;
                if (VAR13 == VAR16 || VAR13 == VAR17)
                {
                    VAR2->VAR10[VAR5].VAR18 = (VAR2->VAR19 - FUN3(&VAR4->VAR9) - 1) & ((1 << VAR2->VAR20.VAR21) - 1);
                }
                if (VAR13 == VAR17 || VAR13 == VAR22 || VAR13 == VAR14 || VAR13 == VAR23)
                {
                    VAR2->VAR10[VAR5].VAR11 = FUN3(&VAR4->VAR9);
                    if (VAR2->VAR10[VAR5].VAR11 >= 16)
                    {
                        FUN4(VAR2->VAR4.VAR24, VAR25, "", VAR13);
                        return -1;
                    }
                }
                if (VAR13 > VAR14)
                {
                    FUN4(VAR2->VAR4.VAR24, VAR25, "", VAR13);
                    return -1;
                }
                if (VAR13 == VAR26)
                    break;
            }
            VAR2->VAR12 = VAR5;
        }
        else
        {
            assert(VAR2->VAR27 + VAR2->VAR28 <= VAR2->VAR20.VAR29);
            if (VAR2->VAR27 + VAR2->VAR28 == VAR2->VAR20.VAR29)
            {
                VAR2->VAR10[0].VAR13 = VAR16;
                VAR2->VAR10[0].VAR18 = VAR2->VAR30[VAR2->VAR28 - 1]->VAR19;
                VAR2->VAR12 = 1;
            }
            else
                VAR2->VAR12 = 0;
        }
    }
    return 0;
}