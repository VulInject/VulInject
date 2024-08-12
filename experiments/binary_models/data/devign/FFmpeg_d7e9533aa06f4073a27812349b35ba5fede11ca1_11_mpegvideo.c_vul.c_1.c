static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    const int VAR5 = VAR2->VAR5;
    const int VAR6 = VAR2->VAR6;
    int VAR7;
    if (VAR2->VAR8)
    {
        VAR9 = VAR2->VAR10 * 2;
        VAR11 = VAR2->VAR10;
    }
    else
    {
        VAR9 = VAR2->VAR10;
        VAR11 = VAR2->VAR10 * 8;
    }
    if (VAR2->VAR12)
    {
        VAR13 *VAR14;
        int VAR15;
        VAR15 = VAR2->VAR10;
        VAR14 = VAR2->VAR16[0] + (VAR6 * 16 * VAR15) + VAR5 * 16;
        FUN2(VAR2->VAR17[0], VAR14, VAR15);
        FUN2(VAR2->VAR17[1], VAR14 + 8, VAR15);
        FUN2(VAR2->VAR17[2], VAR14 + 8 * VAR15, VAR15);
        FUN2(VAR2->VAR17[3], VAR14 + 8 * VAR15 + 8, VAR15);
        VAR15 >>= 1;
        VAR14 = VAR2->VAR16[1] + (VAR6 * 8 * VAR15) + VAR5 * 8;
        FUN2(VAR2->VAR17[4], VAR14, VAR15);
        VAR14 = VAR2->VAR16[2] + (VAR6 * 8 * VAR15) + VAR5 * 8;
        FUN2(VAR2->VAR17[5], VAR14, VAR15);
    }
    else
    {
        VAR18 *VAR19;
        VAR20 *VAR21;
        VAR13 *VAR22, *VAR23, *VAR24;
        VAR13 *VAR14;
        int VAR15;
        VAR22 = VAR2->VAR25[0] + (VAR6 * 16 * VAR2->VAR10) + VAR5 * 16;
        VAR23 = VAR2->VAR25[1] + (VAR6 * 8 * (VAR2->VAR10 >> 1)) + VAR5 * 8;
        VAR24 = VAR2->VAR25[2] + (VAR6 * 8 * (VAR2->VAR10 >> 1)) + VAR5 * 8;
        if ((!VAR2->VAR26) || VAR2->VAR27 == VAR28)
        {
            VAR19 = VAR29;
            VAR21 = VAR30;
        }
        else
        {
            VAR19 = VAR31;
            VAR21 = VAR32;
        }
        if (VAR2->VAR33 & VAR34)
        {
            FUN3(VAR2, VAR22, VAR23, VAR24, 0, VAR2->VAR35, VAR19, VAR21);
            if ((!VAR2->VAR26) || VAR2->VAR27 == VAR28)
                VAR19 = VAR36;
            else
                VAR19 = VAR37;
        }
        if (VAR2->VAR33 & VAR38)
        {
            FUN3(VAR2, VAR22, VAR23, VAR24, 1, VAR2->VAR39, VAR19, VAR21);
        }
        VAR15 = VAR2->VAR10;
        VAR14 = VAR2->VAR16[0] + (VAR6 * 16 * VAR15) + VAR5 * 16;
        FUN4(VAR2->VAR17[0], VAR14, VAR22, VAR15);
        FUN4(VAR2->VAR17[1], VAR14 + 8, VAR22 + 8, VAR15);
        FUN4(VAR2->VAR17[2], VAR14 + 8 * VAR15, VAR22 + 8 * VAR15, VAR15);
        FUN4(VAR2->VAR17[3], VAR14 + 8 * VAR15 + 8, VAR22 + 8 * VAR15 + 8, VAR15);
        VAR15 >>= 1;
        VAR14 = VAR2->VAR16[1] + (VAR6 * 8 * VAR15) + VAR5 * 8;
        FUN4(VAR2->VAR17[4], VAR14, VAR23, VAR15);
        VAR14 = VAR2->VAR16[2] + (VAR6 * 8 * VAR15) + VAR5 * 8;
        FUN4(VAR2->VAR17[5], VAR14, VAR24, VAR15);
    }
    {
        float VAR40;
        VAR40 = ((VAR2->VAR41 << 1) + VAR2->VAR42[VAR2->VAR43 * VAR6 + VAR5] + 1.0) / ((VAR2->VAR42[VAR2->VAR43 * VAR6 + VAR5] << 1) + VAR2->VAR41 + 1.0);
        FUN5("", (VAR2->VAR44[VAR2->VAR43 * VAR6 + VAR5] > 0) ? '' : '', VAR2->VAR45, VAR40, VAR2->VAR45 * VAR40, VAR2->VAR42[VAR2->VAR43 * VAR6 + VAR5], VAR2->VAR41);
    }
    if (VAR2->VAR46)
    {
        FUN6(VAR2);
    }
    else if (VAR2->VAR47)
    {
        FUN7(VAR2);
    }
    else
    {
        VAR2->VAR48 = 8;
        VAR2->VAR49 = 8;
    }
    for (VAR7 = 0; VAR7 < 6; VAR7++)
    {
        VAR2->VAR50[VAR7] = FUN8(VAR2, VAR2->VAR17[VAR7], VAR7, VAR2->VAR45);
    }
    switch (VAR2->VAR51)
    {
    case VAR52:
        FUN9(VAR2, VAR2->VAR17, VAR3, VAR4);
        break;
    case VAR53:
        if (VAR2->VAR46)
            FUN10(VAR2, VAR2->VAR17, VAR3, VAR4);
        else if (VAR2->VAR47)
            FUN11(VAR2, VAR2->VAR17, VAR3, VAR4);
        else
            FUN12(VAR2, VAR2->VAR17, VAR3, VAR4);
        break;
    case VAR54:
        FUN13(VAR2, VAR2->VAR17);
        break;
    }
}