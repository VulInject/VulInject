static int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    target_phys_addr_t VAR8, VAR9, VAR10, VAR11;
    target_ulong VAR12, VAR13, VAR14, VAR15, VAR16;
    int VAR17;
    int VAR18, VAR19, VAR20, VAR21;
    int VAR22, VAR23;
    if (VAR2->VAR24 == VAR25 || VAR2->VAR24 == VAR26)
    {
        VAR22 = FUN2(VAR2, VAR5, &VAR13, &VAR16, &VAR17);
        if (VAR22 < 0)
            return VAR22;
        VAR4->VAR27 = ((VAR17 & 0x40) && VAR28 == 1) || ((VAR17 & 0x80) && VAR28 == 0) ? 1 : 0;
        VAR18 = 0;
        VAR19 = VAR17 & 0x20 ? 1 : 0;
        VAR14 = 0x00003FFFFFFFFF80ULL;
        VAR20 = 7;
        VAR21 = 18;
        VAR11 = 0x3FF80;
    }
    else
    {
        VAR12 = VAR2->VAR12[VAR5 >> 28];
        VAR16 = 0x0FFFFFFF;
        VAR4->VAR27 = (((VAR12 & 0x20000000) && VAR28 == 1) || ((VAR12 & 0x40000000) && VAR28 == 0)) ? 1 : 0;
        VAR18 = VAR12 & 0x80000000 ? 1 : 0;
        VAR19 = VAR12 & 0x10000000 ? 1 : 0;
        VAR13 = VAR12 & 0x00FFFFFF;
        VAR14 = 0x01FFFFC0;
        VAR20 = 6;
        VAR21 = 16;
        VAR11 = 0xFFC0;
        if (VAR29 != 0)
        {
            fprintf(VAR30, "" VAR31 "" VAR31 "" VAR31 "" VAR31 "", VAR5, (int)(VAR5 >> 28), VAR12, VAR2->VAR32, VAR2->VAR33, VAR34, VAR35, VAR28, VAR6, VAR7);
        }
        if (!VAR18 && VAR29 != 0)
        {
            fprintf(VAR30, "" VAR31 "", VAR4->VAR27, VAR12 & 0x10000000);
        }
    }
    VAR22 = -1;
    if (!VAR18)
    {
        if (VAR7 != VAR36 || VAR19 == 0)
        {
            VAR15 = (VAR5 & VAR16) >> VAR37;
            VAR9 = ((VAR13 ^ VAR15) << VAR20) & VAR14;
            VAR8 = VAR2->VAR38;
            VAR10 = ((VAR8 & 0x000001FF) << VAR21) | VAR11;
            VAR4->VAR39[0] = FUN3(VAR8, VAR21, VAR9, VAR10);
            VAR9 = (~VAR9) & VAR14;
            VAR4->VAR39[1] = FUN3(VAR8, VAR21, VAR9, VAR10);
            if (VAR2->VAR24 == VAR25 || VAR2->VAR24 == VAR26)
            {
                VAR4->VAR40 = (VAR13 << 12) | ((VAR15 >> 4) & 0x0F80);
            }
            else
            {
                VAR4->VAR40 = (VAR13 << 7) | (VAR15 >> 10);
            }
            VAR4->VAR41 = (VAR42)-1;
            if (FUN4(VAR2->VAR24 == VAR43 || VAR2->VAR24 == VAR44))
            {
                VAR22 = FUN5(VAR2, VAR4, VAR5, VAR6, VAR7);
            }
            else
            {
                if (VAR29 != 0)
                {
                    fprintf(VAR30, "" VAR45 ""
                                     "" VAR45 "",
                            VAR8, (VAR46)VAR13, (VAR46)VAR15, (VAR46)VAR9, VAR4->VAR39[0]);
                }
                VAR22 = FUN6(VAR2, VAR4, 0, VAR6);
                if (VAR22 < 0)
                {
                    if (VAR5 != 0xEFFFFFFF && VAR29 != 0)
                    {
                        fprintf(VAR30, "" VAR45 ""
                                         "" VAR45 "",
                                VAR8, (VAR46)VAR13, (VAR46)VAR15, (VAR46)VAR9, VAR4->VAR39[1]);
                    }
                    VAR23 = FUN6(VAR2, VAR4, 1, VAR6);
                    if (VAR23 != -1)
                        VAR22 = VAR23;
                }
            }
        }
        else
        {
            if (VAR29 != 0)
                fprintf(VAR30, "");
            VAR22 = -3;
        }
    }
    else
    {
        if (VAR29 != 0)
            fprintf(VAR30, "");
        switch (VAR7)
        {
        case VAR47:
            break;
        case VAR36:
            return -4;
        case VAR48:
            return -4;
        case VAR49:
            return -4;
        case VAR50:
            VAR4->VAR41 = VAR5;
            return 0;
        case VAR51:
            return -4;
        default:
            if (VAR30)
            {
                fprintf(VAR30, ""
                                 "");
            }
            return -4;
        }
        if ((VAR6 == 1 || VAR4->VAR27 != 1) && (VAR6 == 0 || VAR4->VAR27 != 0))
        {
            VAR4->VAR41 = VAR5;
            VAR22 = 2;
        }
        else
        {
            VAR22 = -2;
        }
    }
    return VAR22;
}