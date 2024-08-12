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
            VAR9 *VAR10 = FUN3(VAR7, VAR9 *);
            VAR4 += FUN4(VAR10, VAR3, VAR4, sizeof(*VAR10));
            break;
        }
        case '':
        {
            uint16_t VAR11, *VAR10;
            VAR10 = FUN3(VAR7, VAR12 *);
            VAR4 += FUN4(&VAR11, VAR3, VAR4, sizeof(VAR11));
            *VAR10 = FUN5(VAR11);
            break;
        }
        case '':
        {
            uint32_t VAR11, *VAR10;
            VAR10 = FUN3(VAR7, VAR13 *);
            VAR4 += FUN4(&VAR11, VAR3, VAR4, sizeof(VAR11));
            *VAR10 = FUN6(VAR11);
            break;
        }
        case '':
        {
            uint64_t VAR11, *VAR10;
            VAR10 = FUN3(VAR7, VAR14 *);
            VAR4 += FUN4(&VAR11, VAR3, VAR4, sizeof(VAR11));
            *VAR10 = FUN7(VAR11);
            break;
        }
        case '':
        {
            struct VAR15 *VAR16 = FUN3(VAR7, struct VAR15 *);
            int *VAR17 = FUN3(VAR7, int *);
            *VAR17 = FUN8(VAR3, VAR4, 0, VAR16);
            break;
        }
        case '':
        {
            VAR18 *VAR19 = FUN3(VAR7, VAR18 *);
            VAR4 += FUN1(VAR3, VAR4, "", &VAR19->VAR20);
            VAR19->VAR21 = FUN9(VAR19->VAR20 + 1);
            VAR4 += FUN4(VAR19->VAR21, VAR3, VAR4, VAR19->VAR20);
            VAR19->VAR21[VAR19->VAR20] = 0;
            break;
        }
        case '':
        {
            VAR22 *VAR23 = FUN3(VAR7, VAR22 *);
            VAR4 += FUN1(VAR3, VAR4, "", &VAR23->VAR24, &VAR23->VAR25, &VAR23->VAR26);
            break;
        }
        case '':
        {
            VAR27 *VAR28 = FUN3(VAR7, VAR27 *);
            VAR4 += FUN1(VAR3, VAR4, "", &VAR28->VAR20, &VAR28->VAR24, &VAR28->VAR29, &VAR28->VAR30, &VAR28->VAR31, &VAR28->VAR32, &VAR28->VAR33, &VAR28->VAR34, &VAR28->VAR35, &VAR28->VAR36, &VAR28->VAR37, &VAR28->VAR38, &VAR28->VAR39, &VAR28->VAR40, &VAR28->VAR41, &VAR28->VAR42);
            break;
        }
        case '':
        {
            VAR43 *VAR44 = FUN3(VAR7, VAR43 *);
            VAR4 += FUN1(VAR3, VAR4, "", &VAR44->VAR45, &VAR44->VAR31, &VAR44->VAR36, &VAR44->VAR37, &VAR44->VAR20, &VAR44->VAR46, &VAR44->VAR47, &VAR44->VAR48, &VAR44->VAR49);
            break;
        }
        default:
            break;
        }
    }
    FUN10(VAR7);
    return VAR4 - VAR6;
}