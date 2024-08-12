static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    VAR9 *const VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = VAR3;
    VAR12 *const VAR14 = &VAR10->VAR13;
    unsigned int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    unsigned int VAR23, VAR24;
    VAR7 *VAR25;
    const VAR7 *VAR26 = VAR8;
    const VAR27 *VAR28 = (const VAR27 *)(VAR26 + 88);
    VAR27 *VAR29;
    VAR15 = FUN2(VAR26);
    VAR18 = FUN2(VAR26 + 76);
    VAR16 = FUN3(VAR26 + 80);
    VAR17 = FUN3(VAR26 + 82);
    VAR19 = FUN4(VAR26 + 84);
    VAR21 = FUN4(VAR26 + 85);
    VAR22 = FUN4(VAR26 + 87);
    VAR26 += 92;
    if (VAR15 < 8 || VAR15 > 9)
    {
        FUN5(VAR2, VAR30, "", VAR15);
        return -1;
    }
    if (VAR19 == 8)
    {
        VAR2->VAR31 = VAR32;
        VAR26 += 1024;
    }
    else if (VAR19 == 16 || VAR19 == 32)
        VAR2->VAR31 = VAR33;
    else
    {
        FUN5(VAR2, VAR30, "", VAR19);
        return -1;
    }
    if (VAR14->VAR3[0])
        VAR2->FUN6(VAR2, VAR14);
    if (FUN7(VAR16, VAR17, 0, VAR2))
        return -1;
    if (VAR16 != VAR2->VAR34 || VAR17 != VAR2->VAR35)
        FUN8(VAR2, VAR16, VAR17);
    if (VAR2->FUN9(VAR2, VAR14) < 0)
    {
        FUN5(VAR2, VAR30, "");
        return -1;
    }
    VAR14->VAR36 = VAR37;
    VAR25 = VAR14->VAR3[0];
    VAR20 = VAR14->VAR38[0];
    if (VAR19 == 8)
    {
        VAR29 = (VAR27 *)VAR14->VAR3[1];
        for (VAR23 = 0; VAR23 < 256; VAR23++)
        {
            VAR24 = FUN10(VAR28 + VAR23);
            VAR29[VAR23] = (VAR24 >> 8) + (VAR24 << 24);
        }
        for (VAR23 = 0; VAR23 < VAR17; VAR23++)
        {
            memcpy(VAR25, VAR26, VAR16);
            VAR25 += VAR20;
            VAR26 += VAR16;
        }
    }
    else if (VAR19 == 16)
    {
        switch (VAR18)
        {
        case 0:
            if (!(VAR22 & 1))
                goto VAR39;
        case VAR40:
            FUN11(VAR26, VAR25, VAR16, VAR17, VAR20);
            break;
        case VAR41:
            FUN12(VAR26, VAR25, VAR16, VAR17, VAR20);
            break;
        default:
            goto VAR39;
        }
    }
    else if (VAR19 == 32)
    {
        switch (VAR18)
        {
        case 0x15:
        case 0x16:
            for (VAR23 = 0; VAR23 < VAR17; VAR23++)
            {
                memcpy(VAR25, VAR26, VAR16 * 4);
                VAR25 += VAR20;
                VAR26 += VAR16 * 4;
            }
            break;
        default:
            goto VAR39;
        }
    }
    for (; VAR21 > 1; VAR21--)
        VAR26 += FUN2(VAR26) + 4;
    *VAR13 = VAR10->VAR13;
    *VAR4 = sizeof(VAR42);
    return VAR26 - VAR8;
VAR39:
    FUN5(VAR2, VAR30, "", VAR18);
    return -1;
}