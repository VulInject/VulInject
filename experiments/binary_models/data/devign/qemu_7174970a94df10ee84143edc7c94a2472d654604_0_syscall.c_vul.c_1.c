static inline VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5)
{
    struct VAR6 *VAR7 = FUN2(VAR5);
    abi_long VAR8;
    abi_ulong VAR9;
    struct VAR10 *VAR11, *VAR12;
    socklen_t VAR13 = 0;
    VAR8 = FUN3(VAR3->VAR8);
    if (VAR8 < sizeof(struct VAR10))
        goto VAR14;
    VAR9 = FUN3(VAR3->VAR15);
    VAR11 = FUN4(VAR16, VAR9, VAR8, 0);
    VAR12 = VAR11;
    if (!VAR11)
        return -VAR17;
    while (VAR7 && VAR11)
    {
        void *VAR18 = FUN5(VAR7);
        void *VAR19 = FUN6(VAR11);
        int VAR20 = VAR7->VAR21 - FUN7(sizeof(struct VAR6));
        int VAR22, VAR23;
        if (VAR8 < sizeof(struct VAR6))
        {
            VAR3->VAR24 |= FUN8(VAR25);
            break;
        }
        if (VAR7->VAR26 == VAR27)
        {
            VAR11->VAR26 = FUN8(VAR28);
        }
        else
        {
            VAR11->VAR26 = FUN8(VAR7->VAR26);
        }
        VAR11->VAR29 = FUN8(VAR7->VAR29);
        VAR22 = FUN9(VAR20);
        switch (VAR7->VAR26)
        {
        case VAR27:
            switch (VAR7->VAR29)
            {
            case VAR30:
                VAR22 = sizeof(struct VAR31);
                break;
            default:
                break;
            }
        default:
            break;
        }
        if (VAR8 < VAR22)
        {
            VAR3->VAR24 |= FUN8(VAR25);
            VAR22 = VAR8;
        }
        switch (VAR7->VAR26)
        {
        case VAR27:
            switch (VAR7->VAR29)
            {
            case VAR32:
            {
                int *VAR33 = (int *)VAR18;
                int *VAR34 = (int *)VAR19;
                int VAR35, VAR36 = VAR22 / sizeof(int);
                for (VAR35 = 0; VAR35 < VAR36; VAR35++)
                {
                    FUN10(VAR33[VAR35], VAR34 + VAR35);
                }
                break;
            }
            case VAR30:
            {
                struct VAR37 *VAR38 = (struct VAR37 *)VAR18;
                struct VAR31 *VAR39 = (struct VAR31 *)VAR19;
                if (VAR20 != sizeof(struct VAR37) || VAR22 != sizeof(struct VAR31))
                {
                    goto VAR40;
                }
                FUN10(VAR38->VAR41, &VAR39->VAR41);
                FUN10(VAR38->VAR42, &VAR39->VAR42);
                break;
            }
            case VAR43:
            {
                struct VAR44 *VAR45 = (struct VAR44 *)VAR18;
                struct VAR46 *VAR47 = (struct VAR46 *)VAR19;
                FUN10(VAR45->VAR48, &VAR47->VAR48);
                FUN10(VAR45->VAR49, &VAR47->VAR49);
                FUN10(VAR45->VAR50, &VAR47->VAR50);
                break;
            }
            default:
                goto VAR40;
            }
            break;
        case VAR51:
            switch (VAR7->VAR29)
            {
            case VAR52:
            {
                VAR53 *VAR54 = (VAR53 *)VAR18;
                VAR53 *VAR55 = (VAR53 *)VAR19;
                FUN10(*VAR54, VAR55);
                break;
            }
            case VAR56:
            {
                struct VAR57
                {
                    struct sock_extended_err VAR58;
                    struct sockaddr_in VAR59;
                };
                struct VAR57 *VAR60 = (struct VAR57 *)VAR18;
                struct VAR57 *VAR61 = (struct VAR57 *)VAR19;
                FUN10(VAR60->VAR58.VAR62, &VAR61->VAR58.VAR62);
                FUN10(VAR60->VAR58.VAR63, &VAR61->VAR58.VAR63);
                FUN10(VAR60->VAR58.VAR64, &VAR61->VAR58.VAR64);
                FUN10(VAR60->VAR58.VAR65, &VAR61->VAR58.VAR65);
                FUN10(VAR60->VAR58.VAR66, &VAR61->VAR58.VAR66);
                FUN10(VAR60->VAR58.VAR67, &VAR61->VAR58.VAR67);
                FUN10(VAR60->VAR58.VAR68, &VAR61->VAR58.VAR68);
                FUN11((unsigned long)&VAR61->VAR59, (void *)&VAR60->VAR59, sizeof(VAR60->VAR59));
                break;
            }
            default:
                goto VAR40;
            }
            break;
        case VAR69:
            switch (VAR7->VAR29)
            {
            case VAR70:
            {
                VAR53 *VAR54 = (VAR53 *)VAR18;
                VAR53 *VAR55 = (VAR53 *)VAR19;
                FUN10(*VAR54, VAR55);
                break;
            }
            case VAR71:
            {
                struct VAR72
                {
                    struct sock_extended_err VAR58;
                    struct sockaddr_in6 VAR59;
                };
                struct VAR72 *VAR60 = (struct VAR72 *)VAR18;
                struct VAR72 *VAR61 = (struct VAR72 *)VAR19;
                FUN10(VAR60->VAR58.VAR62, &VAR61->VAR58.VAR62);
                FUN10(VAR60->VAR58.VAR63, &VAR61->VAR58.VAR63);
                FUN10(VAR60->VAR58.VAR64, &VAR61->VAR58.VAR64);
                FUN10(VAR60->VAR58.VAR65, &VAR61->VAR58.VAR65);
                FUN10(VAR60->VAR58.VAR66, &VAR61->VAR58.VAR66);
                FUN10(VAR60->VAR58.VAR67, &VAR61->VAR58.VAR67);
                FUN10(VAR60->VAR58.VAR68, &VAR61->VAR58.VAR68);
                FUN11((unsigned long)&VAR61->VAR59, (void *)&VAR60->VAR59, sizeof(VAR60->VAR59));
                break;
            }
            default:
                goto VAR40;
            }
            break;
        default:
        VAR40:
            FUN12("", VAR7->VAR26, VAR7->VAR29);
            memcpy(VAR19, VAR18, FUN13(VAR20, VAR22));
            if (VAR22 > VAR20)
            {
                memset(VAR19 + VAR20, 0, VAR22 - VAR20);
            }
        }
        VAR11->VAR21 = FUN3(VAR22);
        VAR23 = FUN14(VAR20);
        if (VAR8 < VAR23)
        {
            VAR23 = VAR8;
        }
        VAR8 -= VAR23;
        VAR13 += VAR23;
        VAR7 = FUN15(VAR5, VAR7);
        VAR11 = FUN16(VAR3, VAR11, VAR12);
    }
    FUN17(VAR11, VAR9, VAR13);
VAR14:
    VAR3->VAR8 = FUN3(VAR13);
    return 0;
}