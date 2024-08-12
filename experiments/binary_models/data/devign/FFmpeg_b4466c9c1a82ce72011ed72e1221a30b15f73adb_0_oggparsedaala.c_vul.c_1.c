static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    VAR6 *VAR7;
    GetByteContext VAR8;
    AVRational VAR9;
    struct VAR10 *VAR10 = VAR2->VAR11;
    struct VAR12 *VAR13 = VAR10->VAR14 + VAR3;
    VAR15 *VAR16 = VAR2->VAR14[VAR3];
    int VAR17 = VAR16->VAR18->VAR19 + VAR13->VAR20 + 2;
    VAR21 *VAR22 = VAR13->private;
    if (!(VAR13->VAR23[VAR13->VAR24] & 0x80))
        return 0;
    if (!VAR22)
    {
        VAR22 = FUN2(sizeof(*VAR22));
        if (!VAR22)
            return FUN3(VAR25);
        VAR13->private = VAR22;
        switch (VAR13->VAR23[VAR13->VAR24])
        {
        case 0x80:
            FUN4(&VAR8, VAR13->VAR23 + VAR13->VAR24, VAR13->VAR20);
            FUN5(&VAR8, VAR26.VAR27);
            VAR22->VAR28 = FUN6(&VAR8);
            VAR22->VAR29 = FUN6(&VAR8);
            VAR22->VAR30 = FUN6(&VAR8);
            VAR16->VAR18->VAR31 = FUN7(&VAR8);
            VAR16->VAR18->VAR32 = FUN7(&VAR8);
            VAR16->VAR33.VAR34 = FUN7(&VAR8);
            VAR16->VAR33.VAR35 = FUN7(&VAR8);
            VAR9.VAR34 = FUN7(&VAR8);
            VAR9.VAR35 = FUN7(&VAR8);
            if (VAR9.VAR34 < 0 && VAR9.VAR35 < 0)
            {
                FUN8(VAR2, VAR36, "");
                VAR9.VAR34 = 1;
                VAR9.VAR35 = 30;
                FUN9(VAR16, 64, VAR9.VAR35, VAR9.VAR34);
                VAR22->VAR37 = FUN7(&VAR8);
                VAR22->VAR38 = FUN6(&VAR8);
                VAR22->VAR39 = (1 << VAR22->VAR38) - 1;
                VAR22->VAR40.VAR41 = 8 + 2 * (FUN6(&VAR8) - 1);
                VAR22->VAR42 = FUN6(&VAR8);
                VAR22->VAR40.VAR43 = FUN6(&VAR8);
                for (VAR4 = 0; VAR4 < VAR22->VAR40.VAR43; VAR4++)
                {
                    VAR22->VAR40.VAR44[VAR4] = FUN6(&VAR8);
                    VAR22->VAR40.VAR45[VAR4] = FUN6(&VAR8);
                    if ((VAR16->VAR18->VAR46 = FUN10(&VAR22->VAR40)) < 0)
                        FUN8(VAR2, VAR47, "", VAR22->VAR40.VAR41, VAR22->VAR40.VAR43);
                    VAR16->VAR18->VAR48 = VAR49;
                    VAR16->VAR18->VAR50 = VAR51;
                    VAR16->VAR52 = VAR53;
                    VAR22->VAR54 = 1;
                    break;
                case 0x81:
                    if (!VAR22->VAR54)
                        FUN11(VAR2, VAR16, VAR13->VAR23 + VAR13->VAR24 + VAR26.VAR27, VAR13->VAR20 - VAR26.VAR27);
                    break;
                case 0x82:
                    if (!VAR22->VAR54)
                        break;
                default:
                    FUN8(VAR2, VAR47, "", VAR13->VAR23[VAR13->VAR24]);
                    break;
                    if ((VAR5 = FUN12(&VAR16->VAR18->VAR55, VAR17 + VAR56)) < 0)
                    {
                        VAR16->VAR18->VAR19 = 0;
                        return VAR5;
                        memset(VAR16->VAR18->VAR55 + VAR17, 0, VAR56);
                        VAR7 = VAR16->VAR18->VAR55 + VAR16->VAR18->VAR19;
                        *VAR7++ = VAR13->VAR20 >> 8;
                        *VAR7++ = VAR13->VAR20 & 0xff;
                        memcpy(VAR7, VAR13->VAR23 + VAR13->VAR24, VAR13->VAR20);
                        VAR16->VAR18->VAR19 = VAR17;
                        return 1;