static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    unsigned int *VAR6;
    unsigned char VAR7, VAR8, VAR9;
    GetByteContext VAR10;
    unsigned char VAR11;
    unsigned char *VAR12;
    unsigned char *VAR13;
    unsigned char VAR14;
    int VAR15;
    int VAR16, VAR17;
    int VAR18, VAR19;
    VAR16 = FUN2(&VAR2->VAR20[6]);
    VAR17 = FUN2(&VAR2->VAR20[8]);
    VAR18 = FUN2(&VAR2->VAR20[10]) - VAR16 + 1;
    VAR19 = FUN2(&VAR2->VAR20[12]) - VAR17 + 1;
    if (VAR16 < 0 || VAR18 < 0 || VAR16 >= VAR2->VAR21->VAR22 || VAR18 > VAR2->VAR21->VAR22 || VAR16 + VAR18 > VAR2->VAR21->VAR22)
    {
        FUN3(VAR2->VAR21, VAR23, "", VAR16, VAR18);
        return VAR24;
    }
    if (VAR17 < 0 || VAR19 < 0 || VAR17 >= VAR2->VAR21->VAR25 || VAR19 > VAR2->VAR21->VAR25 || VAR17 + VAR19 > VAR2->VAR21->VAR25)
    {
        FUN3(VAR2->VAR21, VAR23, "", VAR16, VAR18);
        return VAR24;
    }
    if ((VAR18 == VAR2->VAR21->VAR22 && VAR19 == VAR2->VAR21->VAR25) && (VAR16 || VAR17))
    {
        VAR2->VAR26 = VAR16;
        VAR2->VAR27 = VAR17;
    }
    VAR16 -= VAR2->VAR26;
    VAR17 -= VAR2->VAR27;
    if (VAR2->VAR28.VAR29[0] && (VAR16 || VAR17 || (VAR18 != VAR2->VAR21->VAR22) || (VAR19 != VAR2->VAR21->VAR25)))
    {
        memcpy(VAR4->VAR29[0], VAR2->VAR28.VAR29[0], VAR2->VAR21->VAR25 * VAR4->VAR30[0]);
    }
    FUN4(&VAR10, VAR2->VAR20 + 16, VAR2->VAR31 - 16);
    if (VAR2->VAR20[15] & 0x02)
    {
        FUN5(&VAR10, 2);
        VAR6 = (unsigned int *)VAR2->VAR32;
        if (FUN6(&VAR10) >= VAR33 * 3)
        {
            for (VAR5 = 0; VAR5 < VAR33; VAR5++)
            {
                VAR7 = FUN7(&VAR10) * 4;
                VAR8 = FUN7(&VAR10) * 4;
                VAR9 = FUN7(&VAR10) * 4;
                VAR6[VAR5] = (VAR7 << 16) | (VAR8 << 8) | (VAR9);
            }
        }
        else
        {
            FUN3(VAR2->VAR21, VAR23, "");
            return VAR24;
        }
        VAR2->VAR31 -= VAR33 * 3 + 2;
    }
    if (!VAR2->VAR31)
        return 0;
    if (FUN6(&VAR10) < 1)
        return VAR24;
    VAR11 = FUN7(&VAR10);
    if (VAR11 & 0x80)
    {
        FUN8(VAR10.VAR34, FUN6(&VAR10), VAR2->VAR35, VAR2->VAR36);
        VAR11 &= 0x7F;
        FUN4(&VAR10, VAR2->VAR35, VAR2->VAR36);
    }
    VAR12 = &VAR4->VAR29[0][VAR17 * VAR4->VAR30[0] + VAR16];
    VAR13 = &VAR2->VAR28.VAR29[0][VAR17 * VAR2->VAR28.VAR30[0] + VAR16];
    switch (VAR11)
    {
    case 1:
        for (VAR5 = 0; VAR5 < VAR19; VAR5++)
        {
            VAR15 = 0;
            do
            {
                VAR14 = FUN9(&VAR10);
                if (VAR14 & 0x80)
                {
                    VAR14 = (VAR14 & 0x7F) + 1;
                    if (VAR15 + VAR14 > VAR18 || FUN6(&VAR10) < VAR14)
                        return VAR24;
                    FUN10(&VAR10, &VAR12[VAR15], VAR14);
                    VAR15 += VAR14;
                }
                else
                {
                    if (VAR15 + VAR14 + 1 > VAR18 || !VAR2->VAR28.VAR29[0])
                        return VAR24;
                    memcpy(&VAR12[VAR15], &VAR13[VAR15], VAR14 + 1);
                    VAR15 += VAR14 + 1;
                }
            } while (VAR15 < VAR18);
            if (VAR15 > VAR18)
            {
                FUN3(VAR2->VAR21, VAR23, "", VAR15, VAR18);
                return VAR24;
            }
            VAR12 += VAR4->VAR30[0];
            VAR13 += VAR2->VAR28.VAR30[0];
        }
        break;
    case 2:
        for (VAR5 = 0; VAR5 < VAR19; VAR5++)
        {
            FUN10(&VAR10, VAR12, VAR18);
            VAR12 += VAR4->VAR30[0];
            VAR13 += VAR2->VAR28.VAR30[0];
        }
        break;
    case 3:
        for (VAR5 = 0; VAR5 < VAR19; VAR5++)
        {
            VAR15 = 0;
            do
            {
                VAR14 = FUN9(&VAR10);
                if (VAR14 & 0x80)
                {
                    VAR14 = (VAR14 & 0x7F) + 1;
                    if (FUN9(&VAR10) == 0xFF)
                        VAR14 = FUN11(VAR10.VAR34, &VAR12[VAR15], VAR14, FUN6(&VAR10), VAR18 - VAR15);
                    else
                        FUN10(&VAR10, &VAR12[VAR15], VAR14);
                    FUN5(&VAR10, VAR14);
                }
                else
                {
                    if (VAR15 + VAR14 + 1 > VAR18 || !VAR2->VAR28.VAR29[0])
                        return VAR24;
                    memcpy(&VAR12[VAR15], &VAR13[VAR15], VAR14 + 1);
                    VAR15 += VAR14 + 1;
                }
            } while (VAR15 < VAR18);
            if (VAR15 > VAR18)
            {
                FUN3(VAR2->VAR21, VAR23, "", VAR15, VAR18);
                return VAR24;
            }
            VAR12 += VAR4->VAR30[0];
            VAR13 += VAR2->VAR28.VAR30[0];
        }
        break;
    }
    return 0;
}