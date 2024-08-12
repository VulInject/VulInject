static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int VAR10, VAR11[8], VAR12;
    offset_t VAR13, VAR14;
    void *VAR15;
    if (VAR16 && VAR6->VAR17)
    {
        VAR12 = FUN2(VAR6->VAR17, VAR4);
        if (VAR12 >= 0)
            return VAR12;
    }
    if (VAR6->VAR18)
    {
        int VAR19 = 0;
        VAR20 *VAR21 = NULL;
        VAR22 *VAR23;
        int64_t VAR24 = VAR25;
        int VAR13;
        for (VAR13 = 0; VAR13 < VAR2->VAR26; VAR13++)
        {
            VAR20 *VAR27 = VAR2->VAR28[VAR13];
            VAR22 *VAR29 = VAR27->VAR7;
            int64_t VAR30 = VAR29->VAR31;
            if (VAR29->VAR32)
                VAR30 /= VAR29->VAR32;
            VAR30 = FUN3(VAR30, VAR33 * (VAR34)VAR27->VAR35.VAR36, VAR27->VAR35.VAR37);
            if (VAR30 < VAR24 && VAR27->VAR38)
            {
                VAR24 = VAR30;
                VAR21 = VAR27;
                VAR19 = VAR13;
            }
        }
        VAR23 = VAR21->VAR7;
        VAR24 = FUN3(VAR24, VAR21->VAR35.VAR37, VAR33 * (VAR34)VAR21->VAR35.VAR36);
        if (VAR23->VAR39)
            VAR13 = FUN4(VAR21, VAR24, VAR40 | VAR41);
        else
            VAR13 = FUN4(VAR21, VAR24, VAR40);
        if (VAR13 >= 0)
        {
            int64_t VAR42 = VAR21->VAR43[VAR13].VAR42;
            VAR42 += VAR23->VAR44 - VAR23->VAR39;
            FUN5(VAR2->VAR9, VAR42 + 8, VAR45);
            assert(VAR23->VAR39 <= VAR23->VAR44);
            VAR6->VAR46 = VAR19;
            if (!VAR23->VAR39)
                VAR23->VAR44 = VAR23->VAR39 = VAR21->VAR43[VAR13].VAR12;
        }
    }
