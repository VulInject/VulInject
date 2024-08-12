static void FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR4->VAR3;
    int VAR5 = VAR2->VAR4->VAR5;
    int VAR6 = VAR2->VAR7.VAR8[0];
    int VAR9;
    int VAR10 = 0;
    int VAR11;
    unsigned char VAR12;
    int VAR13;
    unsigned int VAR14;
    unsigned int VAR15;
    unsigned int VAR16;
    unsigned int VAR17;
    unsigned char *VAR18 = VAR2->VAR7.VAR19[0];
    int VAR20 = VAR5 * VAR2->VAR7.VAR8[0];
    int VAR21 = 0;
    int VAR22 = 0;
    int VAR23, VAR24;
    int VAR25 = VAR6 - 4;
    int VAR26;
    int VAR27;
    int VAR28, VAR29;
    int VAR30;
    int VAR31;
    int VAR32;
    int VAR33;
    int VAR34 = 0;
    int VAR35 = 0;
    int VAR36 = 0;
    memcpy(VAR2->VAR7.VAR19[1], VAR2->VAR37, VAR38);
    VAR11 = FUN2(&VAR2->VAR39[VAR10]) & 0x00FFFFFF;
    VAR10 += 4;
    if (VAR11 != VAR2->VAR40)
        FUN3(VAR2->VAR4, VAR41, "", VAR11, VAR2->VAR40);
    VAR11 = VAR2->VAR40;
    VAR31 = ((VAR2->VAR4->VAR3 + 3) / 4) * ((VAR2->VAR4->VAR5 + 3) / 4);
    while (VAR31)
    {
        if (VAR10 > VAR11)
        {
            FUN3(VAR2->VAR4, VAR41, "", VAR10, VAR11);
            return;
        }
        if (VAR21 >= VAR20)
        {
            FUN3(VAR2->VAR4, VAR41, "", VAR21, VAR20);
            return;
        }
        VAR12 = VAR2->VAR39[VAR10++];
        switch (VAR12 & 0xF0)
        {
        case 0x00:
        case 0x10:
            VAR13 = FUN4();
            while (VAR13--)
            {
                FUN5();
            }
            break;
        case 0x20:
        case 0x30:
            VAR13 = FUN4();
            if ((VAR21 == 0) && (VAR22 == 0))
            {
                FUN3(VAR2->VAR4, VAR41, "", VAR12 & 0xF0);
                break;
            }
            if (VAR22 == 0)
                VAR28 = (VAR21 - VAR2->VAR4->VAR3 * 4) + VAR2->VAR4->VAR3 - 4;
            else
                VAR28 = VAR21 + VAR22 - 4;
            while (VAR13--)
            {
                VAR26 = VAR21 + VAR22;
                VAR27 = VAR28;
                for (VAR24 = 0; VAR24 < 4; VAR24++)
                {
                    for (VAR23 = 0; VAR23 < 4; VAR23++)
                    {
                        VAR18[VAR26++] = VAR18[VAR27++];
                    }
                    VAR26 += VAR25;
                    VAR27 += VAR25;
                }
                FUN5();
            }
            break;
        case 0x40:
        case 0x50:
            VAR13 = FUN4();
            VAR13 *= 2;
            if ((VAR21 == 0) && (VAR22 < 2 * 4))
            {
                FUN3(VAR2->VAR4, VAR41, "", VAR12 & 0xF0);
                break;
            }
            if (VAR22 == 0)
                VAR28 = (VAR21 - VAR2->VAR4->VAR3 * 4) + VAR2->VAR4->VAR3 - 4 * 2;
            else if (VAR22 == 4)
                VAR28 = (VAR21 - VAR2->VAR4->VAR3 * 4) + VAR25;
            else
                VAR28 = VAR21 + VAR22 - 4 * 2;
            if (VAR22 == 0)
                VAR29 = (VAR21 - VAR2->VAR4->VAR3 * 4) + VAR25;
            else
                VAR29 = VAR21 + VAR22 - 4;
            VAR30 = 0;
            while (VAR13--)
            {
                VAR26 = VAR21 + VAR22;
                if (VAR30)
                    VAR27 = VAR29;
                else
                    VAR27 = VAR28;
                VAR30 = !VAR30;
                for (VAR24 = 0; VAR24 < 4; VAR24++)
                {
                    for (VAR23 = 0; VAR23 < 4; VAR23++)
                    {
                        VAR18[VAR26++] = VAR18[VAR27++];
                    }
                    VAR26 += VAR25;
                    VAR27 += VAR25;
                }
                FUN5();
            }
            break;
        case 0x60:
        case 0x70:
            VAR13 = FUN4();
            VAR33 = VAR2->VAR39[VAR10++];
            while (VAR13--)
            {
                VAR26 = VAR21 + VAR22;
                for (VAR24 = 0; VAR24 < 4; VAR24++)
                {
                    for (VAR23 = 0; VAR23 < 4; VAR23++)
                    {
                        VAR18[VAR26++] = VAR33;
                    }
                    VAR26 += VAR25;
                }
                FUN5();
            }
            break;
        case 0x80:
        case 0x90:
            VAR13 = (VAR12 & 0x0F) + 1;
            if ((VAR12 & 0xF0) == 0x80)
            {
                for (VAR9 = 0; VAR9 < VAR42; VAR9++)
                {
                    VAR33 = VAR2->VAR39[VAR10++];
                    VAR32 = VAR42 * VAR34 + VAR9;
                    VAR2->VAR43[VAR32] = VAR33;
                }
                VAR32 = VAR42 * VAR34;
                VAR34++;
                if (VAR34 == VAR44)
                    VAR34 = 0;
            }
            else
                VAR32 = VAR42 * VAR2->VAR39[VAR10++];
            while (VAR13--)
            {
                VAR14 = FUN6(&VAR2->VAR39[VAR10]);
                VAR10 += 2;
                VAR17 = 0x8000;
                VAR26 = VAR21 + VAR22;
                for (VAR24 = 0; VAR24 < 4; VAR24++)
                {
                    for (VAR23 = 0; VAR23 < 4; VAR23++)
                    {
                        if (VAR14 & VAR17)
                            VAR33 = VAR32 + 1;
                        else
                            VAR33 = VAR32;
                        VAR17 >>= 1;
                        VAR18[VAR26++] = VAR2->VAR43[VAR33];
                    }
                    VAR26 += VAR25;
                }
                FUN5();
            }
            break;
        case 0xA0:
        case 0xB0:
            VAR13 = (VAR12 & 0x0F) + 1;
            if ((VAR12 & 0xF0) == 0xA0)
            {
                for (VAR9 = 0; VAR9 < VAR45; VAR9++)
                {
                    VAR33 = VAR2->VAR39[VAR10++];
                    VAR32 = VAR45 * VAR35 + VAR9;
                    VAR2->VAR46[VAR32] = VAR33;
                }
                VAR32 = VAR45 * VAR35;
                VAR35++;
                if (VAR35 == VAR44)
                    VAR35 = 0;
            }
            else
                VAR32 = VAR45 * VAR2->VAR39[VAR10++];
            while (VAR13--)
            {
                VAR14 = FUN2(&VAR2->VAR39[VAR10]);
                VAR10 += 4;
                VAR17 = 30;
                VAR26 = VAR21 + VAR22;
                for (VAR24 = 0; VAR24 < 4; VAR24++)
                {
                    for (VAR23 = 0; VAR23 < 4; VAR23++)
                    {
                        VAR33 = VAR32 + ((VAR14 >> VAR17) & 0x03);
                        VAR17 -= 2;
                        VAR18[VAR26++] = VAR2->VAR46[VAR33];
                    }
                    VAR26 += VAR25;
                }
                FUN5();
            }
            break;
        case 0xC0:
        case 0xD0:
            VAR13 = (VAR12 & 0x0F) + 1;
            if ((VAR12 & 0xF0) == 0xC0)
            {
                for (VAR9 = 0; VAR9 < VAR47; VAR9++)
                {
                    VAR33 = VAR2->VAR39[VAR10++];
                    VAR32 = VAR47 * VAR36 + VAR9;
                    VAR2->VAR48[VAR32] = VAR33;
                }
                VAR32 = VAR47 * VAR36;
                VAR36++;
                if (VAR36 == VAR44)
                    VAR36 = 0;
            }
            else
                VAR32 = VAR47 * VAR2->VAR39[VAR10++];
            while (VAR13--)
            {
                VAR15 = ((FUN6(VAR2->VAR39 + VAR10) & 0xFFF0) << 8) | (FUN6(VAR2->VAR39 + VAR10 + 2) >> 4);
                VAR16 = ((FUN6(VAR2->VAR39 + VAR10 + 4) & 0xFFF0) << 8) | ((VAR2->VAR39[VAR10 + 1] & 0x0F) << 8) | ((VAR2->VAR39[VAR10 + 3] & 0x0F) << 4) | (VAR2->VAR39[VAR10 + 5] & 0x0F);
                VAR10 += 6;
                VAR14 = VAR15;
                VAR17 = 21;
                VAR26 = VAR21 + VAR22;
                for (VAR24 = 0; VAR24 < 4; VAR24++)
                {
                    if (VAR24 == 2)
                    {
                        VAR14 = VAR16;
                        VAR17 = 21;
                    }
                    for (VAR23 = 0; VAR23 < 4; VAR23++)
                    {
                        VAR33 = VAR32 + ((VAR14 >> VAR17) & 0x07);
                        VAR17 -= 3;
                        VAR18[VAR26++] = VAR2->VAR48[VAR33];
                    }
                    VAR26 += VAR25;
                }
                FUN5();
            }
            break;
        case 0xE0:
            VAR13 = (VAR12 & 0x0F) + 1;
            while (VAR13--)
            {
                VAR26 = VAR21 + VAR22;
                for (VAR24 = 0; VAR24 < 4; VAR24++)
                {
                    for (VAR23 = 0; VAR23 < 4; VAR23++)
                    {
                        VAR18[VAR26++] = VAR2->VAR39[VAR10++];
                    }
                    VAR26 += VAR25;
                }
                FUN5();
            }
            break;
        case 0xF0:
            FUN3(VAR2->VAR4, VAR41, "");
            break;
        }
    }
}