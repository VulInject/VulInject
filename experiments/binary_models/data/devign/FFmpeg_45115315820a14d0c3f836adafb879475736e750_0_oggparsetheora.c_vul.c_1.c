static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8 + VAR3;
    VAR9 *VAR10 = VAR2->VAR8[VAR3];
    VAR11 *VAR12 = VAR7->private;
    int VAR13 = VAR10->VAR14->VAR15 + VAR7->VAR16 + 2;
    int VAR17;
    VAR18 *VAR19;
    if (!(VAR7->VAR20[VAR7->VAR21] & 0x80))
        return 0;
    if (!VAR12)
    {
        VAR12 = FUN2(sizeof(*VAR12));
        if (!VAR12)
            return FUN3(VAR22);
        VAR7->private = VAR12;
    }
    switch (VAR7->VAR20[VAR7->VAR21])
    {
    case 0x80:
    {
        GetBitContext VAR23;
        AVRational VAR24;
        FUN4(&VAR23, VAR7->VAR20 + VAR7->VAR21, VAR7->VAR16 * 8);
        FUN5(&VAR23, 7 * 8);
        VAR12->VAR25 = FUN6(&VAR23, 24);
        if (VAR12->VAR25 < 0x030100)
        {
            FUN7(VAR2, VAR26, "", VAR12->VAR25);
            return FUN3(VAR27);
        }
        VAR10->VAR14->VAR28 = FUN8(&VAR23, 16) << 4;
        VAR10->VAR14->VAR29 = FUN8(&VAR23, 16) << 4;
        if (VAR12->VAR25 >= 0x030400)
            FUN9(&VAR23, 100);
        if (VAR12->VAR25 >= 0x030200)
        {
            int VAR28 = FUN6(&VAR23, 24);
            int VAR29 = FUN6(&VAR23, 24);
            if (VAR28 <= VAR10->VAR14->VAR28 && VAR28 > VAR10->VAR14->VAR28 - 16 && VAR29 <= VAR10->VAR14->VAR29 && VAR29 > VAR10->VAR14->VAR29 - 16)
            {
                VAR10->VAR14->VAR28 = VAR28;
                VAR10->VAR14->VAR29 = VAR29;
            }
            FUN9(&VAR23, 16);
        }
        VAR24.VAR30 = FUN6(&VAR23, 32);
        VAR24.VAR31 = FUN6(&VAR23, 32);
        if (!(VAR24.VAR31 > 0 && VAR24.VAR30 > 0))
        {
            FUN7(VAR2, VAR32, "");
            VAR24.VAR31 = 1;
            VAR24.VAR30 = 25;
        }
        FUN10(VAR10, 64, VAR24.VAR31, VAR24.VAR30);
        VAR10->VAR33.VAR31 = FUN6(&VAR23, 24);
        VAR10->VAR33.VAR30 = FUN6(&VAR23, 24);
        if (VAR12->VAR25 >= 0x030200)
            FUN5(&VAR23, 38);
        if (VAR12->VAR25 >= 0x304000)
            FUN9(&VAR23, 2);
        VAR12->VAR34 = FUN8(&VAR23, 5);
        VAR12->VAR35 = (1 << VAR12->VAR34) - 1;
        VAR10->VAR14->VAR36 = VAR37;
        VAR10->VAR14->VAR38 = VAR39;
        VAR10->VAR40 = VAR41;
    }
    break;
    case 0x81:
        FUN11(VAR2, &VAR10->VAR42, VAR7->VAR20 + VAR7->VAR21 + 7, VAR7->VAR16 - 7);
    case 0x82:
        if (!VAR12->VAR25)
            return VAR43;
        break;
    default:
        FUN7(VAR2, VAR26, "", VAR7->VAR20[VAR7->VAR21]);
        return VAR43;
    }
    if ((VAR17 = FUN12(&VAR10->VAR14->VAR44, VAR13 + VAR45)) < 0)
    {
        VAR10->VAR14->VAR15 = 0;
        return VAR17;
    }
    VAR19 = VAR10->VAR14->VAR44 + VAR10->VAR14->VAR15;
    *VAR19++ = VAR7->VAR16 >> 8;
    *VAR19++ = VAR7->VAR16 & 0xff;
    memcpy(VAR19, VAR7->VAR20 + VAR7->VAR21, VAR7->VAR16);
    VAR10->VAR14->VAR15 = VAR13;
    return 1;