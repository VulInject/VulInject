static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13, VAR14, VAR15;
    if (FUN2(&VAR4[0]) == VAR16)
        return 0;
    VAR8 = VAR4[0];
    if (VAR8 < 5)
    {
        return 0;
    }
    VAR4 += 4;
    FUN3(VAR2, "", VAR8);
    VAR11 = FUN4(VAR4, VAR8);
    if (!VAR11)
        return FUN5(VAR17);
    VAR12 = VAR13 = VAR14 = VAR15 = 0;
    for (VAR9 = 0; VAR9 < VAR8; VAR9++)
    {
        switch (VAR11[VAR9].VAR18 << 8 | VAR11[VAR9].VAR19)
        {
        case 0x6e0:
            VAR12++;
        case 0xbe0:
            VAR13++;
        case 0x3c0:
            VAR15++;
        case 0x9c0:
            VAR14++;
        }
    }
    FUN3(VAR2, "", VAR12, VAR13);
    if (VAR12 > 0)
    {
        FUN3(VAR2, "");
        VAR6->VAR20 = VAR21;
        VAR6->VAR22 = VAR23;
    }
    else if (VAR13 > 0)
    {
        FUN3(VAR2, "");
        VAR6->VAR20 = VAR24;
        VAR6->VAR22 = VAR25;
    }
    if (VAR14 > 0)
    {
        FUN3(VAR2, "");
        VAR6->VAR26 = VAR27;
        VAR6->VAR28 = VAR29;
        VAR6->VAR30 = VAR31;
        VAR6->VAR22 = VAR32;
    }
    else if (VAR15 > 0)
    {
        VAR6->VAR26 = VAR33;
        FUN3(VAR2, "");
    }
    if (VAR6->VAR28 == VAR34)
    {
        uint32_t VAR35 = 16 * VAR8;
        for (VAR9 = 0; VAR9 < VAR8; VAR9++)
        {
            if ((VAR11[VAR9].VAR18 << 0x08 | VAR11[VAR9].VAR19) == 0x3c0 && VAR11[VAR9].VAR36 > 15)
            {
                int VAR37 = FUN6(VAR38, &VAR4[VAR35], 5);
                if (VAR37 >= 0)
                {
                    if ((VAR4[VAR35 + 6 + VAR37] & 0x80) == 0x80)
                    {
                        if (VAR6->VAR20 == VAR21)
                            FUN3(VAR2, "");
                        VAR6->VAR28 = VAR39;
                        VAR6->VAR30 = VAR40;
                    }
                    else
                    {
                        if (VAR6->VAR20 == VAR21)
                            FUN3(VAR2, "");
                        VAR6->VAR28 = VAR29;
                        VAR6->VAR30 = VAR41;
                    }
                }
            }
            VAR35 += VAR11[VAR9].VAR36;
        }
    }
    FUN7(VAR11);
    return 0;