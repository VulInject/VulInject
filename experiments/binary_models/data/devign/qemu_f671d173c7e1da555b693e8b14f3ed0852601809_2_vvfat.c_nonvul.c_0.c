static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    unsigned int VAR10;
    unsigned int VAR11;
    memset(&(VAR2->VAR12[0]), 0, 0x40 * 0x200);
    VAR2->VAR13 = VAR2->VAR14 * 0x200;
    VAR2->VAR15 = FUN2(VAR2->VAR13);
    VAR10 = 1 + VAR2->VAR14 * 0x200 * 8 / VAR2->VAR16;
    VAR2->VAR17 = (VAR2->VAR18 + VAR10) / VAR10;
    FUN3(&(VAR2->VAR9), sizeof(VAR8));
    FUN3(&(VAR2->VAR19), sizeof(VAR20));
    {
        VAR20 *VAR21 = FUN4(&(VAR2->VAR19));
        VAR21->VAR22 = 0x28;
        memcpy(VAR21->VAR23, "", sizeof(VAR21->VAR23));
    }
    FUN5(VAR2);
    VAR2->VAR24 = VAR2->VAR25 + VAR2->VAR17 * 2;
    VAR2->VAR26 = FUN6(VAR2, VAR2->VAR18);
    VAR9 = FUN4(&(VAR2->VAR9));
    VAR9->VAR27 = 0;
    VAR9->VAR28 = 0;
    VAR9->VAR29.VAR30.VAR31 = -1;
    VAR9->VAR32 = -1;
    VAR9->VAR33 = FUN7(VAR3);
    VAR10 = strlen(VAR9->VAR33);
    if (VAR10 > 0 && VAR9->VAR33[VAR10 - 1] == '')
        VAR9->VAR33[VAR10 - 1] = '';
    VAR9->VAR34 = VAR35;
    VAR9->VAR36 = 0;
    VAR2->VAR33 = VAR9->VAR33;
    for (VAR10 = 0, VAR11 = 0; VAR10 < VAR2->VAR9.VAR37; VAR10++)
    {
        int VAR38 = (VAR10 != 0);
        VAR9 = FUN8(&(VAR2->VAR9), VAR10);
        if (VAR9->VAR34 & VAR35)
        {
            VAR9->VAR27 = VAR11;
            if (FUN9(VAR2, VAR10))
            {
                fprintf(VAR39, "", VAR9->VAR33);
                return -1;
            }
            VAR9 = FUN8(&(VAR2->VAR9), VAR10);
        }
        else
        {
            assert(VAR9->VAR34 == VAR40);
            VAR9->VAR34 = VAR41;
            VAR9->VAR27 = VAR11;
            if (VAR9->VAR42 > 0)
            {
                VAR20 *VAR43 = FUN8(&(VAR2->VAR19), VAR9->VAR28);
                VAR9->VAR42 = VAR11 + 1 + (VAR9->VAR42 - 1) / VAR2->VAR13;
                FUN10(VAR43, VAR9->VAR27);
            }
            else
            {
                VAR9->VAR42 = VAR11 + 1;
                VAR38 = 0;
            }
        }
        assert(VAR9->VAR27 < VAR9->VAR42);
        VAR11 = VAR9->VAR42;
        if (VAR11 > VAR2->VAR26)
        {
            fprintf(VAR39, "", VAR2->VAR16, VAR2->VAR18 / 2000.0);
            return -VAR44;
        }
        if (VAR38)
        {
            int VAR45;
            for (VAR45 = VAR9->VAR27; VAR45 < VAR9->VAR42 - 1; VAR45++)
                FUN11(VAR2, VAR45, VAR45 + 1);
            FUN11(VAR2, VAR9->VAR42 - 1, VAR2->VAR46);
        }
    }
    VAR9 = FUN8(&(VAR2->VAR9), 0);
    VAR2->VAR47 = VAR9->VAR42 * VAR2->VAR14;
    VAR2->VAR48 = VAR9->VAR42;
    FUN11(VAR2, 0, VAR2->VAR46);
    FUN11(VAR2, 1, VAR2->VAR46);
    VAR2->VAR49 = NULL;
    VAR7 = (VAR6 *)(VAR2->VAR12 + (VAR2->VAR25 - 1) * 0x200);
    VAR7->VAR50[0] = 0xeb;
    VAR7->VAR50[1] = 0x3e;
    VAR7->VAR50[2] = 0x90;
    memcpy(VAR7->VAR23, "", 8);
    VAR7->VAR51 = FUN12(0x200);
    VAR7->VAR14 = VAR2->VAR14;
    VAR7->VAR52 = FUN12(1);
    VAR7->VAR53 = 0x2;
    VAR7->VAR54 = FUN12(VAR2->VAR47 * 0x10);
    VAR7->VAR55 = VAR2->VAR18 > 0xffff ? 0 : FUN12(VAR2->VAR18);
    VAR7->VAR56 = (VAR2->VAR25 > 1 ? 0xf8 : 0xf0);
    VAR2->VAR57.VAR58[0] = VAR7->VAR56;
    VAR7->VAR17 = FUN12(VAR2->VAR17);
    VAR7->VAR59 = FUN12(VAR5);
    VAR7->VAR60 = FUN12(VAR4);
    VAR7->VAR61 = FUN13(VAR2->VAR25 == 1 ? 0 : 0x3f);
    VAR7->VAR62 = FUN13(VAR2->VAR18 > 0xffff ? VAR2->VAR18 : 0);
    VAR7->VAR63.VAR64.VAR65 = VAR2->VAR25 == 1 ? 0 : 0x80;
    VAR7->VAR63.VAR64.VAR66 = 0;
    VAR7->VAR63.VAR64.VAR67 = 0x29;
    VAR7->VAR63.VAR64.VAR68 = FUN13(0xfabe1afd);
    memcpy(VAR7->VAR63.VAR64.VAR69, "", 11);
    memcpy(VAR7->VAR16, (VAR2->VAR16 == 12 ? "" : VAR2->VAR16 == 16 ? ""
                                                                                     : ""),
           8);
    VAR7->VAR70[0] = 0x55;
    VAR7->VAR70[1] = 0xaa;
    return 0;
}