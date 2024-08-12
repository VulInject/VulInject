static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, const int VAR10, const int VAR11)
{
    Cell VAR12;
    int VAR13;
    if (VAR10 <= 0)
    {
        FUN2(VAR4, VAR14, "");
        return VAR15;
    }
    VAR12 = *VAR9;
    if (VAR7 == VAR16)
    {
        FUN3(VAR9->VAR17, VAR12.VAR17);
        VAR9->VAR18 += VAR12.VAR17;
        VAR9->VAR17 -= VAR12.VAR17;
    }
    else if (VAR7 == VAR19)
    {
        if (VAR12.VAR20 > VAR11)
        {
            VAR12.VAR20 = (VAR12.VAR20 <= (VAR11 << 1) ? 1 : 2) * VAR11;
        }
        else
            FUN3(VAR9->VAR20, VAR12.VAR20);
        VAR9->VAR21 += VAR12.VAR20;
        VAR9->VAR20 -= VAR12.VAR20;
    }
    while (FUN4(&VAR2->VAR22) >= 2)
    {
        VAR23;
        switch (VAR7 = FUN5(&VAR2->VAR22, 2))
        {
        case VAR16:
        case VAR19:
            if (FUN1(VAR2, VAR4, VAR6, VAR7, &VAR12, VAR10 - 1, VAR11))
                return VAR15;
            break;
        case VAR24:
            if (!VAR12.VAR25)
            {
                VAR12.VAR26 = 0;
                VAR12.VAR25 = 1;
            }
            else
            {
                VAR23;
                VAR7 = FUN5(&VAR2->VAR22, 2);
                if (VAR7 >= 2)
                {
                    FUN2(VAR4, VAR14, "", VAR7);
                    return VAR15;
                }
                if (VAR7 == 1)
                    FUN2(VAR4, VAR14, "");
                VAR27 FUN6(VAR2, VAR6, &VAR12);
                return 0;
            }
            break;
        case VAR28:
            if (!VAR12.VAR25)
            {
                if (!VAR2->VAR29)
                    VAR2->VAR30 = &VAR2->VAR22.VAR31[(FUN7(&VAR2->VAR22) + 7) >> 3];
                VAR12.VAR26 = &VAR2->VAR32[*(VAR2->VAR30++) << 1];
                VAR12.VAR25 = 1;
                FUN8(8);
            }
            else
            {
                if (!VAR2->VAR29)
                    VAR2->VAR30 = &VAR2->VAR22.VAR31[(FUN7(&VAR2->VAR22) + 7) >> 3];
                CHECK_CELL VAR13 = FUN9(VAR2, VAR4, VAR6, &VAR12, VAR2->VAR30, VAR2->VAR33);
                if (VAR13 < 0)
                    return VAR15;
                FUN8(VAR13 << 3);
                VAR2->VAR30 += VAR13;
                return 0;
            }
            break;
        }
    }
    return VAR15;
}