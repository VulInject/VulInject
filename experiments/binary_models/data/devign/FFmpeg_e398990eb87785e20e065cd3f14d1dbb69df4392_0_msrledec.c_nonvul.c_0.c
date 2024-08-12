static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9, *VAR10;
    int VAR11, VAR12, VAR13 = VAR2->VAR14 - 1, VAR15 = 0, VAR16;
    uint16_t VAR17;
    uint32_t VAR18;
    unsigned int VAR19 = FUN2(VAR4->VAR20[0]) / (VAR5 >> 3);
    VAR9 = VAR4->VAR21[0] + (VAR2->VAR14 - 1) * VAR4->VAR20[0];
    VAR10 = VAR9 + FUN2(VAR4->VAR20[0]);
    while (FUN3(VAR7) > 0)
    {
        VAR11 = FUN4(VAR7);
        if (VAR11 == 0)
        {
            VAR12 = FUN5(VAR7);
            if (VAR12 == 0)
            {
                if (--VAR13 < 0)
                {
                    if (FUN6(VAR7) == 1)
                    {
                        return 0;
                    }
                    else
                    {
                        FUN7(VAR2, VAR22, "", FUN3(VAR7));
                        return VAR23;
                    }
                }
                VAR9 = VAR4->VAR21[0] + VAR13 * VAR4->VAR20[0];
                VAR10 = VAR9 + FUN2(VAR4->VAR20[0]);
                VAR15 = 0;
                continue;
            }
            else if (VAR12 == 1)
            {
                return 0;
            }
            else if (VAR12 == 2)
            {
                VAR11 = FUN5(VAR7);
                VAR12 = FUN5(VAR7);
                VAR13 -= VAR12;
                VAR15 += VAR11;
                if (VAR13 < 0 || VAR15 >= VAR19)
                {
                    FUN7(VAR2, VAR22, "");
                    return -1;
                }
                VAR9 = VAR4->VAR21[0] + VAR13 * VAR4->VAR20[0] + VAR15 * (VAR5 >> 3);
                VAR10 = VAR4->VAR21[0] + VAR13 * VAR4->VAR20[0] + FUN2(VAR4->VAR20[0]);
                continue;
            }
            if (VAR9 + VAR12 * (VAR5 >> 3) > VAR10)
            {
                FUN8(VAR7, 2 * (VAR5 >> 3));
                continue;
            }
            else if (FUN3(VAR7) < VAR12 * (VAR5 >> 3))
            {
                FUN7(VAR2, VAR22, "");
                return VAR23;
            }
            if ((VAR5 == 8) || (VAR5 == 24))
            {
                for (VAR16 = 0; VAR16 < VAR12 * (VAR5 >> 3); VAR16++)
                {
                    *VAR9++ = FUN4(VAR7);
                }
                if (VAR5 == 8 && (VAR12 & 1))
                {
                    FUN8(VAR7, 1);
                }
            }
            else if (VAR5 == 16)
            {
                for (VAR16 = 0; VAR16 < VAR12; VAR16++)
                {
                    *(VAR24 *)VAR9 = FUN9(VAR7);
                    VAR9 += 2;
                }
            }
            else if (VAR5 == 32)
            {
                for (VAR16 = 0; VAR16 < VAR12; VAR16++)
                {
                    *(VAR25 *)VAR9 = FUN10(VAR7);
                    VAR9 += 4;
                }
            }
            VAR15 += VAR12;
        }
        else
        {
            uint8_t VAR26[3];
            if (VAR9 + VAR11 * (VAR5 >> 3) > VAR10)
                continue;
            switch (VAR5)
            {
            case 8:
                VAR26[0] = FUN5(VAR7);
                for (VAR16 = 0; VAR16 < VAR11; VAR16++)
                    *VAR9++ = VAR26[0];
                break;
            case 16:
                VAR17 = FUN11(VAR7);
                for (VAR16 = 0; VAR16 < VAR11; VAR16++)
                {
                    *(VAR24 *)VAR9 = VAR17;
                    VAR9 += 2;
                }
                break;
            case 24:
                VAR26[0] = FUN5(VAR7);
                VAR26[1] = FUN5(VAR7);
                VAR26[2] = FUN5(VAR7);
                for (VAR16 = 0; VAR16 < VAR11; VAR16++)
                {
                    *VAR9++ = VAR26[0];
                    *VAR9++ = VAR26[1];
                    *VAR9++ = VAR26[2];
                }
                break;
            case 32:
                VAR18 = FUN12(VAR7);
                for (VAR16 = 0; VAR16 < VAR11; VAR16++)
                {
                    *(VAR25 *)VAR9 = VAR18;
                    VAR9 += 4;
                }
                break;
            }
            VAR15 += VAR11;
        }
    }
    FUN7(VAR2, VAR27, "");
    return 0;
}