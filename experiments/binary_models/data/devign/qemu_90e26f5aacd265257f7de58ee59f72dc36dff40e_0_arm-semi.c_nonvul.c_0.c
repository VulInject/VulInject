VAR1 FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR3);
    VAR6 *VAR7 = FUN3(VAR5);
    target_ulong VAR8;
    target_ulong VAR9, VAR10, VAR11, VAR12;
    char *VAR13;
    int VAR14;
    uint32_t VAR15;
    uint32_t VAR16;
    VAR17 *VAR18 = VAR7->VAR19;
    VAR2 *VAR18 = VAR3;
    if (FUN4(VAR3))
    {
        VAR14 = VAR3->VAR20[0] & 0xffffffffU;
        VAR8 = VAR3->VAR20[1];
    }
    else
    {
        VAR14 = VAR3->VAR21[0];
        VAR8 = VAR3->VAR21[1];
    }
    switch (VAR14)
    {
    case VAR22:
        FUN5(0);
        FUN5(1);
        FUN5(2);
        VAR13 = FUN6(VAR9);
        if (!VAR13)
        {
            return (VAR23)-1;
        }
        if (VAR10 >= 12)
        {
            FUN7(VAR13, VAR9, 0);
            return (VAR23)-1;
        }
        if (strcmp(VAR13, "") == 0)
        {
            int VAR24 = VAR10 < 4 ? VAR25 : VAR26;
            FUN7(VAR13, VAR9, 0);
            return VAR24;
        }
        if (FUN8())
        {
            VAR15 = FUN9(VAR5, VAR27, "", VAR9, (int)VAR11 + 1, VAR28[VAR10]);
        }
        else
        {
            VAR15 = FUN10(VAR18, open(VAR13, VAR29[VAR10], 0644));
        }
        FUN7(VAR13, VAR9, 0);
        return VAR15;
    case VAR30:
        FUN5(0);
        if (FUN8())
        {
            return FUN9(VAR5, VAR27, "", VAR9);
        }
        else
        {
            return FUN10(VAR18, close(VAR9));
        }
    case VAR31:
    {
        char VAR32;
        if (FUN11(VAR32, VAR8))
            return (VAR23)-1;
        if (FUN8())
        {
            return FUN9(VAR5, VAR27, "", VAR8);
        }
        else
        {
            return write(VAR33, &VAR32, 1);
        }
    }
    case VAR34:
        if (!(VAR13 = FUN6(VAR8)))
            return (VAR23)-1;
        VAR16 = strlen(VAR13);
        if (FUN8())
        {
            return FUN9(VAR5, VAR27, "", VAR8, VAR16);
        }
        else
        {
            VAR15 = write(VAR33, VAR13, VAR16);
        }
        FUN7(VAR13, VAR8, 0);
        return VAR15;
    case VAR35:
        FUN5(0);
        FUN5(1);
        FUN5(2);
        VAR16 = VAR11;
        if (FUN8())
        {
            VAR36 = VAR16;
            return FUN9(VAR5, VAR27, "", VAR9, VAR10, VAR16);
        }
        else
        {
            VAR13 = FUN12(VAR37, VAR10, VAR16, 1);
            if (!VAR13)
            {
                return (VAR23)-1;
            }
            VAR15 = FUN10(VAR18, write(VAR9, VAR13, VAR16));
            FUN7(VAR13, VAR10, 0);
            if (VAR15 == (VAR23)-1)
                return -1;
            return VAR16 - VAR15;
        }
    case VAR38:
        FUN5(0);
        FUN5(1);
        FUN5(2);
        VAR16 = VAR11;
        if (FUN8())
        {
            VAR36 = VAR16;
            return FUN9(VAR5, VAR27, "", VAR9, VAR10, VAR16);
        }
        else
        {
            VAR13 = FUN12(VAR39, VAR10, VAR16, 0);
            if (!VAR13)
            {
                return (VAR23)-1;
            }
            do
            {
                VAR15 = FUN10(VAR18, read(VAR9, VAR13, VAR16));
            } while (VAR15 == -1 && VAR40 == VAR41);
            FUN7(VAR13, VAR10, VAR16);
            if (VAR15 == (VAR23)-1)
                return -1;
            return VAR16 - VAR15;
        }
    case VAR42:
        return 0;
    case VAR43:
        FUN5(0);
        if (FUN8())
        {
            return FUN9(VAR5, VAR27, "", VAR9);
        }
        else
        {
            return FUN13(VAR9);
        }
    case VAR44:
        FUN5(0);
        FUN5(1);
        if (FUN8())
        {
            return FUN9(VAR5, VAR27, "", VAR9, VAR10);
        }
        else
        {
            VAR15 = FUN10(VAR18, FUN14(VAR9, VAR10, VAR45));
            if (VAR15 == (VAR23)-1)
                return -1;
            return 0;
        }
    case VAR46:
        FUN5(0);
        if (FUN8())
        {
            return FUN9(VAR5, VAR47, "", VAR9, FUN15(VAR5));
        }
        else
        {
            struct stat VAR48;
            VAR15 = FUN10(VAR18, FUN16(VAR9, &VAR48));
            if (VAR15 == (VAR23)-1)
                return -1;
            return VAR48.VAR49;
        }
    case VAR50:
        return -1;
    case VAR51:
        FUN5(0);
        FUN5(1);
        if (FUN8())
        {
            VAR15 = FUN9(VAR5, VAR27, "", VAR9, (int)VAR10 + 1);
        }
        else
        {
            VAR13 = FUN6(VAR9);
            if (!VAR13)
            {
                return (VAR23)-1;
            }
            VAR15 = FUN10(VAR18, remove(VAR13));
            FUN7(VAR13, VAR9, 0);
        }
        return VAR15;
    case VAR52:
        FUN5(0);
        FUN5(1);
        FUN5(2);
        FUN5(3);
        if (FUN8())
        {
            return FUN9(VAR5, VAR27, "", VAR9, (int)VAR10 + 1, VAR11, (int)VAR12 + 1);
        }
        else
        {
            char *VAR53;
            VAR13 = FUN6(VAR9);
            VAR53 = FUN6(VAR11);
            if (!VAR13 || !VAR53)
                VAR15 = (VAR23)-1;
            else
                VAR15 = FUN10(VAR18, FUN17(VAR13, VAR53));
            if (VAR53)
                FUN7(VAR53, VAR11, 0);
            if (VAR13)
                FUN7(VAR13, VAR9, 0);
            return VAR15;
        }
    case VAR54:
        return FUN18() / (VAR55 / 100);
    case VAR56:
        return FUN10(VAR18, FUN19(NULL));
    case VAR57:
        FUN5(0);
        FUN5(1);
        if (FUN8())
        {
            return FUN9(VAR5, VAR27, "", VAR9, (int)VAR10 + 1);
        }
        else
        {
            VAR13 = FUN6(VAR9);
            if (!VAR13)
            {
                return (VAR23)-1;
            }
            VAR15 = FUN10(VAR18, system(VAR13));
            FUN7(VAR13, VAR9, 0);
            return VAR15;
        }
    case VAR58:
        return VAR18->VAR59;
        return VAR60;
    case VAR61:
    {
        char *VAR62;
        size_t VAR63;
        size_t VAR64;
        int VAR65 = 0;
        const char *VAR66;
        FUN5(0);
        FUN5(1);
        VAR63 = VAR10;
        VAR66 = FUN20();
        if (VAR66 == NULL)
        {
            VAR66 = "";
        }
        VAR64 = strlen(VAR66) + 1;
        unsigned int VAR67;
        VAR64 = VAR18->VAR68->VAR69 - VAR18->VAR68->VAR70;
        if (!VAR64)
        {
            VAR64 = 1;
        }
        if (VAR64 > VAR63)
        {
            return -1;
        }
        if (FUN21(1, VAR64 - 1))
        {
            return -1;
        }
        VAR62 = FUN12(VAR39, VAR9, VAR64, 0);
        if (!VAR62)
        {
            return -1;
        }
        FUN22(VAR62, VAR64, VAR66);
        if (VAR64 == 1)
        {
            VAR62[0] = '';
            goto VAR71;
        }
        if (FUN23(VAR62, VAR18->VAR68->VAR70, VAR64))
        {
            VAR65 = -1;
            goto VAR71;
        }
        for (VAR67 = 0; VAR67 < VAR64 - 1; VAR67++)
        {
            if (VAR62[VAR67] == 0)
            {
                VAR62[VAR67] = '';
            }
        }
    VAR71:
        FUN7(VAR62, VAR9, VAR64);
        return VAR65;
    }
    case VAR72:
    {
        target_ulong VAR73[4];
        target_ulong VAR74;
        int VAR67;
        FUN5(0);
        if (!VAR18->VAR75)
        {
            abi_ulong VAR15;
            VAR18->VAR76 = FUN24(0);
            VAR74 = VAR18->VAR76 + VAR77;
            for (;;)
            {
                VAR15 = FUN24(VAR74);
                if (VAR15 >= VAR74)
                {
                    break;
                }
                VAR74 = (VAR18->VAR76 >> 1) + (VAR74 >> 1);
            }
            VAR18->VAR75 = VAR74;
        }
        VAR73[0] = VAR18->VAR76;
        VAR73[1] = VAR18->VAR75;
        VAR73[2] = VAR18->VAR78;
        VAR73[3] = 0;
        VAR74 = VAR79;
        VAR73[0] = VAR74 / 2;
        VAR73[1] = VAR74;
        VAR73[2] = VAR74;
        VAR73[3] = 0;
        for (VAR67 = 0; VAR67 < FUN25(VAR73); VAR67++)
        {
            bool VAR80;
            if (FUN4(VAR3))
            {
                VAR80 = FUN26(VAR73[VAR67], VAR9 + VAR67 * 8);
            }
            else
            {
                VAR80 = FUN27(VAR73[VAR67], VAR9 + VAR67 * 4);
            }
            if (VAR80)
            {
                return -1;
            }
        }
        return 0;
    }
    case VAR81:
        if (FUN4(VAR3))
        {
            FUN5(0);
            FUN5(1);
            if (VAR9 == VAR82)
            {
                VAR15 = VAR10;
            }
            else
            {
                VAR15 = 1;
            }
        }
        else
        {
            VAR15 = (VAR8 == VAR82) ? 0 : 1;
        }
        FUN28(VAR3, VAR15);
        FUN29(VAR15);
    case VAR83:
        if (FUN4(VAR3))
        {
            return 0;
        }
    default:
        fprintf(VAR84, "", VAR14);
        FUN30(VAR7, VAR84, fprintf, 0);
        FUN31();
    }
}