static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR3;
    VAR11 *VAR13 = &VAR9->VAR12;
    unsigned int VAR14, VAR15;
    int VAR16, VAR17;
    unsigned int VAR18;
    BiCompression VAR19;
    unsigned int VAR20;
    int VAR21, VAR22, VAR23, VAR24;
    uint32_t VAR25[3];
    VAR5 *VAR26;
    int VAR27;
    VAR5 *VAR28 = VAR6;
    if (VAR7 < 14)
    {
        FUN2(VAR2, VAR29, "", VAR7);
        return -1;
    }
    if (FUN3(&VAR6) != '' || FUN3(&VAR6) != '')
    {
        FUN2(VAR2, VAR29, "");
        return -1;
    }
    VAR14 = FUN4(&VAR6);
    if (VAR7 < VAR14)
    {
        FUN2(VAR2, VAR29, "", VAR7, VAR14);
        return -1;
    }
    VAR6 += 2;
    VAR6 += 2;
    VAR15 = FUN4(&VAR6);
    if (VAR14 <= VAR15)
    {
        FUN2(VAR2, VAR29, "", VAR14, VAR15);
        return -1;
    }
    VAR20 = FUN4(&VAR6);
    if (VAR20 + 14 > VAR15)
    {
        FUN2(VAR2, VAR29, "", VAR15);
        return -1;
    }
    VAR16 = FUN4(&VAR6);
    VAR17 = FUN4(&VAR6);
    if (FUN5(&VAR6) != 1)
    {
        FUN2(VAR2, VAR29, "");
        return -1;
    }
    VAR18 = FUN5(&VAR6);
    if (VAR20 > 16)
        VAR19 = FUN4(&VAR6);
    else
        VAR19 = VAR30;
    if (VAR19 != VAR30 && VAR19 != VAR31)
    {
        FUN2(VAR2, VAR29, "", VAR19);
        return -1;
    }
    if (VAR19 == VAR31)
    {
        VAR6 += 20;
        VAR25[0] = FUN4(&VAR6);
        VAR25[1] = FUN4(&VAR6);
        VAR25[2] = FUN4(&VAR6);
    }
    VAR2->VAR32 = VAR33;
    VAR2->VAR16 = VAR16;
    VAR2->VAR17 = VAR17 > 0 ? VAR17 : -VAR17;
    VAR2->VAR34 = VAR35;
    switch (VAR18)
    {
    case 32:
        if (VAR19 == VAR31)
        {
            VAR25[0] = (VAR25[0] >> 15) & 3;
            VAR25[1] = (VAR25[1] >> 15) & 3;
            VAR25[2] = (VAR25[2] >> 15) & 3;
            if (VAR25[0] + VAR25[1] + VAR25[2] != 3 || VAR25[0] == VAR25[1] || VAR25[0] == VAR25[2] || VAR25[1] == VAR25[2])
            {
                break;
            }
        }
        else
        {
            VAR25[0] = 2;
            VAR25[1] = 1;
            VAR25[2] = 0;
        }
        VAR2->VAR34 = VAR36;
        break;
    case 24:
        VAR2->VAR34 = VAR36;
        break;
    case 16:
        if (VAR19 == VAR30)
            VAR2->VAR34 = VAR37;
        break;
    default:
        FUN2(VAR2, VAR29, "", VAR18);
        return -1;
    }
    if (VAR2->VAR34 == VAR35)
    {
        FUN2(VAR2, VAR29, "");
        return -1;
    }
    if (VAR13->VAR3[0])
        VAR2->FUN6(VAR2, VAR13);
    VAR13->VAR38 = 0;
    if (VAR2->FUN7(VAR2, VAR13) < 0)
    {
        FUN2(VAR2, VAR29, "");
        return -1;
    }
    VAR13->VAR39 = VAR40;
    VAR13->VAR41 = 1;
    VAR6 = VAR28 + VAR15;
    VAR27 = VAR7 - VAR15;
    VAR23 = (VAR2->VAR16 * (VAR18 / 8) + 3) & ~3;
    if (VAR23 * VAR2->VAR17 > VAR27)
    {
        FUN2(VAR2, VAR29, "", VAR27, VAR23 * VAR2->VAR17);
        return -1;
    }
    if (VAR17 > 0)
    {
        VAR26 = VAR13->VAR3[0] + (VAR2->VAR17 - 1) * VAR13->VAR24[0];
        VAR24 = -VAR13->VAR24[0];
    }
    else
    {
        VAR26 = VAR13->VAR3[0];
        VAR24 = VAR13->VAR24[0];
    }
    switch (VAR18)
    {
    case 24:
        for (VAR21 = 0; VAR21 < VAR2->VAR17; VAR21++)
        {
            memcpy(VAR26, VAR6, VAR23);
            VAR6 += VAR23;
            VAR26 += VAR24;
        }
        break;
    case 16:
        for (VAR21 = 0; VAR21 < VAR2->VAR17; VAR21++)
        {
            VAR42 *VAR43 = (VAR42 *)VAR6;
            VAR42 *VAR44 = (VAR42 *)VAR26;
            for (VAR22 = 0; VAR22 < VAR2->VAR16; VAR22++)
                *VAR44++ = FUN8(*VAR43++);
            VAR6 += VAR23;
            VAR26 += VAR24;
        }
        break;
    case 32:
        for (VAR21 = 0; VAR21 < VAR2->VAR17; VAR21++)
        {
            VAR5 *VAR43 = VAR6;
            VAR5 *VAR44 = VAR26;
            for (VAR22 = 0; VAR22 < VAR2->VAR16; VAR22++)
            {
                VAR44[0] = VAR43[VAR25[2]];
                VAR44[1] = VAR43[VAR25[1]];
                VAR44[2] = VAR43[VAR25[0]];
                VAR44 += 3;
                VAR43 += 4;
            }
            VAR6 += VAR23;
            VAR26 += VAR24;
        }
        break;
    default:
        FUN2(VAR2, VAR29, "");
        return -1;
    }
    *VAR12 = VAR9->VAR12;
    *VAR4 = sizeof(VAR45);
    return VAR7;
}