static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    VAR14 *const VAR16 = &VAR12->VAR15;
    int VAR17, VAR18, VAR19, VAR20, VAR21;
    unsigned int VAR22, VAR23, VAR24, VAR25, VAR26, VAR27, VAR28, VAR29, VAR30;
    VAR7 *VAR31;
    uint8_t const *VAR32 = VAR8;
    VAR7 *VAR33;
    int VAR34 = -1;
    if (VAR8[0] != 0x0a || VAR8[1] > 5)
    {
        FUN2(VAR2, VAR35, "");
        return VAR36;
    }
    VAR17 = VAR8[2];
    VAR18 = FUN3(VAR8 + 4);
    VAR19 = FUN3(VAR8 + 6);
    VAR20 = FUN3(VAR8 + 8);
    VAR21 = FUN3(VAR8 + 10);
    if (VAR20 < VAR18 || VAR21 < VAR19)
    {
        FUN2(VAR2, VAR35, "");
        return VAR36;
    }
    VAR22 = VAR20 - VAR18 + 1;
    VAR23 = VAR21 - VAR19 + 1;
    VAR24 = VAR8[3];
    VAR25 = FUN3(VAR8 + 66);
    VAR26 = VAR8[65];
    VAR30 = VAR26 * VAR25;
    if (VAR30 < VAR22 * VAR24 * VAR26 / 8)
    {
        FUN2(VAR2, VAR35, "");
        return VAR36;
    }
    switch ((VAR26 << 8) + VAR24)
    {
    case 0x0308:
        VAR2->VAR37 = VAR38;
        break;
    case 0x0108:
    case 0x0104:
    case 0x0102:
    case 0x0101:
    case 0x0401:
    case 0x0301:
    case 0x0201:
        VAR2->VAR37 = VAR39;
        break;
    default:
        FUN2(VAR2, VAR35, "");
        return VAR36;
    }
    VAR8 += 128;
    if (VAR16->VAR3[0])
        VAR2->FUN4(VAR2, VAR16);
    if (FUN5(VAR22, VAR23, 0, VAR2))
        return VAR36;
    if (VAR22 != VAR2->VAR40 || VAR23 != VAR2->VAR41)
        FUN6(VAR2, VAR22, VAR23);
    if ((VAR34 = VAR2->FUN7(VAR2, VAR16)) < 0)
    {
        FUN2(VAR2, VAR35, "");
        return VAR34;
    }
    VAR16->VAR42 = VAR43;
    VAR31 = VAR16->VAR3[0];
    VAR27 = VAR16->VAR44[0];
    VAR33 = FUN8(VAR30);
    if (!VAR33)
        return FUN9(VAR45);
    if (VAR26 == 3 && VAR24 == 8)
    {
        for (VAR28 = 0; VAR28 < VAR23; VAR28++)
        {
            VAR8 = FUN10(VAR8, VAR33, VAR30, VAR17);
            for (VAR29 = 0; VAR29 < VAR22; VAR29++)
            {
                VAR31[3 * VAR29] = VAR33[VAR29];
                VAR31[3 * VAR29 + 1] = VAR33[VAR29 + VAR25];
                VAR31[3 * VAR29 + 2] = VAR33[VAR29 + (VAR25 << 1)];
            }
            VAR31 += VAR27;
        }
    }
    else if (VAR26 == 1 && VAR24 == 8)
    {
        const VAR7 *VAR46 = VAR32 + VAR9 - 769;
        for (VAR28 = 0; VAR28 < VAR23; VAR28++, VAR31 += VAR27)
        {
            VAR8 = FUN10(VAR8, VAR33, VAR30, VAR17);
            memcpy(VAR31, VAR33, VAR22);
        }
        if (VAR8 != VAR46)
        {
            FUN2(VAR2, VAR47, "");
            VAR8 = VAR46;
        }
        if (*VAR8++ != 12)
        {
            FUN2(VAR2, VAR35, "");
            VAR34 = VAR36;
            goto VAR48;
        }
    }
    else if (VAR26 == 1)
    {
        GetBitContext VAR12;
        for (VAR28 = 0; VAR28 < VAR23; VAR28++)
        {
            FUN11(&VAR12, VAR33, VAR30 << 3);
            VAR8 = FUN10(VAR8, VAR33, VAR30, VAR17);
            for (VAR29 = 0; VAR29 < VAR22; VAR29++)
                VAR31[VAR29] = FUN12(&VAR12, VAR24);
            VAR31 += VAR27;
        }
    }
    else
    {
        int VAR49;
        for (VAR28 = 0; VAR28 < VAR23; VAR28++)
        {
            VAR8 = FUN10(VAR8, VAR33, VAR30, VAR17);
            for (VAR29 = 0; VAR29 < VAR22; VAR29++)
            {
                int VAR50 = 0x80 >> (VAR29 & 7), VAR51 = 0;
                for (VAR49 = VAR26 - 1; VAR49 >= 0; VAR49--)
                {
                    VAR51 <<= 1;
                    VAR51 += !!(VAR33[VAR49 * VAR25 + (VAR29 >> 3)] & VAR50);
                }
                VAR31[VAR29] = VAR51;
            }
            VAR31 += VAR27;
        }
    }
    if (VAR26 == 1 && VAR24 == 8)
    {
        FUN13(&VAR8, (VAR52 *)VAR16->VAR3[1], 256);
    }
    else if (VAR24 * VAR26 == 1)
    {
        FUN14(VAR16->VAR3[1], 0xFF000000);
        FUN14(VAR16->VAR3[1] + 4, 0xFFFFFFFF);
    }
    else if (VAR24 < 8)
    {
        const VAR7 *VAR53 = VAR32 + 16;
        FUN13(&VAR53, (VAR52 *)VAR16->VAR3[1], 16);
    }
    *VAR15 = VAR12->VAR15;
    *VAR4 = sizeof(VAR14);
    VAR34 = VAR8 - VAR32;
VAR48:
    FUN15(VAR33);
    return VAR34;
}