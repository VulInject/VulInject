static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9;
    VAR10 *VAR11;
    unsigned int VAR12;
    unsigned int VAR13;
    memset(&(VAR2->VAR14[0]), 0, 0x40 * 0x200);
    VAR2->VAR15 = VAR2->VAR16 * 0x200;
    VAR2->VAR17 = FUN2(VAR2->VAR15);
    VAR12 = 1 + VAR2->VAR16 * 0x200 * 8 / VAR2->VAR18;
    VAR2->VAR19 = (VAR2->VAR20 + VAR12) / VAR12;
    FUN3(&(VAR2->VAR11), sizeof(VAR10));
    FUN3(&(VAR2->VAR21), sizeof(VAR22));
    {
        VAR22 *VAR23 = FUN4(&(VAR2->VAR21));
        VAR23->VAR24 = 0x28;
        memcpy(VAR23->VAR25, VAR2->VAR26, sizeof(VAR23->VAR25));
    }
    FUN5(VAR2);
    VAR2->VAR27 = VAR2->VAR28 + VAR2->VAR19 * 2;
    VAR2->VAR29 = FUN6(VAR2, VAR2->VAR20);
    VAR11 = FUN4(&(VAR2->VAR11));
    VAR11->VAR30 = 0;
    VAR11->VAR31 = 0;
    VAR11->VAR32.VAR33.VAR34 = -1;
    VAR11->VAR35 = -1;
    VAR11->VAR36 = FUN7(VAR3);
    VAR12 = strlen(VAR11->VAR36);
    if (VAR12 > 0 && VAR11->VAR36[VAR12 - 1] == '')
        VAR11->VAR36[VAR12 - 1] = '';
    VAR11->VAR37 = VAR38;
    VAR11->VAR39 = 0;
    VAR2->VAR36 = VAR11->VAR36;
    for (VAR12 = 0, VAR13 = 0; VAR12 < VAR2->VAR11.VAR40; VAR12++)
    {
        int VAR41 = (VAR12 != 0);
        VAR11 = FUN8(&(VAR2->VAR11), VAR12);
        if (VAR11->VAR37 & VAR38)
        {
            VAR11->VAR30 = VAR13;
            if (FUN9(VAR2, VAR12))
            {
                FUN10(VAR7, "", VAR11->VAR36);
                return -1;
            }
            VAR11 = FUN8(&(VAR2->VAR11), VAR12);
        }
        else
        {
            assert(VAR11->VAR37 == VAR42);
            VAR11->VAR37 = VAR43;
            VAR11->VAR30 = VAR13;
            if (VAR11->VAR44 > 0)
            {
                VAR22 *VAR45 = FUN8(&(VAR2->VAR21), VAR11->VAR31);
                VAR11->VAR44 = VAR13 + 1 + (VAR11->VAR44 - 1) / VAR2->VAR15;
                FUN11(VAR45, VAR11->VAR30);
            }
            else
            {
                VAR11->VAR44 = VAR13 + 1;
                VAR41 = 0;
            }
        }
        assert(VAR11->VAR30 < VAR11->VAR44);
        VAR13 = VAR11->VAR44;
        if (VAR13 > VAR2->VAR29)
        {
            FUN10(VAR7, "", VAR2->VAR18, VAR2->VAR20 / 2000.0);
            return -1;
        }
        if (VAR41)
        {
            int VAR46;
            for (VAR46 = VAR11->VAR30; VAR46 < VAR11->VAR44 - 1; VAR46++)
                FUN12(VAR2, VAR46, VAR46 + 1);
            FUN12(VAR2, VAR11->VAR44 - 1, VAR2->VAR47);
        }
    }
    VAR11 = FUN8(&(VAR2->VAR11), 0);
    VAR2->VAR48 = VAR11->VAR44 * VAR2->VAR16;
    VAR2->VAR49 = VAR11->VAR44;
    FUN12(VAR2, 0, VAR2->VAR47);
    FUN12(VAR2, 1, VAR2->VAR47);
    VAR2->VAR50 = NULL;
    VAR9 = (VAR8 *)(VAR2->VAR14 + (VAR2->VAR28 - 1) * 0x200);
    VAR9->VAR51[0] = 0xeb;
    VAR9->VAR51[1] = 0x3e;
    VAR9->VAR51[2] = 0x90;
    memcpy(VAR9->VAR25, "", 8);
    VAR9->VAR52 = FUN13(0x200);
    VAR9->VAR16 = VAR2->VAR16;
    VAR9->VAR53 = FUN13(1);
    VAR9->VAR54 = 0x2;
    VAR9->VAR55 = FUN13(VAR2->VAR48 * 0x10);
    VAR9->VAR56 = VAR2->VAR20 > 0xffff ? 0 : FUN13(VAR2->VAR20);
    VAR9->VAR57 = (VAR2->VAR28 > 1 ? 0xf8 : 0xf0);
    VAR2->VAR58.VAR59[0] = VAR9->VAR57;
    VAR9->VAR19 = FUN13(VAR2->VAR19);
    VAR9->VAR60 = FUN13(VAR5);
    VAR9->VAR61 = FUN13(VAR4);
    VAR9->VAR62 = FUN14(VAR2->VAR28 == 1 ? 0 : 0x3f);
    VAR9->VAR63 = FUN14(VAR2->VAR20 > 0xffff ? VAR2->VAR20 : 0);
    VAR9->VAR64.VAR65.VAR66 = VAR2->VAR28 == 1 ? 0 : 0x80;
    VAR9->VAR64.VAR65.VAR67 = 0;
    VAR9->VAR64.VAR65.VAR68 = 0x29;
    VAR9->VAR64.VAR65.VAR69 = FUN14(0xfabe1afd);
    memcpy(VAR9->VAR64.VAR65.VAR26, VAR2->VAR26, sizeof(VAR9->VAR64.VAR65.VAR26));
    memcpy(VAR9->VAR18, (VAR2->VAR18 == 12 ? "" : VAR2->VAR18 == 16 ? ""
                                                                                     : ""),
           8);
    VAR9->VAR70[0] = 0x55;
    VAR9->VAR70[1] = 0xaa;
    return 0;
}