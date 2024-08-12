static VAR1 FUN1(const VAR2 *VAR3, VAR4 *VAR5, int VAR6, abi_long VAR7, abi_long VAR8)
{
    void *VAR9;
    struct VAR10 *VAR11;
    abi_long VAR12;
    uint32_t VAR13;
    int VAR14;
    const VAR15 *VAR16 = VAR3->VAR16;
    abi_long VAR17;
    void *VAR18 = NULL;
    char *VAR19;
    VAR16++;
    VAR14 = FUN2(VAR16, 0);
    VAR9 = FUN3(VAR20, VAR8, VAR14, 1);
    if (!VAR9)
    {
        VAR17 = -VAR21;
        goto VAR22;
    }
    FUN4(VAR5, VAR9, VAR16, VAR23);
    FUN5(VAR9, VAR8, 0);
    VAR18 = FUN6(((struct VAR10 *)VAR5)->VAR24 * 2);
    memcpy(VAR18, VAR5, VAR14);
    VAR5 = VAR18;
    VAR11 = VAR18;
    VAR12 = VAR8 + VAR11->VAR25;
    if ((VAR12 - VAR8) < 0)
    {
        VAR17 = -VAR26;
        goto VAR22;
    }
    VAR13 = VAR11->VAR24 - VAR11->VAR25;
    VAR19 = (char *)VAR11 + VAR11->VAR25;
    VAR9 = FUN3(VAR20, VAR12, VAR13, 1);
    switch (VAR3->VAR27)
    {
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR35:
    case VAR36:
    case VAR37:
    case VAR38:
        break;
    case VAR39:
    case VAR40:
        memcpy(VAR19, VAR9, VAR13);
        break;
    case VAR41:
        memcpy(VAR19, VAR9, VAR13);
        *(VAR42 *)VAR19 = FUN7(*(VAR42 *)VAR9);
        break;
    case VAR43:
    {
        void *VAR44 = VAR9;
        void *VAR45 = VAR19;
        const argtype VAR16[] = {FUN8(VAR46)};
        int VAR47 = FUN2(VAR16, 0);
        int VAR48;
        for (VAR48 = 0; VAR48 < VAR11->VAR49; VAR48++)
        {
            struct VAR50 *VAR51 = VAR45;
            uint32_t VAR52;
            int VAR53;
            FUN4(VAR51, VAR44, VAR16, VAR23);
            VAR53 = strlen((char *)VAR44 + VAR47) + 1;
            VAR52 = VAR51->VAR52;
            VAR51->VAR52 = sizeof(*VAR51) + VAR53;
            strcpy((char *)&VAR51[1], VAR44 + VAR47);
            VAR44 += VAR52;
            VAR45 += VAR51->VAR52;
        }
        break;
    }
    default:
        VAR17 = -VAR54;
        goto VAR22;
    }
    FUN5(VAR9, VAR12, 0);
    VAR17 = FUN9(FUN10(VAR6, VAR3->VAR27, VAR5));
    if (!FUN11(VAR17))
    {
        VAR12 = VAR8 + VAR11->VAR25;
        VAR13 = VAR11->VAR24 - VAR11->VAR25;
        VAR9 = FUN3(VAR55, VAR12, VAR13, 0);
        switch (VAR3->VAR27)
        {
        case VAR28:
        case VAR30:
        case VAR31:
        case VAR39:
        case VAR32:
        case VAR33:
        case VAR43:
        case VAR36:
        case VAR41:
        case VAR40:
            break;
        case VAR29:
        {
            struct VAR56 *VAR57 = (void *)VAR11 + VAR11->VAR25;
            uint32_t VAR58 = VAR13;
            void *VAR45 = VAR9;
            const argtype VAR16[] = {FUN8(VAR59)};
            int VAR60 = 12;
            while (1)
            {
                uint32_t VAR52 = VAR57->VAR52;
                if (VAR52)
                {
                    VAR57->VAR52 = VAR60 + (strlen(VAR57->VAR61) + 1);
                }
                if (VAR58 < VAR57->VAR52)
                {
                    VAR11->VAR62 |= VAR63;
                    break;
                }
                FUN4(VAR45, VAR57, VAR16, VAR64);
                strcpy(VAR45 + VAR60, VAR57->VAR61);
                VAR45 += VAR57->VAR52;
                VAR58 -= VAR57->VAR52;
                if (!VAR52)
                {
                    break;
                }
                VAR57 = (void *)VAR57 + VAR52;
            }
            break;
        }
        case VAR34:
        case VAR35:
        {
            struct VAR50 *VAR51 = (void *)VAR11 + VAR11->VAR25;
            void *VAR45 = VAR9;
            const argtype VAR16[] = {FUN8(VAR46)};
            int VAR47 = FUN2(VAR16, 0);
            int VAR48;
            for (VAR48 = 0; VAR48 < VAR11->VAR49; VAR48++)
            {
                uint32_t VAR52 = VAR51->VAR52;
                int VAR53 = strlen((char *)&VAR51[1]) + 1;
                VAR51->VAR52 = (VAR45 - VAR9) + VAR47 + VAR53;
                if (VAR13 < VAR51->VAR52)
                {
                    VAR11->VAR62 |= VAR63;
                    break;
                }
                FUN4(VAR45, VAR51, VAR16, VAR64);
                strcpy(VAR45 + VAR47, (char *)&VAR51[1]);
                VAR45 = VAR9 + VAR51->VAR52;
                VAR51 = (void *)VAR11 + VAR11->VAR25 + VAR52;
            }
            break;
        }
        case VAR37:
        {
            void *VAR65 = (void *)VAR11 + VAR11->VAR25;
            int VAR66 = *(VAR67 *)VAR65;
            VAR42 *VAR68 = VAR65 + 8;
            VAR42 *VAR69 = VAR9 + 8;
            int VAR48;
            *(VAR67 *)VAR9 = FUN12(VAR66);
            for (VAR48 = 0; VAR48 < VAR66; VAR48++)
            {
                *VAR69 = FUN7(*VAR68);
                VAR69++;
                VAR68++;
            }
            break;
        }
        case VAR38:
        {
            struct VAR70 *VAR71 = (void *)VAR11 + VAR11->VAR25;
            uint32_t VAR58 = VAR13;
            void *VAR45 = VAR9;
            const argtype VAR16[] = {FUN8(VAR72)};
            int VAR73 = FUN2(VAR16, 0);
            while (1)
            {
                uint32_t VAR52 = VAR71->VAR52;
                if (VAR52)
                {
                    VAR71->VAR52 = VAR73 + (strlen(VAR71->VAR61) + 1);
                }
                if (VAR58 < VAR71->VAR52)
                {
                    VAR11->VAR62 |= VAR63;
                    break;
                }
                FUN4(VAR45, VAR71, VAR16, VAR64);
                strcpy(VAR45 + VAR73, VAR71->VAR61);
                VAR45 += VAR71->VAR52;
                VAR58 -= VAR71->VAR52;
                if (!VAR52)
                {
                    break;
                }
                VAR71 = (void *)VAR71 + VAR52;
            }
            break;
        }
        default:
            VAR17 = -VAR54;
            goto VAR22;
        }
        FUN5(VAR9, VAR12, VAR13);
        VAR9 = FUN3(VAR55, VAR8, VAR14, 0);
        if (!VAR9)
        {
            VAR17 = -VAR21;
            goto VAR22;
        }
        FUN4(VAR9, VAR5, VAR16, VAR64);
        FUN5(VAR9, VAR8, VAR14);
    }
VAR22:
    FUN13(VAR18);
    return VAR17;
}