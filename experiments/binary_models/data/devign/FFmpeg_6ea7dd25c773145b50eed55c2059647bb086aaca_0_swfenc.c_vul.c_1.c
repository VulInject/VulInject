static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    PutBitContext VAR8;
    uint8_t VAR9[256];
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15;
    VAR4->VAR16 = 0;
    VAR4->VAR17 = 0;
    VAR4->VAR18 = 0;
    for (VAR10 = 0; VAR10 < VAR2->VAR19; VAR10++)
    {
        VAR20 *VAR21 = VAR2->VAR22[VAR10]->VAR23;
        if (VAR21->VAR24 == VAR25)
        {
            if (VAR4->VAR26)
            {
                FUN2(VAR2, VAR27, "");
                return VAR28;
                if (VAR21->VAR29 == VAR30)
                {
                    if (!VAR21->VAR31)
                    {
                        FUN2(VAR2, VAR27, "");
                        return -1;
                        VAR4->VAR26 = VAR21;
                        VAR4->VAR32 = FUN3(VAR33);
                        if (!VAR4->VAR32)
                            return FUN4(VAR34);
                    }
                    else
                    {
                        FUN2(VAR2, VAR27, "");
                        return -1;
                    }
                    else
                    {
                        if (VAR4->VAR35)
                        {
                            FUN2(VAR2, VAR27, "");
                            return VAR28;
                            if (VAR21->VAR29 == VAR36 || VAR21->VAR29 == VAR37 || VAR21->VAR29 == VAR38)
                            {
                                VAR4->VAR39 = VAR2->VAR22[VAR10];
                                VAR4->VAR35 = VAR21;
                            }
                            else
                            {
                                FUN2(VAR2, VAR27, "");
                                return -1;
                                if (!VAR4->VAR35)
                                {
                                    VAR11 = 320;
                                    VAR12 = 200;
                                    VAR13 = 10;
                                    VAR14 = 1;
                                }
                                else
                                {
                                    VAR11 = VAR4->VAR35->VAR11;
                                    VAR12 = VAR4->VAR35->VAR12;
                                    VAR13 = VAR4->VAR39->VAR40.VAR41;
                                    VAR14 = VAR4->VAR39->VAR40.VAR42;
                                    if (!VAR4->VAR26)
                                        VAR4->VAR43 = (44100LL * VAR14) / VAR13;
                                    else
                                        VAR4->VAR43 = (VAR4->VAR26->VAR44 * VAR14) / VAR13;
                                    FUN5(VAR7, "", 3);
                                    if (!strcmp("", VAR2->VAR45->VAR46))
                                        VAR15 = 9;
                                    else if (VAR4->VAR35 && VAR4->VAR35->VAR29 == VAR36)
                                        VAR15 = 8;
                                    else if (VAR4->VAR35 && VAR4->VAR35->VAR29 == VAR37)
                                        VAR15 = 6;
                                    else
                                        VAR15 = 4;
                                    FUN6(VAR7, VAR15);
                                    FUN7(VAR7, VAR47);
                                    FUN8(VAR7, 0, VAR11 * 20, 0, VAR12 * 20);
                                    FUN9(VAR7, (VAR13 * 256) / VAR14);
                                    VAR4->VAR48 = FUN10(VAR7);
                                    FUN9(VAR7, (VAR49)(VAR50 * (VAR51)VAR13 / VAR14));
                                    if (VAR15 == 9)
                                    {
                                        FUN11(VAR2, VAR52);
                                        FUN7(VAR7, 1 << 3);
                                        FUN12(VAR2);
                                        if (VAR4->VAR35 && VAR4->VAR35->VAR29 == VAR38)
                                        {
                                            FUN11(VAR2, VAR53);
                                            FUN9(VAR7, VAR54);
                                            FUN8(VAR7, 0, VAR11, 0, VAR12);
                                            FUN6(VAR7, 1);
                                            FUN6(VAR7, 0x41);
                                            FUN9(VAR7, VAR55);
                                            FUN13(VAR7, 1 << VAR56, 0, 0, 1 << VAR56, 0, 0);
                                            FUN6(VAR7, 0);
                                            FUN14(&VAR8, VAR9, sizeof(VAR9));
                                            FUN15(&VAR8, 4, 1);
                                            FUN15(&VAR8, 4, 0);
                                            FUN15(&VAR8, 1, 0);
                                            FUN15(&VAR8, 5, VAR57 | VAR58);
                                            FUN15(&VAR8, 5, 1);
                                            FUN15(&VAR8, 1, 0);
                                            FUN15(&VAR8, 1, 0);
                                            FUN15(&VAR8, 1, 1);
                                            FUN16(&VAR8, VAR11, 0);
                                            FUN16(&VAR8, 0, VAR12);
                                            FUN16(&VAR8, -VAR11, 0);
                                            FUN16(&VAR8, 0, -VAR12);
                                            FUN15(&VAR8, 1, 0);
                                            FUN15(&VAR8, 5, 0);
                                            FUN17(&VAR8);
                                            FUN5(VAR7, VAR9, FUN18(&VAR8) - VAR8.VAR59);
                                            FUN12(VAR2);
                                            if (VAR4->VAR26 && VAR4->VAR26->VAR29 == VAR30)
                                            {
                                                int VAR60 = 0;
                                                FUN11(VAR2, VAR61);
                                                switch (VAR4->VAR26->VAR44)
                                                {
                                                case 11025:
                                                    VAR60 |= 1 << 2;
                                                    break;
                                                case 22050:
                                                    VAR60 |= 2 << 2;
                                                    break;
                                                case 44100:
                                                    VAR60 |= 3 << 2;
                                                    break;
                                                default:
                                                    FUN2(VAR2, VAR27, "");
                                                    return -1;
                                                    VAR60 |= 0x02;
                                                    if (VAR4->VAR26->VAR62 == 2)
                                                        VAR60 |= 0x01;
                                                    FUN6(VAR2->VAR7, VAR60);
                                                    VAR60 |= 0x20;
                                                    FUN6(VAR2->VAR7, VAR60);
                                                    FUN9(VAR2->VAR7, VAR4->VAR43);
                                                    FUN9(VAR2->VAR7, 0);
                                                    FUN12(VAR2);
                                                    FUN19(VAR2->VAR7);
                                                    return 0;