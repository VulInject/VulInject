static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    uint64_t VAR11, VAR12, VAR13, VAR14;
    uint32_t VAR15, VAR16;
    uint32_t VAR17 = 1, VAR18 = 1, VAR19;
    int64_t VAR20;
    int VAR21;
    VAR2->VAR22 = 1;
    VAR9->VAR23 = 0;
    VAR9->VAR24 = VAR9->VAR25 = VAR9->VAR26 = VAR9->VAR27 = NULL;
    VAR20 = FUN2(VAR2->VAR28);
    if (VAR20 < 0)
    {
        VAR21 = VAR20;
        goto VAR29;
    }
    VAR20 -= 0x1d8;
    VAR21 = FUN3(VAR2, VAR20, &VAR11);
    if (VAR21 < 0)
    {
        goto VAR29;
    }
    else if (VAR11 == 0)
    {
        VAR21 = -VAR30;
        goto VAR29;
    }
    VAR21 = FUN4(VAR2, VAR11, &VAR16);
    if (VAR21 < 0)
    {
        goto VAR29;
    }
    else if (VAR16 != 0x100)
    {
        VAR21 = -VAR30;
        goto VAR29;
    }
    VAR21 = FUN4(VAR2, VAR11 + 4, &VAR15);
    if (VAR21 < 0)
    {
        goto VAR29;
    }
    else if (VAR15 == 0)
    {
        VAR21 = -VAR30;
        goto VAR29;
    }
    VAR12 = VAR11 + VAR15;
    VAR20 = VAR11 + 0x100;
    VAR13 = VAR14 = 0;
    while (VAR20 < VAR12)
    {
        uint32_t VAR31;
        VAR21 = FUN4(VAR2, VAR20, &VAR15);
        if (VAR21 < 0)
        {
            goto VAR29;
        }
        else if (VAR15 == 0)
        {
            VAR21 = -VAR30;
            goto VAR29;
        }
        VAR20 += 4;
        VAR21 = FUN4(VAR2, VAR20, &VAR31);
        if (VAR21 < 0)
        {
            goto VAR29;
        }
        if (VAR31 == 0x6d697368 && VAR15 >= 244)
        {
            size_t VAR32;
            uint32_t VAR33;
            VAR20 += 4;
            VAR20 += 200;
            VAR33 = (VAR15 - 204) / 40;
            VAR32 = sizeof(VAR34) * (VAR9->VAR23 + VAR33);
            VAR9->VAR35 = FUN5(VAR9->VAR35, VAR32 / 2);
            VAR9->VAR24 = FUN5(VAR9->VAR24, VAR32);
            VAR9->VAR25 = FUN5(VAR9->VAR25, VAR32);
            VAR9->VAR26 = FUN5(VAR9->VAR26, VAR32);
            VAR9->VAR27 = FUN5(VAR9->VAR27, VAR32);
            for (VAR19 = VAR9->VAR23; VAR19 < VAR9->VAR23 + VAR33; VAR19++)
            {
                VAR21 = FUN4(VAR2, VAR20, &VAR9->VAR35[VAR19]);
                if (VAR21 < 0)
                {
                    goto VAR29;
                }
                VAR20 += 4;
                if (VAR9->VAR35[VAR19] != 0x80000005 && VAR9->VAR35[VAR19] != 1 && VAR9->VAR35[VAR19] != 2)
                {
                    if (VAR9->VAR35[VAR19] == 0xffffffff && VAR19 > 0)
                    {
                        VAR13 = VAR9->VAR24[VAR19 - 1] + VAR9->VAR25[VAR19 - 1];
                        VAR14 = VAR9->VAR26[VAR19 - 1] + VAR9->VAR27[VAR19 - 1];
                    }
                    VAR33--;
                    VAR19--;
                    VAR20 += 36;
                    continue;
                }
                VAR20 += 4;
                VAR21 = FUN3(VAR2, VAR20, &VAR9->VAR26[VAR19]);
                if (VAR21 < 0)
                {
                    goto VAR29;
                }
                VAR9->VAR26[VAR19] += VAR14;
                VAR20 += 8;
                VAR21 = FUN3(VAR2, VAR20, &VAR9->VAR27[VAR19]);
                if (VAR21 < 0)
                {
                    goto VAR29;
                }
                VAR20 += 8;
                if (VAR9->VAR27[VAR19] > VAR36)
                {
                    FUN6("" VAR37 "" VAR38 "", VAR9->VAR27[VAR19], VAR19, VAR36);
                    VAR21 = -VAR30;
                    goto VAR29;
                }
                VAR21 = FUN3(VAR2, VAR20, &VAR9->VAR24[VAR19]);
                if (VAR21 < 0)
                {
                    goto VAR29;
                }
                VAR9->VAR24[VAR19] += VAR13;
                VAR20 += 8;
                VAR21 = FUN3(VAR2, VAR20, &VAR9->VAR25[VAR19]);
                if (VAR21 < 0)
                {
                    goto VAR29;
                }
                VAR20 += 8;
                if (VAR9->VAR25[VAR19] > VAR39)
                {
                    FUN6("" VAR37 "" VAR38 "", VAR9->VAR25[VAR19], VAR19, VAR39);
                    VAR21 = -VAR30;
                    goto VAR29;
                }
                FUN7(VAR9, VAR19, &VAR17, &VAR18);
            }
            VAR9->VAR23 += VAR33;
        }
    }
    VAR9->VAR40 = FUN8(VAR2->VAR28, VAR17 + 1);
    VAR9->VAR41 = FUN8(VAR2->VAR28, 512 * VAR18);
    if (VAR9->VAR40 == NULL || VAR9->VAR41 == NULL)
    {
        VAR21 = -VAR42;
        goto VAR29;
    }
    if (FUN9(&VAR9->VAR43) != VAR44)
    {
        VAR21 = -VAR30;
        goto VAR29;
    }
    VAR9->VAR45 = VAR9->VAR23;
    FUN10(&VAR9->VAR46);
    return 0;
VAR29:
    FUN11(VAR9->VAR35);
    FUN11(VAR9->VAR24);
    FUN11(VAR9->VAR25);
    FUN11(VAR9->VAR26);
    FUN11(VAR9->VAR27);
    FUN12(VAR9->VAR40);
    FUN12(VAR9->VAR41);
    return VAR21;
}