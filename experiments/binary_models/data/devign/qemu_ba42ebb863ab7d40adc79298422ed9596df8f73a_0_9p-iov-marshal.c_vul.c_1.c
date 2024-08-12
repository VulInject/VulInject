VAR1 FUN1(struct VAR2 *VAR3, int VAR4, size_t VAR5, int VAR6, const char *VAR7, va_list VAR8)
{
    int VAR9;
    ssize_t VAR10 = 0;
    size_t VAR11 = VAR5;
    for (VAR9 = 0; VAR7[VAR9]; VAR9++)
    {
        switch (VAR7[VAR9])
        {
        case '':
        {
            VAR12 *VAR13 = FUN2(VAR8, VAR12 *);
            VAR10 = FUN3(VAR13, VAR3, VAR4, VAR5, sizeof(*VAR13));
            break;
        }
        case '':
        {
            uint16_t VAR14, *VAR13;
            VAR13 = FUN2(VAR8, VAR15 *);
            VAR10 = FUN3(&VAR14, VAR3, VAR4, VAR5, sizeof(VAR14));
            if (VAR6)
            {
                *VAR13 = FUN4(VAR14);
            }
            else
            {
                *VAR13 = VAR14;
            }
            break;
        }
        case '':
        {
            uint32_t VAR14, *VAR13;
            VAR13 = FUN2(VAR8, VAR16 *);
            VAR10 = FUN3(&VAR14, VAR3, VAR4, VAR5, sizeof(VAR14));
            if (VAR6)
            {
                *VAR13 = FUN5(VAR14);
            }
            else
            {
                *VAR13 = VAR14;
            }
            break;
        }
        case '':
        {
            uint64_t VAR14, *VAR13;
            VAR13 = FUN2(VAR8, VAR17 *);
            VAR10 = FUN3(&VAR14, VAR3, VAR4, VAR5, sizeof(VAR14));
            if (VAR6)
            {
                *VAR13 = FUN6(VAR14);
            }
            else
            {
                *VAR13 = VAR14;
            }
            break;
        }
        case '':
        {
            VAR18 *VAR19 = FUN2(VAR8, VAR18 *);
            VAR10 = FUN7(VAR3, VAR4, VAR5, VAR6, "", &VAR19->VAR20);
            if (VAR10 > 0)
            {
                VAR5 += VAR10;
                VAR19->VAR21 = FUN8(VAR19->VAR20 + 1);
                VAR10 = FUN3(VAR19->VAR21, VAR3, VAR4, VAR5, VAR19->VAR20);
                if (VAR10 > 0)
                {
                    VAR19->VAR21[VAR19->VAR20] = 0;
                }
                else
                {
                    FUN9(VAR19);
                }
            }
            break;
        }
        case '':
        {
            VAR22 *VAR23 = FUN2(VAR8, VAR22 *);
            VAR10 = FUN7(VAR3, VAR4, VAR5, VAR6, "", &VAR23->VAR24, &VAR23->VAR25, &VAR23->VAR26);
            break;
        }
        case '':
        {
            VAR27 *VAR28 = FUN2(VAR8, VAR27 *);
            VAR10 = FUN7(VAR3, VAR4, VAR5, VAR6, "", &VAR28->VAR20, &VAR28->VAR24, &VAR28->VAR29, &VAR28->VAR30, &VAR28->VAR31, &VAR28->VAR32, &VAR28->VAR33, &VAR28->VAR34, &VAR28->VAR35, &VAR28->VAR36, &VAR28->VAR37, &VAR28->VAR38, &VAR28->VAR39, &VAR28->VAR40, &VAR28->VAR41, &VAR28->VAR42);
            break;
        }
        case '':
        {
            VAR43 *VAR44 = FUN2(VAR8, VAR43 *);
            VAR10 = FUN7(VAR3, VAR4, VAR5, VAR6, "", &VAR44->VAR45, &VAR44->VAR31, &VAR44->VAR36, &VAR44->VAR37, &VAR44->VAR20, &VAR44->VAR46, &VAR44->VAR47, &VAR44->VAR48, &VAR44->VAR49);
            break;
        }
        default:
            break;
        }
        if (VAR10 < 0)
        {
            return VAR10;
        }
        VAR5 += VAR10;
    }
    return VAR5 - VAR11;
}