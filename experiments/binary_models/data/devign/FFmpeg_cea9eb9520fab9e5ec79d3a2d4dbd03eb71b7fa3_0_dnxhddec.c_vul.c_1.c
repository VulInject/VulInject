static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7, int VAR8)
{
    static const uint8_t VAR9[] = {0x00, 0x00, 0x02, 0x80, 0x01};
    static const uint8_t VAR10[] = {0x00, 0x00, 0x02, 0x80, 0x02};
    static const uint8_t VAR11[] = {0x00, 0x00, 0x02, 0x80, 0x03};
    static const uint8_t VAR12[] = {0x00, 0x00, 0x03, 0x8C, 0x03};
    int VAR13, VAR14, VAR15;
    int VAR16 = VAR2->VAR17, VAR18;
    int VAR19 = VAR2->VAR20;
    if (VAR7 < 0x280)
    {
        FUN2(VAR2->VAR21, VAR22, "", VAR7);
        return VAR23;
    }
    if (memcmp(VAR6, VAR9, 5) && memcmp(VAR6, VAR10, 5) && memcmp(VAR6, VAR11, 5) && memcmp(VAR6, VAR12, 5))
    {
        FUN2(VAR2->VAR21, VAR22, "", VAR6[0], VAR6[1], VAR6[2], VAR6[3], VAR6[4]);
        return VAR23;
    }
    if (VAR6[5] & 2)
    {
        VAR2->VAR24 = VAR6[5] & 1;
        VAR4->VAR25 = 1;
        VAR4->VAR26 = VAR8 ^ VAR2->VAR24;
        FUN2(VAR2->VAR21, VAR27, "", VAR6[5] & 3, VAR2->VAR24);
    }
    else
    {
        VAR2->VAR24 = 0;
    }
    VAR2->VAR28 = (VAR6[0x6] >> 5) & 1;
    VAR2->VAR29 = FUN3(VAR6 + 0x18);
    VAR2->VAR30 = FUN3(VAR6 + 0x1a);
    switch (VAR6[0x21] >> 5)
    {
    case 1:
        VAR18 = 8;
        break;
    case 2:
        VAR18 = 10;
        break;
    case 3:
        VAR18 = 12;
        break;
    default:
        FUN2(VAR2->VAR21, VAR22, "", VAR6[0x21] >> 5);
        return VAR23;
    }
    VAR14 = FUN4(VAR6 + 0x28);
    if ((VAR15 = FUN5(VAR2, VAR14, VAR18)) < 0)
        return VAR15;
    if (VAR2->VAR28 && VAR2->VAR31->VAR14 != 1260)
        FUN2(VAR2->VAR21, VAR32, "");
    VAR2->VAR33 = VAR6[0x2C] & 7;
    if (VAR2->VAR33 && VAR2->VAR31->VAR14 != 1256 && VAR2->VAR31->VAR14 != 1270)
        FUN2(VAR2->VAR21, VAR32, "");
    VAR2->VAR34 = (VAR6[0x2C] >> 6) & 1;
    if (VAR2->VAR34)
    {
        if (VAR18 == 8)
        {
            FUN6(VAR2->VAR21, "");
            return VAR23;
        }
        else if (VAR18 == 10)
        {
            VAR2->VAR35 = VAR36;
            VAR2->VAR37 = VAR2->VAR33 ? VAR38 : VAR39;
        }
        else
        {
            VAR2->VAR35 = VAR40;
            VAR2->VAR37 = VAR2->VAR33 ? VAR41 : VAR42;
        }
    }
    else if (VAR18 == 12)
    {
        VAR2->VAR35 = VAR43;
        VAR2->VAR37 = VAR44;
    }
    else if (VAR18 == 10)
    {
        VAR2->VAR35 = VAR45;
        VAR2->VAR37 = VAR46;
    }
    else
    {
        VAR2->VAR35 = VAR47;
        VAR2->VAR37 = VAR48;
    }
    VAR2->VAR21->VAR49 = VAR2->VAR17 = VAR18;
    if (VAR2->VAR17 != VAR16)
    {
        FUN7(&VAR2->VAR50, VAR2->VAR21);
        FUN8(&VAR2->VAR51, VAR2->VAR21);
        FUN9(VAR2->VAR51.VAR52, &VAR2->VAR53, VAR54);
    }
    if (VAR2->VAR30 != VAR2->VAR31->VAR30 && VAR2->VAR31->VAR30 != VAR55)
    {
        FUN10(&VAR2->VAR21->VAR56.VAR57, &VAR2->VAR21->VAR56.VAR58, VAR2->VAR30, VAR2->VAR31->VAR30, 255);
        VAR2->VAR30 = VAR2->VAR31->VAR30;
    }
    if (VAR7 < VAR2->VAR31->VAR59)
    {
        FUN2(VAR2->VAR21, VAR22, "", VAR7, VAR2->VAR31->VAR59);
        return VAR23;
    }
    VAR2->VAR60 = (VAR2->VAR30 + 15) >> 4;
    VAR2->VAR20 = VAR6[0x16d];
    if ((VAR2->VAR29 + 15) >> 4 == VAR2->VAR20 && VAR4->VAR25)
        VAR2->VAR29 <<= 1;
    FUN2(VAR2->VAR21, VAR61, "", VAR2->VAR30, VAR2->VAR29, VAR2->VAR34 ? "" : "", VAR2->VAR17, VAR2->VAR28, VAR2->VAR33);
    if (!memcmp(VAR6, VAR12, 5))
    {
        VAR2->VAR62 = 0x170 + (VAR2->VAR20 << 2);
    }
    else
    {
        if (VAR2->VAR20 > 68 || (VAR2->VAR20 << VAR4->VAR25) > (VAR2->VAR29 + 15) >> 4)
        {
            FUN2(VAR2->VAR21, VAR22, "", VAR2->VAR20);
            return VAR23;
        }
        VAR2->VAR62 = 0x280;
    }
    if (VAR7 < VAR2->VAR62)
    {
        FUN2(VAR2->VAR21, VAR22, "", VAR7, VAR2->VAR62);
        return VAR23;
    }
    if (VAR2->VAR20 != VAR19)
    {
        FUN11(&VAR2->VAR63);
        VAR2->VAR63 = FUN12(VAR2->VAR20, sizeof(VAR64));
        if (!VAR2->VAR63)
            return FUN13(VAR65);
    }
    for (VAR13 = 0; VAR13 < VAR2->VAR20; VAR13++)
    {
        VAR2->VAR63[VAR13] = FUN4(VAR6 + 0x170 + (VAR13 << 2));
        FUN14(VAR2->VAR21, "", VAR13, 0x170 + (VAR13 << 2), VAR2->VAR63[VAR13]);
        if (VAR7 - VAR2->VAR62 < VAR2->VAR63[VAR13])
        {
            FUN2(VAR2->VAR21, VAR22, "", VAR2->VAR63[VAR13], VAR7 - VAR2->VAR62);
            return VAR23;
        }
    }
    return 0;
}