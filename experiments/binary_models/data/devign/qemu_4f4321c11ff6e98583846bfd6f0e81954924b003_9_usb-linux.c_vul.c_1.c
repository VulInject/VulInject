static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13 = 0;
    VAR11 = FUN2(VAR2, VAR4->VAR14);
    if (VAR11 == 0)
        return VAR15;
    VAR7 = FUN3(VAR2, VAR4->VAR14);
    if (!VAR7)
    {
        VAR7 = FUN4(VAR2, VAR4->VAR14, VAR5);
    }
    VAR8 = FUN5(VAR2, VAR4->VAR14);
    VAR9 = VAR7[VAR8].VAR16;
    if (VAR9 >= 0 && VAR9 < VAR17)
    {
        if (VAR5)
        {
            if (VAR7[VAR8].VAR18.VAR19)
            {
                VAR13 = FUN6(VAR7[VAR8].VAR18.VAR19);
                VAR7[VAR8].VAR16 = VAR17 - 1;
            }
            else if (VAR7[VAR8].VAR18.VAR20[VAR9].VAR19)
            {
                VAR13 = FUN6(VAR7[VAR8].VAR18.VAR20[VAR9].VAR19);
            }
            else if (VAR7[VAR8].VAR18.VAR20[VAR9].VAR21 > VAR4->VAR13)
            {
                FUN7("");
                VAR13 = VAR15;
            }
            else
            {
                VAR13 = VAR7[VAR8].VAR18.VAR20[VAR9].VAR21;
                memcpy(VAR4->VAR22, VAR7[VAR8].VAR18.VAR23 + VAR9 * VAR7[VAR8].VAR18.VAR20[0].VAR24, VAR13);
            }
        }
        else
        {
            VAR13 = VAR4->VAR13;
            VAR12 = (VAR9 == 0) ? 0 : FUN8(VAR2, VAR4->VAR14);
            if (VAR13 > VAR11)
            {
                FUN7("");
                return VAR15;
            }
            memcpy(VAR7[VAR8].VAR18.VAR23 + VAR12, VAR4->VAR22, VAR13);
            VAR7[VAR8].VAR18.VAR20[VAR9].VAR24 = VAR13;
            VAR12 += VAR13;
            FUN9(VAR2, VAR4->VAR14, VAR12);
            if (!FUN10(VAR2, VAR4->VAR14) && VAR8 == 1 && VAR9 == 8)
            {
                FUN11(VAR2, VAR4->VAR14);
            }
        }
        VAR7[VAR8].VAR16++;
        if (VAR7[VAR8].VAR16 == VAR17)
        {
            VAR8 = (VAR8 + 1) % VAR2->VAR25;
            FUN12(VAR2, VAR4->VAR14, VAR8);
        }
    }
    else
    {
        if (VAR5)
        {
            FUN11(VAR2, VAR4->VAR14);
        }
        else
        {
            FUN13("");
        }
    }
    if (FUN10(VAR2, VAR4->VAR14))
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR25; VAR8++)
        {
            if (VAR7[VAR8].VAR16 == VAR17)
            {
                VAR10 = FUN14(VAR2->VAR26, VAR27, &VAR7[VAR8]);
                if (VAR10 < 0)
                {
                    FUN7("", VAR8, VAR28);
                    if (!VAR5 || VAR13 == 0)
                    {
                        switch (VAR28)
                        {
                        case VAR29:
                            VAR13 = VAR15;
                            break;
                        case VAR30:
                        default:
                            VAR13 = VAR31;
                        }
                    }
                    break;
                }
                VAR7[VAR8].VAR16 = -1;
                FUN15(VAR2, VAR4->VAR14, +1);
            }
        }
    }
    return VAR13;
}