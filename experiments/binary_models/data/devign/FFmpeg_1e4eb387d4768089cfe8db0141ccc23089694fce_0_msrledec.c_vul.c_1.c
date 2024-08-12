static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR6 *VAR7, int VAR8)
{
    VAR6 *VAR9, *VAR10;
    const VAR6 *VAR11 = VAR7;
    int VAR12, VAR13, VAR14 = VAR2->VAR15, VAR16 = 0, VAR17;
    uint16_t VAR18;
    uint32_t VAR19;
    VAR9 = VAR4->VAR7[0] + (VAR2->VAR15 - 1) * VAR4->VAR20[0];
    VAR10 = VAR4->VAR7[0] + (VAR2->VAR15) * VAR4->VAR20[0];
    while (VAR11 < VAR7 + VAR8)
    {
        VAR12 = *VAR11++;
        if (VAR12 == 0)
        {
            VAR13 = *VAR11++;
            if (VAR13 == 0)
            {
                VAR9 = VAR4->VAR7[0] + (--VAR14) * VAR4->VAR20[0];
                if (VAR14 < 0)
                {
                    FUN2(VAR2, VAR21, "");
                    return -1;
                }
                VAR16 = 0;
                continue;
            }
            else if (VAR13 == 1)
            {
                return 0;
            }
            else if (VAR13 == 2)
            {
                VAR12 = *VAR11++;
                VAR13 = *VAR11++;
                VAR14 -= VAR13;
                if (VAR14 < 0)
                {
                    FUN2(VAR2, VAR21, "");
                    return -1;
                }
                VAR16 += VAR12;
                VAR9 = VAR4->VAR7[0] + VAR14 * VAR4->VAR20[0] + VAR16 * (VAR5 >> 3);
                continue;
            }
            if (VAR9 + VAR13 * (VAR5 >> 3) > VAR10)
            {
                VAR11 += VAR13 * (VAR5 >> 3);
                continue;
            }
            if ((VAR5 == 8) || (VAR5 == 24))
            {
                for (VAR17 = 0; VAR17 < VAR13 * (VAR5 >> 3); VAR17++)
                {
                    *VAR9++ = *VAR11++;
                }
                if (VAR5 == 8 && (VAR13 & 1))
                {
                    VAR11++;
                }
            }
            else if (VAR5 == 16)
            {
                for (VAR17 = 0; VAR17 < VAR13; VAR17++)
                {
                    VAR18 = FUN3(VAR11);
                    VAR11 += 2;
                    *(VAR22 *)VAR9 = VAR18;
                    VAR9 += 2;
                }
            }
            else if (VAR5 == 32)
            {
                for (VAR17 = 0; VAR17 < VAR13; VAR17++)
                {
                    VAR19 = FUN4(VAR11);
                    VAR11 += 4;
                    *(VAR23 *)VAR9 = VAR19;
                    VAR9 += 4;
                }
            }
            VAR16 += VAR13;
        }
        else
        {
            uint8_t VAR24[3];
            switch (VAR5)
            {
            case 8:
                VAR24[0] = *VAR11++;
                break;
            case 16:
                VAR18 = FUN3(VAR11);
                VAR11 += 2;
                break;
            case 24:
                VAR24[0] = *VAR11++;
                VAR24[1] = *VAR11++;
                VAR24[2] = *VAR11++;
                break;
            case 32:
                VAR19 = FUN4(VAR11);
                VAR11 += 4;
                break;
            }
            if (VAR9 + VAR12 * (VAR5 >> 3) > VAR10)
                continue;
            for (VAR17 = 0; VAR17 < VAR12; VAR17++)
            {
                switch (VAR5)
                {
                case 8:
                    *VAR9++ = VAR24[0];
                    break;
                case 16:
                    *(VAR22 *)VAR9 = VAR18;
                    VAR9 += 2;
                    break;
                case 24:
                    *VAR9++ = VAR24[0];
                    *VAR9++ = VAR24[1];
                    *VAR9++ = VAR24[2];
                    break;
                case 32:
                    *(VAR23 *)VAR9 = VAR19;
                    VAR9 += 4;
                    break;
                }
            }
            VAR16 += VAR12;
        }
    }
    FUN2(VAR2, VAR25, "");
    return 0;
}