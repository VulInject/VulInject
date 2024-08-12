static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR7 *VAR8, unsigned char *VAR9)
{
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17 = 0, VAR18 = VAR2->VAR19 * VAR3 / VAR20;
    int VAR21, VAR22;
    unsigned char VAR23[64];
    VAR24 *VAR25;
    AVPicture VAR26, VAR27;
    if (VAR8->VAR28 || !VAR2->VAR29)
        VAR17 += FUN2(VAR2, VAR8->VAR30, VAR8->VAR28, 0x20, 0x24, VAR9 + VAR17);
    if (VAR8->VAR31 || !VAR2->VAR29)
        VAR17 += FUN2(VAR2, VAR8->VAR32, VAR8->VAR31, 0x22, 0x26, VAR9 + VAR17);
    for (VAR12 = VAR11 = 0; VAR11 < VAR3; VAR11 += VAR33)
    {
        for (VAR10 = 0; VAR10 < VAR2->VAR19; VAR10 += VAR33, VAR12++)
        {
            VAR25 = &VAR2->VAR25[VAR12];
            FUN3(VAR2, VAR10, VAR11, VAR5, &VAR26);
            if (VAR8->VAR34 == VAR35 && VAR25->VAR36 == VAR37)
            {
                FUN3(VAR2, VAR10, VAR11, VAR6, &VAR27);
                FUN4(VAR2, &VAR26, &VAR27);
            }
            else if (VAR8->VAR34 == VAR38 || VAR25->VAR36 == VAR39)
                FUN5(VAR2, &VAR26, VAR25->VAR40, VAR8);
            else
                FUN6(VAR2, &VAR26, VAR25->VAR41, VAR8);
        }
    }
    switch (VAR8->VAR34)
    {
    case VAR38:
        VAR17 += FUN7(VAR9 + VAR17, 0x32, VAR18);
        for (VAR10 = 0; VAR10 < VAR18; VAR10++)
            VAR9[VAR17++] = VAR2->VAR25[VAR10].VAR40;
        break;
    case VAR42:
        VAR16 = VAR17;
        VAR17 += VAR43;
        for (VAR10 = 0; VAR10 < VAR18; VAR10 += 32)
        {
            VAR13 = 0;
            for (VAR11 = VAR10; VAR11 < FUN8(VAR10 + 32, VAR18); VAR11++)
                if (VAR2->VAR25[VAR11].VAR36 == VAR44)
                    VAR13 |= 1 << (31 - VAR11 + VAR10);
            FUN9(&VAR9[VAR17], VAR13);
            VAR17 += 4;
            for (VAR11 = VAR10; VAR11 < FUN8(VAR10 + 32, VAR18); VAR11++)
            {
                VAR25 = &VAR2->VAR25[VAR11];
                if (VAR25->VAR36 == VAR39)
                    VAR9[VAR17++] = VAR25->VAR40;
                else
                    for (VAR12 = 0; VAR12 < 4; VAR12++)
                        VAR9[VAR17++] = VAR25->VAR41[VAR12];
            }
        }
        FUN7(VAR9 + VAR16, 0x30, VAR17 - VAR16 - VAR43);
        break;
    case VAR35:
        VAR16 = VAR17;
        VAR17 += VAR43;
        VAR13 = VAR14 = VAR15 = 0;
        for (VAR10 = 0; VAR10 < VAR18; VAR10++)
        {
            VAR25 = &VAR2->VAR25[VAR10];
            VAR13 |= (VAR25->VAR36 != VAR37) << (31 - VAR14++);
            VAR21 = 0;
            VAR22 = 0;
            if (VAR25->VAR36 != VAR37)
            {
                if (VAR14 < 32)
                    VAR13 |= (VAR25->VAR36 == VAR44) << (31 - VAR14++);
                else
                    VAR21 = 1;
            }
            if (VAR14 == 32)
            {
                FUN9(&VAR9[VAR17], VAR13);
                VAR17 += 4;
                VAR13 = VAR14 = 0;
                if (VAR25->VAR36 == VAR37 || VAR21)
                {
                    memcpy(&VAR9[VAR17], VAR23, VAR15);
                    VAR17 += VAR15;
                    VAR15 = 0;
                }
                else
                    VAR22 = 1;
            }
            if (VAR21)
            {
                VAR13 = (VAR25->VAR36 == VAR44) << 31;
                VAR14 = 1;
            }
            if (VAR25->VAR36 == VAR39)
                VAR23[VAR15++] = VAR25->VAR40;
            else if (VAR25->VAR36 == VAR44)
                for (VAR12 = 0; VAR12 < 4; VAR12++)
                    VAR23[VAR15++] = VAR25->VAR41[VAR12];
            if (VAR22)
            {
                memcpy(&VAR9[VAR17], VAR23, VAR15);
                VAR17 += VAR15;
                VAR15 = 0;
            }
        }
        if (VAR14 > 0)
        {
            FUN9(&VAR9[VAR17], VAR13);
            VAR17 += 4;
            memcpy(&VAR9[VAR17], VAR23, VAR15);
            VAR17 += VAR15;
        }
        FUN7(VAR9 + VAR16, 0x31, VAR17 - VAR16 - VAR43);
        break;
    }
    return VAR17;
}