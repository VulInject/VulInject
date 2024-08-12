static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    unsigned int VAR8;
    unsigned int VAR9;
    memset(&(VAR2->VAR10[0]), 0, 0x40 * 0x200);
    VAR2->VAR11 = VAR2->VAR12 * 0x200;
    VAR2->VAR13 = FUN2(VAR2->VAR11);
    VAR8 = 1 + VAR2->VAR12 * 0x200 * 8 / VAR2->VAR14;
    VAR2->VAR15 = (VAR2->VAR16 + VAR8) / VAR8;
    FUN3(&(VAR2->VAR7), sizeof(VAR6));
    FUN3(&(VAR2->VAR17), sizeof(VAR18));
    {
        VAR18 *VAR19 = FUN4(&(VAR2->VAR17));
        VAR19->VAR20 = 0x28;
        snprintf((char *)VAR19->VAR21, 11, "");
    }
    FUN5(VAR2);
    VAR2->VAR22 = VAR2->VAR23 + VAR2->VAR15 * 2;
    VAR2->VAR24 = FUN6(VAR2, VAR2->VAR16);
    VAR7 = FUN4(&(VAR2->VAR7));
    VAR7->VAR25 = 0;
    VAR7->VAR26 = 0;
    VAR7->VAR27.VAR28.VAR29 = -1;
    VAR7->VAR30 = -1;
    VAR7->VAR31 = strdup(VAR3);
    VAR8 = strlen(VAR7->VAR31);
    if (VAR8 > 0 && VAR7->VAR31[VAR8 - 1] == '')
        VAR7->VAR31[VAR8 - 1] = '';
    VAR7->VAR32 = VAR33;
    VAR7->VAR34 = 0;
    VAR2->VAR31 = VAR7->VAR31;
    for (VAR8 = 0, VAR9 = 0; VAR8 < VAR2->VAR7.VAR35; VAR8++)
    {
        int VAR36 = (VAR8 != 0);
        VAR7 = FUN7(&(VAR2->VAR7), VAR8);
        if (VAR7->VAR32 & VAR33)
        {
            VAR7->VAR25 = VAR9;
            if (FUN8(VAR2, VAR8))
            {
                fprintf(VAR37, "", VAR7->VAR31);
                return -1;
            }
            VAR7 = FUN7(&(VAR2->VAR7), VAR8);
        }
        else
        {
            assert(VAR7->VAR32 == VAR38);
            VAR7->VAR32 = VAR39;
            VAR7->VAR25 = VAR9;
            if (VAR7->VAR40 > 0)
            {
                VAR18 *VAR41 = FUN7(&(VAR2->VAR17), VAR7->VAR26);
                VAR7->VAR40 = VAR9 + 1 + (VAR7->VAR40 - 1) / VAR2->VAR11;
                FUN9(VAR41, VAR7->VAR25);
            }
            else
            {
                VAR7->VAR40 = VAR9 + 1;
                VAR36 = 0;
            }
        }
        assert(VAR7->VAR25 < VAR7->VAR40);
        VAR9 = VAR7->VAR40;
        if (VAR9 > VAR2->VAR24)
        {
            fprintf(VAR37, "", VAR2->VAR14, VAR2->VAR14 == 12 ? VAR2->VAR16 == 2880 ? "" : "" : "");
            return -VAR42;
        }
        if (VAR36)
        {
            int VAR43;
            for (VAR43 = VAR7->VAR25; VAR43 < VAR7->VAR40 - 1; VAR43++)
                FUN10(VAR2, VAR43, VAR43 + 1);
            FUN10(VAR2, VAR7->VAR40 - 1, VAR2->VAR44);
        }
    }
    VAR7 = FUN7(&(VAR2->VAR7), 0);
    VAR2->VAR45 = VAR7->VAR40 * VAR2->VAR12;
    VAR2->VAR46 = VAR7->VAR40;
    FUN10(VAR2, 0, VAR2->VAR44);
    FUN10(VAR2, 1, VAR2->VAR44);
    VAR2->VAR47 = NULL;
    VAR5 = (VAR4 *)(VAR2->VAR10 + (VAR2->VAR23 - 1) * 0x200);
    VAR5->VAR48[0] = 0xeb;
    VAR5->VAR48[1] = 0x3e;
    VAR5->VAR48[2] = 0x90;
    memcpy(VAR5->VAR21, "", 8);
    VAR5->VAR49 = FUN11(0x200);
    VAR5->VAR12 = VAR2->VAR12;
    VAR5->VAR50 = FUN11(1);
    VAR5->VAR51 = 0x2;
    VAR5->VAR52 = FUN11(VAR2->VAR45 * 0x10);
    VAR5->VAR53 = VAR2->VAR16 > 0xffff ? 0 : FUN11(VAR2->VAR16);
    VAR5->VAR54 = (VAR2->VAR14 != 12 ? 0xf8 : VAR2->VAR16 == 5760 ? 0xf9
                                                                                 : 0xf8);
    VAR2->VAR55.VAR56[0] = VAR5->VAR54;
    VAR5->VAR15 = FUN11(VAR2->VAR15);
    VAR5->VAR57 = FUN11(VAR2->VAR58->VAR59);
    VAR5->VAR60 = FUN11(VAR2->VAR58->VAR61);
    VAR5->VAR62 = FUN12(VAR2->VAR23 == 1 ? 0 : 0x3f);
    VAR5->VAR63 = FUN12(VAR2->VAR16 > 0xffff ? VAR2->VAR16 : 0);
    VAR5->VAR64.VAR65.VAR66 = VAR2->VAR14 == 12 ? 0 : 0x80;
    VAR5->VAR64.VAR65.VAR67 = 0;
    VAR5->VAR64.VAR65.VAR68 = 0x29;
    VAR5->VAR64.VAR65.VAR69 = FUN12(0xfabe1afd);
    memcpy(VAR5->VAR64.VAR65.VAR70, "", 11);
    memcpy(VAR5->VAR14, (VAR2->VAR14 == 12 ? "" : VAR2->VAR14 == 16 ? ""
                                                                                     : ""),
           8);
    VAR5->VAR71[0] = 0x55;
    VAR5->VAR71[1] = 0xaa;
    return 0;
}