static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *const VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    VAR10 *const VAR12 = &VAR8->VAR11;
    GetByteContext VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    unsigned int VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27, VAR28;
    VAR29 *VAR30, *VAR31;
    if (VAR6->VAR32 < 128)
        return VAR33;
    FUN2(&VAR13, VAR6->VAR3, VAR6->VAR32);
    if (FUN3(&VAR13) != 0x0a || FUN3(&VAR13) > 5)
    {
        FUN4(VAR2, VAR34, "");
        return VAR33;
    }
    VAR14 = FUN3(&VAR13);
    VAR22 = FUN3(&VAR13);
    VAR15 = FUN5(&VAR13);
    VAR16 = FUN5(&VAR13);
    VAR17 = FUN5(&VAR13);
    VAR18 = FUN5(&VAR13);
    VAR2->VAR35.VAR36 = FUN5(&VAR13);
    VAR2->VAR35.VAR37 = FUN5(&VAR13);
    if (VAR17 < VAR15 || VAR18 < VAR16)
    {
        FUN4(VAR2, VAR34, "");
        return VAR33;
    }
    VAR20 = VAR17 - VAR15 + 1;
    VAR21 = VAR18 - VAR16 + 1;
    FUN6(&VAR13, 49);
    VAR24 = FUN3(&VAR13);
    VAR23 = FUN5(&VAR13);
    VAR28 = VAR24 * VAR23;
    if (VAR28 < (VAR20 * VAR22 * VAR24 + 7) / 8)
    {
        FUN4(VAR2, VAR34, "");
        return VAR33;
    }
    switch ((VAR24 << 8) + VAR22)
    {
    case 0x0308:
        VAR2->VAR38 = VAR39;
        break;
    case 0x0108:
    case 0x0104:
    case 0x0102:
    case 0x0101:
    case 0x0401:
    case 0x0301:
    case 0x0201:
        VAR2->VAR38 = VAR40;
        break;
    default:
        FUN4(VAR2, VAR34, "");
        return VAR33;
    }
    FUN6(&VAR13, 60);
    if (VAR12->VAR3[0])
        VAR2->FUN7(VAR2, VAR12);
    if ((VAR19 = FUN8(VAR20, VAR21, 0, VAR2)) < 0)
        return VAR19;
    if (VAR20 != VAR2->VAR41 || VAR21 != VAR2->VAR42)
        FUN9(VAR2, VAR20, VAR21);
    if ((VAR19 = FUN10(VAR2, VAR12)) < 0)
    {
        FUN4(VAR2, VAR34, "");
        return VAR19;
    }
    VAR12->VAR43 = VAR44;
    VAR30 = VAR12->VAR3[0];
    VAR25 = VAR12->VAR45[0];
    VAR31 = FUN11(VAR28 + VAR46);
    if (!VAR31)
        return FUN12(VAR47);
    if (VAR24 == 3 && VAR22 == 8)
    {
        for (VAR26 = 0; VAR26 < VAR21; VAR26++)
        {
            FUN13(&VAR13, VAR31, VAR28, VAR14);
            for (VAR27 = 0; VAR27 < VAR20; VAR27++)
            {
                VAR30[3 * VAR27] = VAR31[VAR27];
                VAR30[3 * VAR27 + 1] = VAR31[VAR27 + VAR23];
                VAR30[3 * VAR27 + 2] = VAR31[VAR27 + (VAR23 << 1)];
            }
            VAR30 += VAR25;
        }
    }
    else if (VAR24 == 1 && VAR22 == 8)
    {
        int VAR48 = VAR6->VAR32 - 769;
        for (VAR26 = 0; VAR26 < VAR21; VAR26++, VAR30 += VAR25)
        {
            FUN13(&VAR13, VAR31, VAR28, VAR14);
            memcpy(VAR30, VAR31, VAR20);
        }
        if (FUN14(&VAR13) != VAR48)
        {
            FUN4(VAR2, VAR49, "");
            FUN15(&VAR13, VAR48, VAR50);
        }
        if (FUN16(&VAR13) != 12)
        {
            FUN4(VAR2, VAR34, "");
            VAR19 = VAR33;
            goto VAR51;
        }
    }
    else if (VAR24 == 1)
    {
        GetBitContext VAR8;
        for (VAR26 = 0; VAR26 < VAR21; VAR26++)
        {
            FUN17(&VAR8, VAR31, VAR28);
            FUN13(&VAR13, VAR31, VAR28, VAR14);
            for (VAR27 = 0; VAR27 < VAR20; VAR27++)
                VAR30[VAR27] = FUN18(&VAR8, VAR22);
            VAR30 += VAR25;
        }
    }
    else
    {
        int VAR52;
        for (VAR26 = 0; VAR26 < VAR21; VAR26++)
        {
            FUN13(&VAR13, VAR31, VAR28, VAR14);
            for (VAR27 = 0; VAR27 < VAR20; VAR27++)
            {
                int VAR53 = 0x80 >> (VAR27 & 7), VAR54 = 0;
                for (VAR52 = VAR24 - 1; VAR52 >= 0; VAR52--)
                {
                    VAR54 <<= 1;
                    VAR54 += !!(VAR31[VAR52 * VAR23 + (VAR27 >> 3)] & VAR53);
                }
                VAR30[VAR27] = VAR54;
            }
            VAR30 += VAR25;
        }
    }
    VAR19 = FUN14(&VAR13);
    if (VAR24 == 1 && VAR22 == 8)
    {
        FUN19(&VAR13, (VAR55 *)VAR12->VAR3[1], 256);
        VAR19 += 256 * 3;
    }
    else if (VAR22 * VAR24 == 1)
    {
        FUN20(VAR12->VAR3[1], 0xFF000000);
        FUN20(VAR12->VAR3[1] + 4, 0xFFFFFFFF);
    }
    else if (VAR22 < 8)
    {
        FUN15(&VAR13, 16, VAR50);
        FUN19(&VAR13, (VAR55 *)VAR12->VAR3[1], 16);
    }
    *VAR11 = VAR8->VAR11;
    *VAR4 = 1;
VAR51:
    FUN21(VAR31);
    return VAR19;
}