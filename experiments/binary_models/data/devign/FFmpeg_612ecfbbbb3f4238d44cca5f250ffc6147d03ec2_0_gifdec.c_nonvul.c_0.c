static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    VAR18 *VAR19, *VAR20, *VAR21, *VAR22;
    int VAR23;
    VAR3 = FUN2(&VAR2->VAR24);
    VAR4 = FUN2(&VAR2->VAR24);
    VAR5 = FUN2(&VAR2->VAR24);
    VAR6 = FUN2(&VAR2->VAR24);
    VAR9 = FUN3(&VAR2->VAR24);
    VAR10 = VAR9 & 0x40;
    VAR11 = VAR9 & 0x80;
    VAR7 = (VAR9 & 0x07) + 1;
    FUN4(VAR2->VAR25, "", VAR3, VAR4, VAR5, VAR6);
    if (VAR11)
    {
        FUN5(&VAR2->VAR24, VAR2->VAR26, 3 * (1 << VAR7));
        VAR21 = VAR2->VAR26;
    }
    else
    {
        VAR21 = VAR2->VAR27;
        VAR7 = VAR2->VAR7;
    }
    if (VAR3 + VAR5 > VAR2->VAR28 || VAR4 + VAR6 > VAR2->VAR29)
        return FUN6(VAR30);
    VAR16 = (1 << VAR7);
    VAR20 = VAR21;
    for (VAR17 = 0; VAR17 < VAR16; VAR17++)
    {
        VAR2->VAR31[VAR17] = (0xffu << 24) | FUN7(VAR20);
        VAR20 += 3;
    }
    for (; VAR17 < 256; VAR17++)
        VAR2->VAR31[VAR17] = (0xffu << 24);
    if (VAR2->VAR32 >= 0)
        VAR2->VAR31[VAR2->VAR32] = 0;
    VAR8 = FUN3(&VAR2->VAR24);
    if ((VAR23 = FUN8(VAR2->VAR33, VAR8, VAR2->VAR24, VAR2->VAR34 - VAR2->VAR24, VAR35)) < 0)
    {
        FUN9(VAR2->VAR25, VAR36, "");
        return VAR23;
    }
    VAR15 = VAR2->VAR37.VAR15[0];
    VAR22 = VAR2->VAR37.VAR38[0] + VAR4 * VAR15 + VAR3;
    VAR19 = VAR22;
    VAR13 = 0;
    VAR14 = 0;
    for (VAR12 = 0; VAR12 < VAR6; VAR12++)
    {
        FUN10(VAR2->VAR33, VAR19, VAR5);
        if (VAR10)
        {
            switch (VAR13)
            {
            default:
            case 0:
            case 1:
                VAR14 += 8;
                VAR19 += VAR15 * 8;
                if (VAR14 >= VAR6)
                {
                    VAR14 = VAR13 ? 2 : 4;
                    VAR19 = VAR22 + VAR15 * VAR14;
                    VAR13++;
                }
                break;
            case 2:
                VAR14 += 4;
                VAR19 += VAR15 * 4;
                if (VAR14 >= VAR6)
                {
                    VAR14 = 1;
                    VAR19 = VAR22 + VAR15;
                    VAR13++;
                }
                break;
            case 3:
                VAR14 += 2;
                VAR19 += VAR15 * 2;
                break;
            }
        }
        else
        {
            VAR19 += VAR15;
        }
    }
    FUN11(VAR2->VAR33);
    VAR2->VAR24 = FUN12(VAR2->VAR33);
    return 0;
}