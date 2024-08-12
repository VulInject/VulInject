static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    int VAR10, VAR11[8], VAR12;
    offset_t VAR13;
    void *VAR14;
    memset(VAR11, -1, sizeof(int) * 8);
    if (VAR6->VAR15)
    {
        VAR12 = FUN2(VAR6->VAR15, VAR4);
        if (VAR12 >= 0)
            return VAR12;
    }
    for (VAR13 = FUN3(VAR9); !FUN4(VAR9); VAR13++)
    {
        int VAR16;
        if (VAR13 >= VAR6->VAR17)
        {
            if (VAR6->VAR18)
            {
                FUN5(VAR9, VAR6->VAR19 - VAR13);
                VAR6->VAR19 = VAR6->VAR17 = FUN6(FUN7(VAR9));
            }
            else
                break;
        }
        for (VAR16 = 0; VAR16 < 7; VAR16++)
            VAR11[VAR16] = VAR11[VAR16 + 1];
        VAR11[7] = FUN8(VAR9);
        VAR12 = VAR11[4] + (VAR11[5] << 8) + (VAR11[6] << 16) + (VAR11[7] << 24);
        if (VAR11[2] >= '' && VAR11[2] <= '' && VAR11[3] >= '' && VAR11[3] <= '')
        {
            VAR10 = (VAR11[2] - '') * 10 + (VAR11[3] - '');
        }
        else
        {
            VAR10 = 100;
        }
        if (VAR13 + VAR12 > VAR6->VAR17 || VAR11[0] < 0)
            continue;
        if ((VAR11[0] == '' && VAR11[1] == '' && VAR10 < VAR2->VAR20) || (VAR11[0] == '' && VAR11[1] == '' && VAR11[2] == '' && VAR11[3] == ''))
        {
            FUN5(VAR9, VAR12);
            VAR13 += VAR12;
            memset(VAR11, -1, sizeof(int) * 8);
            continue;
        }
        if (VAR11[0] >= '' && VAR11[0] <= '' && VAR11[1] >= '' && VAR11[1] <= '')
        {
            VAR10 = (VAR11[0] - '') * 10 + (VAR11[1] - '');
        }
        else
        {
            VAR10 = 100;
        }
        if (VAR10 < VAR2->VAR20)
        {
            VAR21 *VAR22;
            VAR23 *VAR24;
            VAR22 = VAR2->VAR25[VAR10];
            VAR24 = VAR22->VAR7;
            if ((VAR24->VAR26 < 5 && VAR11[2] < 128 && VAR11[3] < 128) || VAR11[2] * 256 + VAR11[3] == VAR24->VAR27)
            {
                if (VAR11[2] * 256 + VAR11[3] == VAR24->VAR27)
                    VAR24->VAR26++;
                else
                {
                    VAR24->VAR27 = VAR11[2] * 256 + VAR11[3];
                    VAR24->VAR26 = 0;
                }
                FUN9(VAR4, VAR12);
                FUN10(VAR9, VAR4->VAR28, VAR12);
                if (VAR12 & 1)
                {
                    FUN8(VAR9);
                    VAR12++;
                }
                if (VAR6->VAR15)
                {
                    VAR14 = VAR4->VAR29;
                    VAR12 = FUN11(VAR6->VAR15, VAR4, VAR4->VAR28, VAR4->VAR12);
                    VAR4->VAR29 = VAR14;
                    VAR4->VAR30 |= VAR31;
                }
                else
                {
                    VAR4->VAR32 = VAR24->VAR33;
                    if (VAR24->VAR34)
                        VAR4->VAR32 /= VAR24->VAR34;
                    VAR4->VAR35 = VAR10;
                    if (VAR22->VAR36.VAR37 == VAR38)
                    {
                        if (VAR24->VAR33 < VAR24->VAR39)
                        {
                            if (VAR24->VAR40[VAR24->VAR33].VAR30 & VAR41)
                                VAR4->VAR30 |= VAR31;
                        }
                        else
                        {
                            VAR4->VAR30 |= VAR31;
                        }
                    }
                    else
                    {
                        VAR4->VAR30 |= VAR31;
                    }
                    if (VAR24->VAR34)
                        VAR24->VAR33 += VAR4->VAR12;
                    else
                        VAR24->VAR33++;
                }
                return VAR12;
            }
        }
    }
    return -1;
}