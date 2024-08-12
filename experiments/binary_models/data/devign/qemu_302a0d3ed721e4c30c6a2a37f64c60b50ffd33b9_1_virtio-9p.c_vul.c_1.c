static VAR1 FUN1(VAR2 *VAR3, size_t VAR4, const char *VAR5, ...)
{
    size_t VAR6 = VAR4;
    va_list VAR7;
    int VAR8;
    FUN2(VAR7, VAR5);
    for (VAR8 = 0; VAR5[VAR8]; VAR8++)
    {
        switch (VAR5[VAR8])
        {
        case '':
        {
            uint8_t VAR9 = FUN3(VAR7, int);
            VAR4 += FUN4(VAR3, VAR4, &VAR9, sizeof(VAR9));
            break;
        }
        case '':
        {
            uint16_t VAR9;
            FUN5(&VAR9, FUN3(VAR7, int));
            VAR4 += FUN4(VAR3, VAR4, &VAR9, sizeof(VAR9));
            break;
        }
        case '':
        {
            uint32_t VAR9;
            FUN6(&VAR9, FUN3(VAR7, VAR10));
            VAR4 += FUN4(VAR3, VAR4, &VAR9, sizeof(VAR9));
            break;
        }
        case '':
        {
            uint64_t VAR9;
            FUN7(&VAR9, FUN3(VAR7, VAR11));
            VAR4 += FUN4(VAR3, VAR4, &VAR9, sizeof(VAR9));
            break;
        }
        case '':
        {
            struct VAR12 *VAR13 = FUN3(VAR7, struct VAR12 *);
            int *VAR14 = FUN3(VAR7, int *);
            *VAR14 = FUN8(VAR3, VAR4, 1, VAR13);
            break;
        }
        case '':
        {
            VAR15 *VAR16 = FUN3(VAR7, VAR15 *);
            VAR4 += FUN1(VAR3, VAR4, "", VAR16->VAR17);
            VAR4 += FUN4(VAR3, VAR4, VAR16->VAR18, VAR16->VAR17);
            break;
        }
        case '':
        {
            VAR19 *VAR20 = FUN3(VAR7, VAR19 *);
            VAR4 += FUN1(VAR3, VAR4, "", VAR20->VAR21, VAR20->VAR22, VAR20->VAR23);
            break;
        }
        case '':
        {
            VAR24 *VAR25 = FUN3(VAR7, VAR24 *);
            VAR4 += FUN1(VAR3, VAR4, "", VAR25->VAR17, VAR25->VAR21, VAR25->VAR26, &VAR25->VAR27, VAR25->VAR28, VAR25->VAR29, VAR25->VAR30, VAR25->VAR31, &VAR25->VAR32, &VAR25->VAR33, &VAR25->VAR34, &VAR25->VAR35, &VAR25->VAR36, VAR25->VAR37, VAR25->VAR38, VAR25->VAR39);
            break;
        }
        case '':
        {
            VAR40 *VAR25 = FUN3(VAR7, VAR40 *);
            VAR4 += FUN1(VAR3, VAR4, "", VAR25->VAR41, &VAR25->VAR27, VAR25->VAR42, VAR25->VAR43, VAR25->VAR44, VAR25->VAR45, VAR25->VAR46, VAR25->VAR47, VAR25->VAR48, VAR25->VAR49, VAR25->VAR50, VAR25->VAR51, VAR25->VAR52, VAR25->VAR53, VAR25->VAR54, VAR25->VAR55, VAR25->VAR56, VAR25->VAR57, VAR25->VAR58, VAR25->VAR59);
            break;
        }
        default:
            break;
        }
    }
    FUN9(VAR7);
    return VAR4 - VAR6;
}