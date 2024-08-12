static int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5)
{
    AVRational VAR6 = {0, 0};
    unsigned VAR7 = 8, VAR8 = 16;
    int VAR9;
    int VAR10, VAR11;
    if (FUN2(VAR4))
    {
        VAR2->VAR12 = FUN3(VAR4);
        VAR2->VAR13 = FUN3(VAR4);
    }
    if (FUN2(VAR4))
        VAR2->VAR14 = FUN3(VAR4);
    if (VAR2->VAR14 > 2U)
    {
        if (VAR5)
            FUN4(VAR5, VAR15, "", VAR2->VAR14);
    }
    if (FUN2(VAR4))
        VAR2->VAR16 = FUN3(VAR4);
    if (VAR2->VAR16 > 1U)
        if (FUN2(VAR4))
        {
            VAR2->VAR17 = FUN3(VAR4);
            if (VAR2->VAR17 > 10U)
                if (!VAR2->VAR17)
                {
                    VAR6.VAR18 = FUN3(VAR4);
                    VAR6.VAR19 = FUN3(VAR4);
                }
        }
    if (VAR2->VAR17 > 0)
    {
        if (VAR2->VAR17 <= 8)
            VAR6 = VAR20[VAR2->VAR17];
        else
            VAR6 = VAR21[VAR2->VAR17 - 9];
    }
    VAR2->VAR22 = VAR6;
    if (FUN2(VAR4))
    {
        VAR2->VAR23 = FUN3(VAR4);
        if (VAR2->VAR23 > 6U)
            if (!VAR2->VAR23)
            {
                VAR2->VAR24.VAR18 = FUN3(VAR4);
                VAR2->VAR24.VAR19 = FUN3(VAR4);
            }
    }
    if (VAR2->VAR23 > 0)
        VAR2->VAR24 = VAR25[VAR2->VAR23 - 1];
    if (FUN2(VAR4))
    {
        VAR2->VAR26 = FUN3(VAR4);
        VAR2->VAR27 = FUN3(VAR4);
        VAR2->VAR28 = FUN3(VAR4);
        VAR2->VAR29 = FUN3(VAR4);
    }
    if (FUN2(VAR4))
    {
        VAR2->VAR30 = FUN3(VAR4);
        if (VAR2->VAR30 > 4U)
            if (!VAR2->VAR30)
            {
                VAR8 = FUN3(VAR4);
                VAR7 = FUN5(FUN3(VAR4)) + 1;
                FUN3(VAR4);
                FUN3(VAR4);
                VAR2->VAR31 = VAR8 ? VAR32 : VAR33;
            }
    }
    if (VAR2->VAR30 > 0)
    {
        VAR9 = VAR2->VAR30 - 1;
        VAR7 = VAR34[VAR9].VAR35;
        VAR2->VAR31 = VAR34[VAR9].VAR31;
    }
    VAR2->VAR36 = VAR7;
    VAR2->VAR37 = VAR38[VAR2->VAR14][VAR2->VAR30 - 2];
    FUN6(VAR2->VAR37, &VAR10, &VAR11);
    if ((VAR2->VAR12 % (1 << VAR10)) || (VAR2->VAR13 % (1 << VAR11)))
    {
        if (VAR5)
            FUN4(VAR5, VAR15, "");
    }
    if (FUN2(VAR4))
    {
        VAR9 = VAR2->VAR39 = FUN3(VAR4);
        if (VAR2->VAR39 > 4U)
            VAR2->VAR40 = VAR41[VAR9].VAR40;
        VAR2->VAR42 = VAR41[VAR9].VAR42;
        VAR2->VAR43 = VAR41[VAR9].VAR43;
        if (!VAR2->VAR39)
        {
            if (FUN2(VAR4))
            {
                VAR9 = FUN3(VAR4);
                if (VAR9 < 3U)
                    VAR2->VAR40 = VAR44[VAR9];
            }
            if (FUN2(VAR4))
            {
                VAR9 = FUN3(VAR4);
                if (!VAR9)
                    VAR2->VAR42 = VAR45;
                else if (VAR9 == 1)
                    VAR2->VAR42 = VAR46;
            }
            if (FUN2(VAR4) && !FUN3(VAR4))
                VAR2->VAR43 = VAR47;
        }
    }
    else
    {
        VAR9 = VAR2->VAR39;
        VAR2->VAR40 = VAR41[VAR9].VAR40;
        VAR2->VAR42 = VAR41[VAR9].VAR42;
        VAR2->VAR43 = VAR41[VAR9].VAR43;
    }
    return 0;