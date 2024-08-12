static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    VAR10 *VAR11;
    unsigned int VAR12;
    unsigned char *VAR13;
    int VAR14;
    offset_t VAR15;
    int VAR16, VAR17;
    unsigned int VAR18;
    int64_t VAR19 = 0;
    int64_t VAR20 = 0;
    unsigned char VAR21[VAR22];
    int VAR23 = 0;
    FUN2(VAR9, 0, VAR24);
    if (FUN3(VAR9, VAR6->VAR25, VAR26) != VAR26)
        return VAR27;
    VAR6->VAR28 = 0;
    VAR6->VAR29 = 1;
    VAR6->VAR30 = 1;
    VAR11 = FUN4(VAR2, 0);
    if (!VAR11)
        return VAR31;
    FUN5(VAR11, 33, 1, 90000);
    VAR6->VAR32 = VAR11->VAR33;
    VAR11->VAR34->VAR35 = VAR36;
    VAR11->VAR34->VAR37 = VAR38;
    VAR11->VAR34->VAR39 = 0;
    VAR11->VAR34->VAR40 = FUN6(&VAR6->VAR25[12]);
    VAR11->VAR34->VAR41 = FUN6(&VAR6->VAR25[14]);
    VAR11->VAR34->VAR42.VAR43 = 1;
    VAR11->VAR34->VAR42.VAR44 = 10;
    VAR11->VAR34->VAR45 = VAR26;
    VAR11->VAR34->VAR46 = FUN7(VAR26 + VAR47);
    memcpy(VAR11->VAR34->VAR46, VAR6->VAR25, VAR26);
    VAR6->VAR48 = FUN6(&VAR6->VAR25[804]);
    if (VAR6->VAR48)
    {
        VAR11 = FUN4(VAR2, 0);
        if (!VAR11)
            return VAR31;
        FUN5(VAR11, 33, 1, 90000);
        VAR6->VAR49 = VAR11->VAR33;
        VAR11->VAR34->VAR35 = VAR50;
        VAR11->VAR34->VAR37 = VAR51;
        VAR11->VAR34->VAR39 = 0;
        VAR11->VAR34->VAR52 = VAR6->VAR53 = (VAR6->VAR25[811] & 0x80) ? 2 : 1;
        VAR11->VAR34->VAR48 = VAR6->VAR48;
        VAR11->VAR34->VAR54 = VAR6->VAR30 = FUN6(&VAR6->VAR25[806]);
        if (VAR11->VAR34->VAR54 & 0x8000)
        {
            VAR11->VAR34->VAR55 = 16;
            VAR11->VAR34->VAR54 = -(VAR11->VAR34->VAR54 - 0x10000);
            VAR6->VAR30 = -(VAR6->VAR30 - 0x10000);
        }
        else
        {
            VAR11->VAR34->VAR55 = 8;
            VAR11->VAR34->VAR56 = VAR11->VAR34->VAR48 * VAR11->VAR34->VAR55 * VAR11->VAR34->VAR52;
            VAR6->VAR29 = VAR11->VAR34->VAR52;
            VAR19 = 90000;
            VAR19 *= VAR11->VAR34->VAR54;
            VAR19 /= VAR11->VAR34->VAR48;
            VAR19 /= VAR11->VAR34->VAR52;
        }
        else
        {
            VAR19 = 90000 / 10;
            VAR12 = FUN8(&VAR6->VAR25[812]);
            VAR6->VAR57 = FUN6(&VAR6->VAR25[6]);
            VAR6->VAR58 = FUN6(&VAR6->VAR25[18]);
            FUN2(VAR9, VAR12, VAR24);
            VAR13 = NULL;
            VAR6->VAR59 = NULL;
            VAR14 = VAR6->VAR57 * 6;
            VAR13 = FUN9(VAR14);
            VAR6->VAR59 = FUN9(VAR6->VAR57 * VAR6->VAR58 * sizeof(VAR60));
            if (!VAR13 || !VAR6->VAR59)
            {
                FUN10(VAR13);
                FUN10(VAR6->VAR59);
                return VAR31;
                if (FUN3(VAR9, VAR13, VAR14) != VAR14)
                {
                    FUN10(VAR13);
                    FUN10(VAR6->VAR59);
                    return VAR27;
                    VAR18 = 0;
                    for (VAR16 = 0; VAR16 < VAR6->VAR57; VAR16++)
                    {
                        VAR15 = FUN8(&VAR13[6 * VAR16 + 2]);
                        for (VAR17 = 0; VAR17 < VAR6->VAR58; VAR17++)
                        {
                            int VAR61;
                            uint32_t VAR62;
                            FUN3(VAR9, VAR21, VAR22);
                            VAR61 = VAR21[0];
                            VAR62 = FUN8(&VAR21[2]);
                            if (!VAR62)
                                continue;
                            switch (VAR61)
                            {
                            case 1:
                                VAR6->VAR59[VAR18].VAR63 = VAR15;
                                VAR6->VAR59[VAR18].VAR64 = VAR6->VAR49;
                                VAR6->VAR59[VAR18].VAR65 = VAR62;
                                memcpy(VAR6->VAR59[VAR18].VAR66, VAR21, VAR22);
                                VAR18++;
                                break;
                            case 2:
                                VAR6->VAR59[VAR18].VAR63 = VAR15;
                                VAR6->VAR59[VAR18].VAR65 = VAR62;
                                VAR6->VAR59[VAR18].VAR64 = VAR6->VAR32;
                                memcpy(VAR6->VAR59[VAR18].VAR66, VAR21, VAR22);
                                VAR6->VAR59[VAR18].VAR67 = VAR20;
                                if (VAR23)
                                {
                                    VAR6->VAR59[VAR23].VAR67 = VAR20 - VAR19;
                                    VAR23 = VAR18;
                                    VAR18++;
                                    break;
                                    VAR15 += VAR62;
                                    VAR20 += VAR19;
                                    FUN10(VAR13);
                                    VAR6->VAR68 = 0;
                                    VAR6->VAR57 = VAR18;
                                    return 0;