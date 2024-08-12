static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    GetByteContext VAR9;
    uint32_t VAR10 = 0;
    int VAR11, VAR12, VAR13;
    uint8_t VAR14, VAR15, VAR16, VAR17, VAR18;
    FUN2(&VAR9, VAR4, VAR5);
    while (FUN3(&VAR9) < VAR5)
    {
        VAR11 = FUN4(&VAR9) & 0x1F;
        if (VAR11 == 0)
        {
            VAR14 = FUN5(&VAR9) & 0xE0;
            VAR14 = VAR14 >> 5;
            if (VAR14 == 0)
            {
                VAR7->VAR19[VAR10++] = FUN5(&VAR9);
                VAR7->VAR19[VAR10++] = FUN5(&VAR9);
            }
            else if (VAR14 == 1)
            {
                VAR10 += FUN5(&VAR9) * 2;
            }
            else if (VAR14 == 2)
            {
                VAR11 = FUN6(&VAR9);
                VAR11 *= 2;
                VAR10 += VAR11;
            }
            else if (VAR14 == 3)
            {
                VAR11 = FUN5(&VAR9) * 2;
                while (VAR11 > 0)
                {
                    VAR7->VAR19[VAR10++] = FUN4(&VAR9);
                    VAR11--;
                }
                FUN7(&VAR9, 1);
            }
            else
            {
                break;
            }
        }
        else
        {
            VAR15 = FUN4(&VAR9) & 0x20;
            VAR16 = FUN4(&VAR9) & 0x40;
            VAR17 = FUN4(&VAR9) & 0x80;
            FUN7(&VAR9, 1);
            VAR18 = FUN4(&VAR9) & 0x01;
            VAR13 = FUN6(&VAR9);
            VAR13 = (VAR13 >> 1) & 0x7FFF;
            VAR13 = VAR10 + (VAR13 * 2) - 0x8000;
            VAR12 = VAR11;
            if (!VAR17 && VAR13 + 2 * VAR11 > VAR7->VAR20 * VAR7->VAR21)
            {
                FUN8(VAR2, VAR22, "");
                break;
            }
            else if (VAR17 && VAR13 + 1 >= VAR7->VAR20 * VAR7->VAR21)
            {
                FUN8(VAR2, VAR22, "");
                break;
            }
            else if (VAR10 + VAR11 >= VAR7->VAR20 * VAR7->VAR21)
            {
                FUN8(VAR2, VAR22, "");
                break;
            }
            if (VAR17)
            {
                if (VAR13 < (!!VAR16) * (2 * VAR7->VAR20 - 1) + 2 * (VAR12 - 1))
                {
                    FUN8(VAR2, VAR22, "");
                    break;
                }
            }
            else
            {
                if (VAR13 < (!!VAR16) * (2 * VAR7->VAR20 - 1))
                {
                    FUN8(VAR2, VAR22, "");
                    break;
                }
            }
            if (VAR15)
            {
                while (VAR12 > 0)
                {
                    if (VAR16)
                    {
                        VAR7->VAR19[VAR10++] = VAR7->VAR15[VAR13 - (2 * VAR7->VAR20) + 1];
                        VAR7->VAR19[VAR10++] = VAR7->VAR15[VAR13++];
                        VAR13++;
                    }
                    else
                    {
                        VAR7->VAR19[VAR10++] = VAR7->VAR15[VAR13++];
                        VAR7->VAR19[VAR10++] = VAR7->VAR15[VAR13++];
                    }
                    if (VAR17)
                        VAR13 -= 4;
                    VAR12--;
                }
            }
            else
            {
                while (VAR12 > 0)
                {
                    if (VAR16)
                    {
                        VAR7->VAR19[VAR10++] = VAR7->VAR19[VAR13 - (2 * VAR7->VAR20) + 1];
                        VAR7->VAR19[VAR10++] = VAR7->VAR19[VAR13++];
                        VAR13++;
                    }
                    else
                    {
                        VAR7->VAR19[VAR10++] = VAR7->VAR19[VAR13++];
                        VAR7->VAR19[VAR10++] = VAR7->VAR19[VAR13++];
                    }
                    if (VAR17)
                        VAR13 -= 4;
                    VAR12--;
                }
            }
            if (VAR18)
            {
                VAR12 = VAR11;
                VAR10 -= VAR11 * 2;
                while (VAR12 > 0)
                {
                    VAR18 = VAR7->VAR19[VAR10];
                    VAR7->VAR19[VAR10] = VAR7->VAR19[VAR10 + 1];
                    VAR7->VAR19[VAR10 + 1] = VAR18;
                    VAR12--;
                    VAR10 += 2;
                }
            }
        }
    }
}