VAR47:
    if (VAR6->VAR46 >= 0)
    {
        VAR20 *VAR27 = VAR2->VAR28[VAR6->VAR46];
        VAR22 *VAR29 = VAR27->VAR7;
        int VAR12;
        if (VAR29->VAR32 <= 1)
            VAR12 = VAR48;
        else if (VAR29->VAR32 < 32)
            VAR12 = 64 * VAR29->VAR32;
        else
            VAR12 = VAR29->VAR32;
        if (VAR12 > VAR29->VAR39)
            VAR12 = VAR29->VAR39;
        FUN6(VAR9, VAR4, VAR12);
        if (VAR29->VAR49 && VAR4->VAR50 && VAR4->VAR12 < (unsigned)VAR48 / 2)
        {
            VAR29->VAR49 = 0;
            VAR4->VAR12 += 4 * 256;
            VAR4->VAR50 = FUN7(VAR4->VAR50, VAR4->VAR12 + VAR51);
            if (VAR4->VAR50)
                memcpy(VAR4->VAR50 + VAR4->VAR12 - 4 * 256, VAR29->VAR52, 4 * 256);
        }
        if (VAR16 && VAR6->VAR17)
        {
            VAR15 = VAR4->VAR53;
            VAR12 = FUN8(VAR6->VAR17, VAR4, VAR4->VAR50, VAR4->VAR12);
            VAR4->VAR53 = VAR15;
            VAR4->VAR54 |= VAR55;
        }
        else
        {
            VAR4->VAR56 = VAR29->VAR31;
            if (VAR29->VAR32)
                VAR4->VAR56 /= VAR29->VAR32;
            VAR4->VAR46 = VAR6->VAR46;
            if (VAR27->VAR57->VAR58 == VAR59)
            {
                VAR60 *VAR61;
                int VAR62;
                assert(VAR27->VAR43);
                VAR62 = FUN4(VAR27, VAR4->VAR56, 0);
                VAR61 = &VAR27->VAR43[VAR62];
                if (VAR62 >= 0 && VAR61->VAR63 == VAR29->VAR31)
                {
                    if (VAR61->VAR54 & VAR64)
                        VAR4->VAR54 |= VAR55;
                }
            }
            else
            {
                VAR4->VAR54 |= VAR55;
            }
            if (VAR29->VAR32)
                VAR29->VAR31 += VAR4->VAR12;
            else
                VAR29->VAR31++;
        }
        VAR29->VAR39 -= VAR12;
        if (!VAR29->VAR39)
        {
            VAR6->VAR46 = -1;
            VAR29->VAR44 = 0;
        }
        return VAR12;
    }
    memset(VAR11, -1, sizeof(int) * 8);
    for (VAR13 = VAR14 = FUN9(VAR9); !FUN10(VAR9); VAR13++)
    {
        int VAR65;
        for (VAR65 = 0; VAR65 < 7; VAR65++)
            VAR11[VAR65] = VAR11[VAR65 + 1];
        VAR11[7] = FUN11(VAR9);
        VAR12 = VAR11[4] + (VAR11[5] << 8) + (VAR11[6] << 16) + (VAR11[7] << 24);
        if (VAR11[2] >= '' && VAR11[2] <= '' && VAR11[3] >= '' && VAR11[3] <= '')
        {
            VAR10 = (VAR11[2] - '') * 10 + (VAR11[3] - '');
        }
        else
        {
            VAR10 = 100;
        }
        if (VAR13 + VAR12 > VAR6->VAR66 || VAR11[0] < 0)
            continue;
        if ((VAR11[0] == '' && VAR11[1] == '' && VAR10 < VAR2->VAR26) || (VAR11[0] == '' && VAR11[1] == '' && VAR11[2] == '' && VAR11[3] == '') || (VAR11[0] == '' && VAR11[1] == '' && VAR11[2] == '' && VAR11[3] == ''))
        {
            FUN12(VAR9, VAR12);
            goto VAR47;
        }
        if (VAR11[0] >= '' && VAR11[0] <= '' && VAR11[1] >= '' && VAR11[1] <= '')
        {
            VAR10 = (VAR11[0] - '') * 10 + (VAR11[1] - '');
        }
        else
        {
            VAR10 = 100;
        }
        if (VAR10 < VAR2->VAR26)
        {
            VAR20 *VAR27;
            VAR22 *VAR29;
            VAR27 = VAR2->VAR28[VAR10];
            VAR29 = VAR27->VAR7;
            if (VAR2->VAR26 >= 2)
            {
                VAR20 *VAR67 = VAR2->VAR28[1];
                VAR22 *VAR68 = VAR67->VAR7;
                if (VAR11[2] == '' && VAR11[3] == '' && VAR10 == 0 && VAR27->VAR57->VAR58 == VAR59 && VAR67->VAR57->VAR58 == VAR69 && VAR29->VAR70 == '' * 256 + '' && (VAR11[2] * 256 + VAR11[3] == VAR68->VAR70 || !VAR68->VAR71))
                {
                    VAR10 = 1;
                    VAR27 = VAR67;
                    VAR29 = VAR68;
                    FUN13(VAR2, VAR72, "");
                }
            }
            if ((VAR27->VAR73 >= VAR74 && VAR12 == 0) || VAR27->VAR73 >= VAR75)
            {
                if (VAR29->VAR32)
                    VAR29->VAR31 += VAR4->VAR12;
                else
                    VAR29->VAR31++;
                FUN12(VAR9, VAR12);
                goto VAR47;
            }
            if (VAR11[2] == '' && VAR11[3] == '' && VAR12 <= 4 * 256 + 4)
            {
                int VAR76 = FUN11(VAR9);
                int VAR77 = (VAR76 + FUN11(VAR9) - 1) & 0xFF;
                FUN14(VAR9);
                for (; VAR76 <= VAR77; VAR76++)
                    VAR29->VAR52[VAR76] = FUN15(VAR9) >> 8;
                VAR29->VAR49 = 1;
                goto VAR47;
            }
            else if (((VAR29->VAR71 < 5 || VAR14 + 9 > VAR13) && VAR11[2] < 128 && VAR11[3] < 128) || VAR11[2] * 256 + VAR11[3] == VAR29->VAR70)
            {
                if (VAR11[2] * 256 + VAR11[3] == VAR29->VAR70)
                    VAR29->VAR71++;
                else
                {
                    VAR29->VAR70 = VAR11[2] * 256 + VAR11[3];
                    VAR29->VAR71 = 0;
                }
                VAR6->VAR46 = VAR10;
                VAR29->VAR44 = VAR12 + 8;
                VAR29->VAR39 = VAR12;
                {
                    uint64_t VAR42 = FUN9(VAR9) - 8;
                    if (!VAR27->VAR43 || !VAR27->VAR38 || VAR27->VAR43[VAR27->VAR38 - 1].VAR42 < VAR42)
                    {
                        FUN16(VAR27, VAR42, VAR29->VAR31 / FUN17(1, VAR29->VAR32), VAR12, 0, VAR64);
                    }
                }
                goto VAR47;
            }
        }
    }