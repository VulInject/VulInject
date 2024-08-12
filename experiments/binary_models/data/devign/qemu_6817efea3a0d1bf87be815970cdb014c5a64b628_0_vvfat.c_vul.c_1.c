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
    VAR2->VAR21 = VAR2->VAR22 + 1;
    VAR2->VAR23 = VAR2->VAR21 + VAR2->VAR19 * 2;
    FUN3(&(VAR2->VAR11), sizeof(VAR10));
    FUN3(&(VAR2->VAR24), sizeof(VAR25));
    {
        VAR25 *VAR26 = FUN4(&(VAR2->VAR24));
        VAR26->VAR27 = 0x28;
        memcpy(VAR26->VAR28, VAR2->VAR29, sizeof(VAR26->VAR28));
    }
    FUN5(VAR2);
    VAR2->VAR30 = FUN6(VAR2, VAR2->VAR20);
    VAR11 = FUN4(&(VAR2->VAR11));
    VAR11->VAR31 = 0;
    VAR11->VAR32 = 0;
    VAR11->VAR33.VAR34.VAR35 = -1;
    VAR11->VAR36 = -1;
    VAR11->VAR37 = FUN7(VAR3);
    VAR12 = strlen(VAR11->VAR37);
    if (VAR12 > 0 && VAR11->VAR37[VAR12 - 1] == '')
        VAR11->VAR37[VAR12 - 1] = '';
    VAR11->VAR38 = VAR39;
    VAR11->VAR40 = 0;
    VAR2->VAR37 = VAR11->VAR37;
    for (VAR12 = 0, VAR13 = 0; VAR12 < VAR2->VAR11.VAR41; VAR12++)
    {
        int VAR42 = (VAR12 != 0);
        VAR11 = FUN8(&(VAR2->VAR11), VAR12);
        if (VAR11->VAR38 & VAR39)
        {
            VAR11->VAR31 = VAR13;
            if (FUN9(VAR2, VAR12))
            {
                FUN10(VAR7, "", VAR11->VAR37);
                return -1;
            }
            VAR11 = FUN8(&(VAR2->VAR11), VAR12);
        }
        else
        {
            assert(VAR11->VAR38 == VAR43);
            VAR11->VAR38 = VAR44;
            VAR11->VAR31 = VAR13;
            if (VAR11->VAR45 > 0)
            {
                VAR25 *VAR46 = FUN8(&(VAR2->VAR24), VAR11->VAR32);
                VAR11->VAR45 = VAR13 + 1 + (VAR11->VAR45 - 1) / VAR2->VAR15;
                FUN11(VAR46, VAR11->VAR31);
            }
            else
            {
                VAR11->VAR45 = VAR13 + 1;
                VAR42 = 0;
            }
        }
        assert(VAR11->VAR31 < VAR11->VAR45);
        VAR13 = VAR11->VAR45;
        if (VAR13 > VAR2->VAR30)
        {
            FUN10(VAR7, "", VAR2->VAR18, VAR2->VAR20 / 2000.0);
            return -1;
        }
        if (VAR42)
        {
            int VAR47;
            for (VAR47 = VAR11->VAR31; VAR47 < VAR11->VAR45 - 1; VAR47++)
                FUN12(VAR2, VAR47, VAR47 + 1);
            FUN12(VAR2, VAR11->VAR45 - 1, VAR2->VAR48);
        }
    }
    VAR11 = FUN8(&(VAR2->VAR11), 0);
    VAR2->VAR49 = VAR11->VAR45 * VAR2->VAR16;
    VAR2->VAR50 = VAR11->VAR45;
    FUN12(VAR2, 0, VAR2->VAR48);
    FUN12(VAR2, 1, VAR2->VAR48);
    VAR2->VAR51 = NULL;
    VAR9 = (VAR8 *)(VAR2->VAR14 + VAR2->VAR22 * 0x200);
    VAR9->VAR52[0] = 0xeb;
    VAR9->VAR52[1] = 0x3e;
    VAR9->VAR52[2] = 0x90;
    memcpy(VAR9->VAR28, "", 8);
    VAR9->VAR53 = FUN13(0x200);
    VAR9->VAR16 = VAR2->VAR16;
    VAR9->VAR54 = FUN13(1);
    VAR9->VAR55 = 0x2;
    VAR9->VAR56 = FUN13(VAR2->VAR49 * 0x10);
    VAR9->VAR57 = VAR2->VAR20 > 0xffff ? 0 : FUN13(VAR2->VAR20);
    VAR9->VAR58 = (VAR2->VAR22 > 0 ? 0xf8 : 0xf0);
    VAR2->VAR59.VAR60[0] = VAR9->VAR58;
    VAR9->VAR19 = FUN13(VAR2->VAR19);
    VAR9->VAR61 = FUN13(VAR5);
    VAR9->VAR62 = FUN13(VAR4);
    VAR9->VAR63 = FUN14(VAR2->VAR22);
    VAR9->VAR64 = FUN14(VAR2->VAR20 > 0xffff ? VAR2->VAR20 : 0);
    VAR9->VAR65.VAR66.VAR67 = VAR2->VAR22 == 0 ? 0 : 0x80;
    VAR9->VAR65.VAR66.VAR68 = 0x29;
    VAR9->VAR65.VAR66.VAR69 = FUN14(0xfabe1afd);
    memcpy(VAR9->VAR65.VAR66.VAR29, VAR2->VAR29, sizeof(VAR9->VAR65.VAR66.VAR29));
    memcpy(VAR9->VAR65.VAR66.VAR18, VAR2->VAR18 == 12 ? "" : "", 8);
    VAR9->VAR70[0] = 0x55;
    VAR9->VAR70[1] = 0xaa;
    return 0;
}