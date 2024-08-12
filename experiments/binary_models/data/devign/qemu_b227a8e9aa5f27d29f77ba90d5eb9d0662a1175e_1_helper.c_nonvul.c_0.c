static int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    target_phys_addr_t VAR8, VAR9, VAR10, VAR11, VAR12;
    target_ulong VAR13, VAR14, VAR15, VAR16, VAR17;
    int VAR18;
    int VAR19, VAR20, VAR21;
    int VAR22, VAR23;
    if (VAR2->VAR24 == VAR25)
    {
        if (VAR26 != 0)
        {
            fprintf(VAR27, "");
        }
        VAR22 = FUN2(VAR2, VAR5, &VAR14, &VAR17, &VAR18);
        if (VAR22 < 0)
            return VAR22;
        VAR4->VAR28 = ((VAR18 & 0x40) && VAR29 == 1) || ((VAR18 & 0x80) && VAR29 == 0) ? 1 : 0;
        VAR19 = 0;
        VAR4->VAR30 = VAR18 & 0x20 ? 1 : 0;
        VAR15 = 0x00003FFFFFFFFF80ULL;
        VAR20 = 7;
        VAR21 = 18;
        VAR11 = 0x3FF80;
    }
    else
    {
        VAR13 = VAR2->VAR13[VAR5 >> 28];
        VAR17 = 0x0FFFFFFF;
        VAR4->VAR28 = (((VAR13 & 0x20000000) && VAR29 == 1) || ((VAR13 & 0x40000000) && VAR29 == 0)) ? 1 : 0;
        VAR19 = VAR13 & 0x80000000 ? 1 : 0;
        VAR4->VAR30 = VAR13 & 0x10000000 ? 1 : 0;
        VAR14 = VAR13 & 0x00FFFFFF;
        VAR15 = 0x01FFFFC0;
        VAR20 = 6;
        VAR21 = 16;
        VAR11 = 0xFFC0;
        if (VAR26 != 0)
        {
            fprintf(VAR27, "" VAR31 "" VAR31 "" VAR31 "" VAR31 "", VAR5, (int)(VAR5 >> 28), VAR13, VAR2->VAR32, VAR2->VAR33, VAR34, VAR35, VAR29, VAR6, VAR7);
        }
    }
    if (VAR26 != 0)
    {
        fprintf(VAR27, "" VAR31 "", VAR4->VAR28, VAR19, VAR4->VAR30, VAR14);
    }
    VAR22 = -1;
    if (!VAR19)
    {
        if (VAR7 != VAR36 || VAR4->VAR30 == 0)
        {
            VAR8 = VAR2->VAR37;
            VAR16 = (VAR5 & VAR17) >> VAR38;
            if (VAR2->VAR24 == VAR25)
            {
                VAR12 = 0x0FFFFFFF >> (28 - (VAR8 & 0x1F));
                VAR9 = ((VAR14 ^ VAR16) << VAR20) & VAR15;
            }
            else
            {
                VAR12 = VAR8 & 0x000001FF;
                VAR9 = ((VAR14 ^ VAR16) << VAR20) & VAR15;
            }
            VAR10 = (VAR12 << VAR21) | VAR11;
            if (VAR26 != 0)
            {
                fprintf(VAR27, "" VAR39 "" VAR39 "" VAR39 "" VAR31 "", VAR8, VAR21, VAR9, VAR10, VAR17);
            }
            VAR4->VAR40[0] = FUN3(VAR8, VAR21, VAR9, VAR10);
            VAR9 = (~VAR9) & VAR15;
            if (VAR26 != 0)
            {
                fprintf(VAR27, "" VAR39 "" VAR39 "" VAR39 "", VAR8, VAR21, VAR9, VAR10);
            }
            VAR4->VAR40[1] = FUN3(VAR8, VAR21, VAR9, VAR10);
            if (VAR2->VAR24 == VAR25)
            {
                VAR4->VAR41 = (VAR14 << 12) | ((VAR16 >> 4) & 0x0F80);
            }
            else
            {
                VAR4->VAR41 = (VAR14 << 7) | (VAR16 >> 10);
            }
            VAR4->VAR42 = (VAR43)-1;
            if (FUN4(VAR2->VAR24 == VAR44 || VAR2->VAR24 == VAR45))
            {
                VAR22 = FUN5(VAR2, VAR4, VAR5, VAR6, VAR7);
            }
            else
            {
                if (VAR26 != 0)
                {
                    fprintf(VAR27, "" VAR39 ""
                                     "" VAR39 "",
                            VAR8, (VAR46)VAR14, (VAR46)VAR16, (VAR46)VAR9, VAR4->VAR40[0]);
                }
                VAR22 = FUN6(VAR2, VAR4, 0, VAR6, VAR7);
                if (VAR22 < 0)
                {
                    if (VAR5 != 0xEFFFFFFF && VAR26 != 0)
                    {
                        fprintf(VAR27, "" VAR39 ""
                                         "" VAR39 "",
                                VAR8, (VAR46)VAR14, (VAR46)VAR16, (VAR46)VAR9, VAR4->VAR40[1]);
                    }
                    VAR23 = FUN6(VAR2, VAR4, 1, VAR6, VAR7);
                    if (VAR23 != -1)
                        VAR22 = VAR23;
                }
            }
            if (VAR26 != 0)
            {
                target_phys_addr_t VAR47;
                uint32_t VAR48, VAR49, VAR50, VAR51;
                fprintf(VAR27, "" VAR39 "" VAR39 "", VAR8, VAR10 + 0x80);
                for (VAR47 = VAR8; VAR47 < (VAR8 + VAR10 + 0x80); VAR47 += 16)
                {
                    VAR48 = FUN7(VAR47);
                    VAR49 = FUN7(VAR47 + 4);
                    VAR50 = FUN7(VAR47 + 8);
                    VAR51 = FUN7(VAR47 + 12);
                    if (VAR48 != 0 || VAR49 != 0 || VAR50 != 0 || VAR51 != 0)
                    {
                        fprintf(VAR27, VAR39 "", VAR47, VAR48, VAR49, VAR50, VAR51);
                    }
                }
            }
        }
        else
        {
            if (VAR26 != 0)
                fprintf(VAR27, "");
            VAR22 = -3;
        }
    }
    else
    {
        if (VAR26 != 0)
            fprintf(VAR27, "");
        switch (VAR7)
        {
        case VAR52:
            break;
        case VAR36:
            return -4;
        case VAR53:
            return -4;
        case VAR54:
            return -4;
        case VAR55:
            VAR4->VAR42 = VAR5;
            return 0;
        case VAR56:
            return -4;
        default:
            if (VAR27)
            {
                fprintf(VAR27, ""
                                 "");
            }
            return -4;
        }
        if ((VAR6 == 1 || VAR4->VAR28 != 1) && (VAR6 == 0 || VAR4->VAR28 != 0))
        {
            VAR4->VAR42 = VAR5;
            VAR22 = 2;
        }
        else
        {
            VAR22 = -2;
        }
    }
    return VAR22;
}