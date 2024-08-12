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
    VAR14 = VAR3->VAR20[0];
    VAR8 = VAR3->VAR20[1];
    switch (VAR14)
    {
    case VAR21:
        FUN4(0);
        FUN4(1);
        FUN4(2);
        VAR13 = FUN5(VAR9);
        if (!VAR13)
        {
            return (VAR1)-1;
        }
        if (VAR10 >= 12)
        {
            FUN6(VAR13, VAR9, 0);
            return (VAR1)-1;
        }
        if (strcmp(VAR13, "") == 0)
        {
            int VAR22 = VAR10 < 4 ? VAR23 : VAR24;
            FUN6(VAR13, VAR9, 0);
            return VAR22;
        }
        if (FUN7())
        {
            FUN8(VAR25, "", VAR9, (int)VAR11 + 1, VAR26[VAR10]);
            VAR15 = VAR3->VAR20[0];
        }
        else
        {
            VAR15 = FUN9(VAR18, open(VAR13, VAR27[VAR10], 0644));
        }
        FUN6(VAR13, VAR9, 0);
        return VAR15;
    case VAR28:
        FUN4(0);
        if (FUN7())
        {
            FUN8(VAR25, "", VAR9);
            return VAR3->VAR20[0];
        }
        else
        {
            return FUN9(VAR18, close(VAR9));
        }
    case VAR29:
    {
        char VAR30;
        if (FUN10(VAR30, VAR8))
            return (VAR1)-1;
        if (FUN7())
        {
            FUN8(VAR25, "", VAR8);
            return VAR3->VAR20[0];
        }
        else
        {
            return write(VAR31, &VAR30, 1);
        }
    }
    case VAR32:
        if (!(VAR13 = FUN5(VAR8)))
            return (VAR1)-1;
        VAR16 = strlen(VAR13);
        if (FUN7())
        {
            FUN8(VAR25, "", VAR8, VAR16);
            VAR15 = VAR3->VAR20[0];
        }
        else
        {
            VAR15 = write(VAR31, VAR13, VAR16);
        }
        FUN6(VAR13, VAR8, 0);
        return VAR15;
    case VAR33:
        FUN4(0);
        FUN4(1);
        FUN4(2);
        VAR16 = VAR11;
        if (FUN7())
        {
            VAR34 = VAR16;
            FUN8(VAR25, "", VAR9, VAR10, VAR16);
            return VAR3->VAR20[0];
        }
        else
        {
            VAR13 = FUN11(VAR35, VAR10, VAR16, 1);
            if (!VAR13)
            {
                return (VAR1)-1;
            }
            VAR15 = FUN9(VAR18, write(VAR9, VAR13, VAR16));
            FUN6(VAR13, VAR10, 0);
            if (VAR15 == (VAR1)-1)
                return -1;
            return VAR16 - VAR15;
        }
    case VAR36:
        FUN4(0);
        FUN4(1);
        FUN4(2);
        VAR16 = VAR11;
        if (FUN7())
        {
            VAR34 = VAR16;
            FUN8(VAR25, "", VAR9, VAR10, VAR16);
            return VAR3->VAR20[0];
        }
        else
        {
            VAR13 = FUN11(VAR37, VAR10, VAR16, 0);
            if (!VAR13)
            {
                return (VAR1)-1;
            }
            do
            {
                VAR15 = FUN9(VAR18, read(VAR9, VAR13, VAR16));
            } while (VAR15 == -1 && VAR38 == VAR39);
            FUN6(VAR13, VAR10, VAR16);
            if (VAR15 == (VAR1)-1)
                return -1;
            return VAR16 - VAR15;
        }
    case VAR40:
        return 0;
    case VAR41:
        FUN4(0);
        if (FUN7())
        {
            FUN8(VAR25, "", VAR9);
            return VAR3->VAR20[0];
        }
        else
        {
            return FUN12(VAR9);
        }
    case VAR42:
        FUN4(0);
        FUN4(1);
        if (FUN7())
        {
            FUN8(VAR25, "", VAR9, VAR10);
            return VAR3->VAR20[0];
        }
        else
        {
            VAR15 = FUN9(VAR18, FUN13(VAR9, VAR10, VAR43));
            if (VAR15 == (VAR1)-1)
                return -1;
            return 0;
        }
    case VAR44:
        FUN4(0);
        if (FUN7())
        {
            FUN8(VAR45, "", VAR9, VAR3->VAR20[13] - 64);
            return VAR3->VAR20[0];
        }
        else
        {
            struct stat VAR46;
            VAR15 = FUN9(VAR18, FUN14(VAR9, &VAR46));
            if (VAR15 == (VAR1)-1)
                return -1;
            return VAR46.VAR47;
        }
    case VAR48:
        return -1;
    case VAR49:
        FUN4(0);
        FUN4(1);
        if (FUN7())
        {
            FUN8(VAR25, "", VAR9, (int)VAR10 + 1);
            VAR15 = VAR3->VAR20[0];
        }
        else
        {
            VAR13 = FUN5(VAR9);
            if (!VAR13)
            {
                return (VAR1)-1;
            }
            VAR15 = FUN9(VAR18, remove(VAR13));
            FUN6(VAR13, VAR9, 0);
        }
        return VAR15;
    case VAR50:
        FUN4(0);
        FUN4(1);
        FUN4(2);
        FUN4(3);
        if (FUN7())
        {
            FUN8(VAR25, "", VAR9, (int)VAR10 + 1, VAR11, (int)VAR12 + 1);
            return VAR3->VAR20[0];
        }
        else
        {
            char *VAR51;
            VAR13 = FUN5(VAR9);
            VAR51 = FUN5(VAR11);
            if (!VAR13 || !VAR51)
                VAR15 = (VAR1)-1;
            else
                VAR15 = FUN9(VAR18, FUN15(VAR13, VAR51));
            if (VAR51)
                FUN6(VAR51, VAR11, 0);
            if (VAR13)
                FUN6(VAR13, VAR9, 0);
            return VAR15;
        }
    case VAR52:
        return FUN16() / (VAR53 / 100);
    case VAR54:
        return FUN9(VAR18, FUN17(NULL));
    case VAR55:
        FUN4(0);
        FUN4(1);
        if (FUN7())
        {
            FUN8(VAR25, "", VAR9, (int)VAR10 + 1);
            return VAR3->VAR20[0];
        }
        else
        {
            VAR13 = FUN5(VAR9);
            if (!VAR13)
            {
                return (VAR1)-1;
            }
            VAR15 = FUN9(VAR18, system(VAR13));
            FUN6(VAR13, VAR9, 0);
            return VAR15;
        }
    case VAR56:
        return VAR18->VAR57;
        return VAR58;
    case VAR59:
    {
        char *VAR60;
        size_t VAR61;
        size_t VAR62;
        int VAR63 = 0;
        FUN4(0);
        FUN4(1);
        VAR61 = VAR10;
        VAR62 = strlen(VAR18->VAR64->VAR65) + 1 + strlen(VAR18->VAR64->VAR66) + 1;
        unsigned int VAR67;
        VAR62 = VAR18->VAR68->VAR69 - VAR18->VAR68->VAR70;
        if (!VAR62)
        {
            VAR62 = 1;
        }
        if (VAR62 > VAR61)
        {
            return -1;
        }
        if (FUN18(1, VAR62 - 1))
        {
            return -1;
        }
        VAR60 = FUN11(VAR37, VAR9, VAR62, 0);
        if (!VAR60)
        {
            return -1;
        }
        FUN19(VAR60, VAR62, VAR18->VAR64->VAR65);
        FUN20(VAR60, VAR62, "");
        FUN20(VAR60, VAR62, VAR18->VAR64->VAR66);
        if (VAR62 == 1)
        {
            VAR60[0] = '';
            goto VAR71;
        }
        if (FUN21(VAR60, VAR18->VAR68->VAR70, VAR62))
        {
            VAR63 = -1;
            goto VAR71;
        }
        for (VAR67 = 0; VAR67 < VAR62 - 1; VAR67++)
        {
            if (VAR60[VAR67] == 0)
            {
                VAR60[VAR67] = '';
            }
        }
    VAR71:
        FUN6(VAR60, VAR9, VAR62);
        return VAR63;
    }
    case VAR72:
    {
        VAR1 *VAR73;
        uint32_t VAR74;
        FUN4(0);
        if (!VAR18->VAR75)
        {
            abi_ulong VAR15;
            VAR18->VAR76 = FUN22(0);
            VAR74 = VAR18->VAR76 + VAR77;
            for (;;)
            {
                VAR15 = FUN22(VAR74);
                if (VAR15 >= VAR74)
                {
                    break;
                }
                VAR74 = (VAR18->VAR76 >> 1) + (VAR74 >> 1);
            }
            VAR18->VAR75 = VAR74;
        }
        VAR73 = FUN11(VAR37, VAR9, 16, 0);
        if (!VAR73)
        {
            return (VAR1)-1;
        }
        VAR73[0] = FUN23(VAR18->VAR76);
        VAR73[1] = FUN23(VAR18->VAR75);
        VAR73[2] = FUN23(VAR18->VAR78);
        VAR73[3] = FUN23(0);
        FUN6(VAR73, VAR9, 16);
        VAR74 = VAR79;
        VAR73 = FUN11(VAR37, VAR9, 16, 0);
        if (!VAR73)
        {
            return (VAR1)-1;
        }
        VAR73[0] = FUN23(VAR74 / 2);
        VAR73[1] = FUN23(VAR74);
        VAR73[2] = FUN23(VAR74);
        VAR73[3] = FUN23(0);
        FUN6(VAR73, VAR9, 16);
        return 0;
    }
    case VAR80:
        VAR15 = (VAR8 == VAR81) ? 0 : 1;
        FUN24(VAR3, VAR15);
        FUN25(VAR15);
    default:
        fprintf(VAR82, "", VAR14);
        FUN26(VAR7, VAR82, fprintf, 0);
        FUN27();
    }
}