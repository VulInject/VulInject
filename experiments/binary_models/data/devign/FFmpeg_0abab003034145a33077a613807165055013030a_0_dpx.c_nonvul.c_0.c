static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    const VAR7 *VAR9 = VAR6->VAR3 + VAR6->VAR10;
    int VAR11 = VAR6->VAR10;
    VAR12 *const VAR13 = VAR2->VAR14;
    VAR15 *VAR16 = VAR3;
    VAR15 *const VAR17 = &VAR13->VAR16;
    VAR7 *VAR18;
    int VAR19, VAR20, VAR21;
    int VAR22, VAR23;
    int VAR24, VAR25, VAR26, VAR27, VAR28, VAR29, VAR30, VAR31;
    unsigned int VAR32;
    if (VAR6->VAR10 <= 1634)
    {
        FUN2(VAR2, VAR33, "");
        return VAR34;
    }
    VAR19 = FUN3(VAR8);
    VAR8 += 4;
    if (VAR19 == FUN4(""))
    {
        VAR21 = 0;
    }
    else if (VAR19 == FUN3(""))
    {
        VAR21 = 1;
    }
    else
    {
        FUN2(VAR2, VAR33, "");
        return -1;
    }
    VAR20 = FUN5(&VAR8, VAR21);
    if (VAR6->VAR10 <= VAR20)
    {
        FUN2(VAR2, VAR33, "");
        return VAR34;
    }
    VAR8 = VAR6->VAR3 + 0x304;
    VAR24 = FUN5(&VAR8, VAR21);
    VAR25 = FUN5(&VAR8, VAR21);
    VAR8 += 20;
    VAR28 = VAR8[0];
    VAR8 += 3;
    VAR2->VAR35 = VAR27 = VAR8[0];
    VAR8 += 825;
    VAR2->VAR36.VAR37 = FUN5(&VAR8, VAR21);
    VAR2->VAR36.VAR38 = FUN5(&VAR8, VAR21);
    if (VAR2->VAR36.VAR37 > 0 && VAR2->VAR36.VAR38 > 0)
        FUN6(&VAR2->VAR36.VAR37, &VAR2->VAR36.VAR38, VAR2->VAR36.VAR37, VAR2->VAR36.VAR38, 0x10000);
    else
        VAR2->VAR36 = (VAR39){0, 1};
    switch (VAR28)
    {
    case 51:
        VAR29 = 4;
        break;
    case 50:
        VAR29 = 3;
        break;
    default:
        FUN2(VAR2, VAR33, "", VAR28);
        return -1;
    }
    switch (VAR27)
    {
    case 8:
        if (VAR29 == 4)
        {
            VAR2->VAR40 = VAR41;
        }
        else
        {
            VAR2->VAR40 = VAR42;
        }
        VAR31 = VAR29;
        VAR30 = VAR29;
        break;
    case 10:
        VAR2->VAR40 = VAR43;
        VAR30 = 6;
        VAR31 = 4;
        break;
    case 12:
    case 16:
        if (VAR21)
        {
            VAR2->VAR40 = VAR29 == 4 ? VAR44 : VAR45;
        }
        else
        {
            VAR2->VAR40 = VAR29 == 4 ? VAR46 : VAR47;
        }
        VAR30 = VAR31 = VAR29 * 2;
        break;
    default:
        FUN2(VAR2, VAR33, "", VAR27);
        return -1;
    }
    if (VAR13->VAR16.VAR3[0])
        VAR2->FUN7(VAR2, &VAR13->VAR16);
    if (FUN8(VAR24, VAR25, 0, VAR2))
        return -1;
    if (VAR24 != VAR2->VAR48 || VAR25 != VAR2->VAR49)
        FUN9(VAR2, VAR24, VAR25);
    if (VAR2->FUN10(VAR2, VAR17) < 0)
    {
        FUN2(VAR2, VAR33, "");
        return -1;
    }
    VAR8 = VAR6->VAR3 + VAR20;
    VAR18 = VAR17->VAR3[0];
    VAR26 = VAR17->VAR50[0];
    if (VAR31 * VAR2->VAR48 * VAR2->VAR49 > VAR9 - VAR8)
    {
        FUN2(VAR2, VAR33, "");
        return -1;
    }
    switch (VAR27)
    {
    case 10:
        for (VAR22 = 0; VAR22 < VAR2->VAR49; VAR22++)
        {
            VAR51 *VAR52 = (VAR51 *)VAR18;
            for (VAR23 = 0; VAR23 < VAR2->VAR48; VAR23++)
            {
                VAR32 = FUN5(&VAR8, VAR21);
                *VAR52++ = FUN11(VAR32 >> 16);
                *VAR52++ = FUN11(VAR32 >> 6);
                *VAR52++ = FUN11(VAR32 << 4);
            }
            VAR18 += VAR26;
        }
        break;
    case 8:
    case 12:
    case 16:
        if (VAR31 == VAR30)
        {
            for (VAR22 = 0; VAR22 < VAR2->VAR49; VAR22++)
            {
                memcpy(VAR18, VAR8, VAR30 * VAR2->VAR48);
                VAR18 += VAR26;
                VAR8 += VAR31 * VAR2->VAR48;
            }
        }
        else
        {
            for (VAR22 = 0; VAR22 < VAR2->VAR49; VAR22++)
            {
                VAR7 *VAR52 = VAR18;
                for (VAR23 = 0; VAR23 < VAR2->VAR48; VAR23++)
                {
                    memcpy(VAR52, VAR8, VAR30);
                    VAR52 += VAR30;
                    VAR8 += VAR31;
                }
                VAR18 += VAR26;
            }
        }
        break;
    }
    *VAR16 = VAR13->VAR16;
    *VAR4 = sizeof(VAR53);
    return VAR11;
}