static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    GetByteContext VAR9;
    uint32_t VAR10 = 0, VAR11;
    uint8_t VAR12, VAR13, VAR14, VAR15;
    FUN2(&VAR9, VAR4, VAR5);
    while (FUN3(&VAR9) < VAR5)
    {
        VAR13 = FUN4(&VAR9) & 0x3F;
        if (VAR13 == 0)
        {
            VAR12 = FUN5(&VAR9) & 0xC0;
            VAR12 = VAR12 >> 6;
            if (VAR12 == 0)
            {
                VAR10 += FUN5(&VAR9);
            }
            else if (VAR12 == 1)
            {
                if (VAR10 + VAR7->VAR16 >= VAR7->VAR16 * VAR7->VAR17)
                {
                    FUN6(VAR2, VAR18, "");
                    break;
                }
                VAR7->VAR19[VAR10] = FUN5(&VAR9);
                VAR7->VAR19[VAR10 + VAR7->VAR16] = FUN5(&VAR9);
                VAR10++;
            }
            else if (VAR12 == 2)
            {
                VAR10 += VAR7->VAR16;
            }
            else if (VAR12 == 3)
            {
                break;
            }
            if (VAR10 > VAR7->VAR16 * VAR7->VAR17)
            {
                FUN6(VAR2, VAR18, "");
                break;
            }
        }
        else
        {
            VAR15 = FUN4(&VAR9) & 0x80;
            VAR14 = FUN4(&VAR9) & 0x40;
            FUN7(&VAR9, 1);
            VAR11 = VAR10;
            VAR11 += FUN8(&VAR9);
            if (VAR15)
            {
                if (VAR11 < 0x10000)
                {
                    FUN6(VAR2, VAR18, "");
                    break;
                }
                VAR11 -= 0x10000;
            }
            if (VAR11 + VAR7->VAR16 + VAR13 >= VAR7->VAR16 * VAR7->VAR17)
            {
                FUN6(VAR2, VAR18, "");
                break;
            }
            else if (VAR10 + VAR7->VAR16 + VAR13 >= VAR7->VAR16 * VAR7->VAR17)
            {
                FUN6(VAR2, VAR18, "");
                break;
            }
            if (VAR14)
            {
                while (VAR13 > 0)
                {
                    VAR7->VAR19[VAR10] = VAR7->VAR14[VAR11];
                    VAR7->VAR19[VAR10 + VAR7->VAR16] = VAR7->VAR14[VAR11 + VAR7->VAR16];
                    VAR10++;
                    VAR11++;
                    VAR13--;
                }
            }
            else
            {
                while (VAR13 > 0)
                {
                    VAR7->VAR19[VAR10] = VAR7->VAR19[VAR11];
                    VAR7->VAR19[VAR10 + VAR7->VAR16] = VAR7->VAR19[VAR11 + VAR7->VAR16];
                    VAR10++;
                    VAR11++;
                    VAR13--;
                }
            }
        }
    }
}