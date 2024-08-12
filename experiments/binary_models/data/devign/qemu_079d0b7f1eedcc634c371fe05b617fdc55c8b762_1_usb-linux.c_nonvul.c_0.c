static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13 = 0;
    VAR14 *VAR15;
    VAR11 = VAR4->VAR16->VAR11;
    if (VAR11 == 0)
        return VAR17;
    VAR7 = FUN2(VAR2, VAR4->VAR18, VAR4->VAR16->VAR19);
    if (!VAR7)
    {
        VAR7 = FUN3(VAR2, VAR4->VAR18, VAR4->VAR16->VAR19);
    }
    VAR8 = FUN4(VAR2, VAR4->VAR18, VAR4->VAR16->VAR19);
    VAR9 = VAR7[VAR8].VAR20;
    if (VAR9 >= 0 && VAR9 < VAR21)
    {
        if (VAR5)
        {
            if (VAR7[VAR8].VAR22.VAR23)
            {
                VAR13 = FUN5(VAR7[VAR8].VAR22.VAR23);
                VAR7[VAR8].VAR20 = VAR21 - 1;
            }
            else if (VAR7[VAR8].VAR22.VAR24[VAR9].VAR23)
            {
                VAR13 = FUN5(VAR7[VAR8].VAR22.VAR24[VAR9].VAR23);
            }
            else if (VAR7[VAR8].VAR22.VAR24[VAR9].VAR25 > VAR4->VAR26.VAR27)
            {
                FUN6("");
                VAR13 = VAR17;
            }
            else
            {
                VAR13 = VAR7[VAR8].VAR22.VAR24[VAR9].VAR25;
                VAR15 = VAR7[VAR8].VAR22.VAR28 + VAR9 * VAR7[VAR8].VAR22.VAR24[0].VAR29;
                FUN7(VAR4, VAR15, VAR13);
            }
        }
        else
        {
            VAR13 = VAR4->VAR26.VAR27;
            VAR12 = (VAR9 == 0) ? 0 : FUN8(VAR2, VAR4->VAR18, VAR4->VAR16->VAR19);
            if (VAR13 > VAR11)
            {
                FUN6("");
                return VAR17;
            }
            FUN7(VAR4, VAR7[VAR8].VAR22.VAR28 + VAR12, VAR13);
            VAR7[VAR8].VAR22.VAR24[VAR9].VAR29 = VAR13;
            VAR12 += VAR13;
            FUN9(VAR2, VAR4->VAR18, VAR4->VAR16->VAR19, VAR12);
            if (!FUN10(VAR2, VAR4->VAR18, VAR4->VAR16->VAR19) && VAR8 == 1 && VAR9 == 8)
            {
                FUN11(VAR2, VAR4->VAR18, VAR4->VAR16->VAR19);
            }
        }
        VAR7[VAR8].VAR20++;
        if (VAR7[VAR8].VAR20 == VAR21)
        {
            VAR8 = (VAR8 + 1) % VAR2->VAR30;
            FUN12(VAR2, VAR4->VAR18, VAR4->VAR16->VAR19, VAR8);
        }
    }
    else
    {
        if (VAR5)
        {
            FUN11(VAR2, VAR4->VAR18, VAR4->VAR16->VAR19);
        }
        else
        {
            FUN13("");
        }
    }
    if (FUN10(VAR2, VAR4->VAR18, VAR4->VAR16->VAR19))
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR30; VAR8++)
        {
            if (VAR7[VAR8].VAR20 == VAR21)
            {
                VAR10 = FUN14(VAR2->VAR31, VAR32, &VAR7[VAR8]);
                if (VAR10 < 0)
                {
                    FUN15("");
                    if (!VAR5 || VAR13 == 0)
                    {
                        switch (VAR33)
                        {
                        case VAR34:
                            VAR13 = VAR17;
                            break;
                        case VAR35:
                        default:
                            VAR13 = VAR36;
                        }
                    }
                    break;
                }
                VAR7[VAR8].VAR20 = -1;
                FUN16(VAR2, VAR4->VAR18, VAR4->VAR16->VAR19, 1);
            }
        }
    }
    return VAR13;
}