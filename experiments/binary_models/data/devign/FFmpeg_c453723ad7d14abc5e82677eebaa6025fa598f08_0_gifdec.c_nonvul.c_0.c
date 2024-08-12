static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    VAR20 *VAR21, *VAR22, *VAR23, *VAR24;
    VAR5 = FUN2(&VAR2->VAR25);
    VAR6 = FUN2(&VAR2->VAR25);
    VAR7 = FUN2(&VAR2->VAR25);
    VAR8 = FUN2(&VAR2->VAR25);
    VAR11 = FUN3(&VAR2->VAR25);
    VAR12 = VAR11 & 0x40;
    VAR13 = VAR11 & 0x80;
    VAR9 = (VAR11 & 0x07) + 1;
    FUN4(VAR2->VAR26, "", VAR5, VAR6, VAR7, VAR8);
    if (VAR13)
    {
        FUN5(&VAR2->VAR25, VAR2->VAR27, 3 * (1 << VAR9));
        VAR23 = VAR2->VAR27;
    }
    else
    {
        VAR23 = VAR2->VAR28;
        VAR9 = VAR2->VAR9;
    }
    if (VAR5 + VAR7 > VAR2->VAR29 || VAR6 + VAR8 > VAR2->VAR30 || !VAR7 || !VAR8)
    {
        FUN6(VAR2->VAR26, VAR31, "");
        return VAR32;
    }
    VAR18 = (1 << VAR9);
    VAR22 = VAR23;
    for (VAR19 = 0; VAR19 < VAR18; VAR19++)
    {
        VAR2->VAR33[VAR19] = (0xffu << 24) | FUN7(VAR22);
        VAR22 += 3;
    }
    for (; VAR19 < 256; VAR19++)
        VAR2->VAR33[VAR19] = (0xffu << 24);
    if (VAR2->VAR34 >= 0)
        VAR2->VAR33[VAR2->VAR34] = 0;
    VAR10 = FUN3(&VAR2->VAR25);
    FUN8(VAR2->VAR35, VAR10, VAR2->VAR25, VAR2->VAR36 - VAR2->VAR25, VAR37);
    VAR17 = VAR4->VAR17[0];
    VAR24 = VAR4->VAR38[0] + VAR6 * VAR17 + VAR5;
    VAR21 = VAR24;
    VAR15 = 0;
    VAR16 = 0;
    for (VAR14 = 0; VAR14 < VAR8; VAR14++)
    {
        FUN9(VAR2->VAR35, VAR21, VAR7);
        if (VAR12)
        {
            switch (VAR15)
            {
            default:
            case 0:
            case 1:
                VAR16 += 8;
                VAR21 += VAR17 * 8;
                if (VAR16 >= VAR8)
                {
                    VAR16 = VAR15 ? 2 : 4;
                    VAR21 = VAR24 + VAR17 * VAR16;
                    VAR15++;
                }
                break;
            case 2:
                VAR16 += 4;
                VAR21 += VAR17 * 4;
                if (VAR16 >= VAR8)
                {
                    VAR16 = 1;
                    VAR21 = VAR24 + VAR17;
                    VAR15++;
                }
                break;
            case 3:
                VAR16 += 2;
                VAR21 += VAR17 * 2;
                break;
            }
        }
        else
        {
            VAR21 += VAR17;
        }
    }
    FUN10(VAR2->VAR35);
    VAR2->VAR25 = FUN11(VAR2->VAR35);
    return 0;
}