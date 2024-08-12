static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    int VAR9;
    unsigned int VAR10[8];
    unsigned int VAR11;
    int64_t VAR12, VAR13;
VAR14:
    memset(VAR10, -1, sizeof(VAR10));
    for (VAR12 = VAR13 = FUN2(VAR8); !FUN3(VAR8); VAR12++)
    {
        int VAR15;
        for (VAR15 = 0; VAR15 < 7; VAR15++)
            VAR10[VAR15] = VAR10[VAR15 + 1];
        VAR10[7] = FUN4(VAR8);
        VAR11 = VAR10[4] + (VAR10[5] << 8) + (VAR10[6] << 16) + (VAR10[7] << 24);
        VAR9 = FUN5(VAR10 + 2);
        FUN6(VAR2, "" VAR16 "", VAR10[0], VAR10[1], VAR10[2], VAR10[3], VAR10[4], VAR10[5], VAR10[6], VAR10[7], VAR12, VAR11, VAR9);
        if (VAR12 * (VAR5->VAR17 > 0) + (VAR18)VAR11 > VAR5->VAR19 || VAR10[0] > 127)
            continue;
        if ((VAR10[0] == '' && VAR10[1] == '' && VAR9 < VAR2->VAR20) || (VAR10[0] == '' && VAR10[1] == '' && VAR10[2] == '' && VAR10[3] == '') || (VAR10[0] == '' && VAR10[1] == '' && VAR10[2] == '' && VAR10[3] == '') || (VAR10[0] == '' && VAR10[1] == '' && VAR10[2] == '' && VAR10[3] == ''))
        {
            FUN7(VAR8, VAR11);
            goto VAR14;
        }
        if (VAR10[0] == '' && VAR10[1] == '' && VAR10[2] == '' && VAR10[3] == '')
        {
            FUN7(VAR8, 4);
            goto VAR14;
        }
        VAR9 = FUN5(VAR10);
        if (!((VAR12 - VAR5->VAR21) & 1) && FUN5(VAR10 + 1) < VAR2->VAR20)
            continue;
        if (VAR10[2] == '' && VAR10[3] == '' && VAR9 < VAR2->VAR20)
        {
            FUN7(VAR8, VAR11);
            goto VAR14;
        }
        if (VAR5->VAR22 && VAR9 != 0)
            continue;
        if (VAR9 < VAR2->VAR20)
        {
            VAR23 *VAR24;
            VAR25 *VAR26;
            VAR24 = VAR2->VAR27[VAR9];
            VAR26 = VAR24->VAR6;
            if (!VAR26)
            {
                FUN8(VAR2, VAR28, "", VAR9);
                continue;
            }
            if (VAR2->VAR20 >= 2)
            {
                VAR23 *VAR29 = VAR2->VAR27[1];
                VAR25 *VAR30 = VAR29->VAR6;
                if (VAR10[2] == '' && VAR10[3] == '' && VAR9 == 0 && VAR24->VAR31->VAR32 == VAR33 && VAR29->VAR31->VAR32 == VAR34 && VAR26->VAR35 == '' * 256 + '' && (VAR10[2] * 256 + VAR10[3] == VAR30->VAR35 || !VAR30->VAR36))
                {
                    VAR9 = 1;
                    VAR24 = VAR29;
                    VAR26 = VAR30;
                    FUN8(VAR2, VAR28, "");
                }
            }
            if (VAR10[2] == '' && VAR10[3] == '' && VAR11 <= 4 * 256 + 4)
            {
                int VAR37 = FUN4(VAR8);
                int VAR38 = (VAR37 + FUN4(VAR8) - 1) & 0xFF;
                FUN9(VAR8);
                for (; VAR37 <= VAR38; VAR37++)
                    VAR26->VAR39[VAR37] = 0xFFU << 24 | FUN10(VAR8) >> 8;
                VAR26->VAR40 = 1;
                goto VAR14;
            }
            else if (((VAR26->VAR36 < 5 || VAR13 + 9 > VAR12) && VAR10[2] < 128 && VAR10[3] < 128) || VAR10[2] * 256 + VAR10[3] == VAR26->VAR35)
            {
                if (VAR3)
                    return 0;
                if (VAR10[2] * 256 + VAR10[3] == VAR26->VAR35)
                    VAR26->VAR36++;
                else
                {
                    VAR26->VAR35 = VAR10[2] * 256 + VAR10[3];
                    VAR26->VAR36 = 0;
                }
                if (!VAR5->VAR22 && ((VAR24->VAR41 >= VAR42 && VAR11 == 0) || VAR24->VAR41 >= VAR43))
                {
                    VAR26->VAR44 += FUN11(VAR26, VAR11);
                    FUN7(VAR8, VAR11);
                    goto VAR14;
                }
                VAR5->VAR45 = VAR9;
                VAR26->VAR46 = VAR11 + 8;
                VAR26->VAR47 = VAR11;
                if (VAR11)
                {
                    uint64_t VAR48 = FUN2(VAR8) - 8;
                    if (!VAR24->VAR49 || !VAR24->VAR50 || VAR24->VAR49[VAR24->VAR50 - 1].VAR48 < VAR48)
                    {
                        FUN12(VAR24, VAR48, VAR26->VAR44, VAR11, 0, VAR51);
                    }
                }
                return 0;
            }
        }
    }
    if (VAR8->VAR52)
        return VAR8->VAR52;
    return VAR53;
}