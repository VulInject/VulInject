static void FUN1(const struct VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    struct VAR5 *VAR6;
    struct VAR1 *VAR7;
    struct sockaddr_in VAR8, VAR9;
    struct in_addr VAR10;
    const struct VAR11 *VAR12;
    int VAR13, VAR14;
    VAR15 *VAR16;
    FUN2(VAR2, &VAR13, &VAR12);
    FUN3("", VAR2->VAR17, VAR13);
    if (VAR12)
        FUN3("", FUN4(VAR12->VAR18));
    else
        FUN3("");
    if (VAR13 == 0)
        VAR13 = VAR19;
    if (VAR13 != VAR20 && VAR13 != VAR19)
        return;
    memcpy(VAR21, VAR2->VAR22, 6);
    if ((VAR6 = FUN5()) == NULL)
        return;
    VAR6->VAR23 += VAR24;
    VAR7 = (struct VAR1 *)VAR6->VAR23;
    VAR6->VAR23 += sizeof(struct VAR25);
    memset(VAR7, 0, sizeof(struct VAR1));
    if (VAR13 == VAR20)
    {
        if (VAR12)
        {
            VAR4 = FUN6(VAR12, VAR21);
            if (VAR4)
            {
                VAR9.VAR26 = *VAR12;
            }
        }
        if (!VAR4)
        {
        VAR27:
            VAR4 = FUN7(&VAR9.VAR26, VAR21);
            if (!VAR4)
            {
                FUN3("");
                return;
            }
        }
        memcpy(VAR4->VAR28, VAR21, 6);
    }
    else if (VAR12)
    {
        VAR4 = FUN6(VAR12, VAR21);
        if (VAR4)
        {
            VAR9.VAR26 = *VAR12;
            memcpy(VAR4->VAR28, VAR21, 6);
        }
        else
        {
            VAR9.VAR26.VAR18 = 0;
        }
    }
    else
    {
        VAR4 = FUN8(&VAR9.VAR26, VAR2->VAR22);
        if (!VAR4)
        {
            goto VAR27;
        }
    }
    VAR8.VAR26.VAR18 = FUN9(FUN4(VAR29.VAR18) | VAR30);
    VAR8.VAR31 = FUN10(VAR32);
    VAR9.VAR31 = FUN10(VAR33);
    VAR7->VAR17 = VAR34;
    VAR7->VAR35 = VAR2->VAR35;
    VAR7->VAR36 = 1;
    VAR7->VAR37 = 6;
    memcpy(VAR7->VAR22, VAR2->VAR22, 6);
    VAR7->VAR38 = VAR9.VAR26;
    VAR7->VAR39 = VAR8.VAR26;
    VAR16 = VAR7->VAR40;
    memcpy(VAR16, VAR41, 4);
    VAR16 += 4;
    if (VAR4)
    {
        FUN3("", (VAR13 == VAR20) ? "" : "", FUN4(VAR9.VAR26.VAR18));
        if (VAR13 == VAR20)
        {
            *VAR16++ = VAR42;
            *VAR16++ = 1;
            *VAR16++ = VAR43;
        }
        else
        {
            *VAR16++ = VAR42;
            *VAR16++ = 1;
            *VAR16++ = VAR44;
        }
        if (VAR45)
            snprintf((char *)VAR7->VAR46, sizeof(VAR7->VAR46), "", VAR45);
        *VAR16++ = VAR47;
        *VAR16++ = 4;
        memcpy(VAR16, &VAR8.VAR26, 4);
        VAR16 += 4;
        *VAR16++ = VAR48;
        *VAR16++ = 4;
        *VAR16++ = 0xff;
        *VAR16++ = 0xff;
        *VAR16++ = 0xff;
        *VAR16++ = 0x00;
        if (!VAR49)
        {
            *VAR16++ = VAR50;
            *VAR16++ = 4;
            memcpy(VAR16, &VAR8.VAR26, 4);
            VAR16 += 4;
            *VAR16++ = VAR51;
            *VAR16++ = 4;
            VAR10.VAR18 = FUN9(FUN4(VAR29.VAR18) | VAR52);
            memcpy(VAR16, &VAR10, 4);
            VAR16 += 4;
        }
        *VAR16++ = VAR53;
        *VAR16++ = 4;
        VAR14 = FUN9(VAR54);
        memcpy(VAR16, &VAR14, 4);
        VAR16 += 4;
        if (*VAR55)
        {
            VAR14 = strlen(VAR55);
            *VAR16++ = VAR56;
            *VAR16++ = VAR14;
            memcpy(VAR16, VAR55, VAR14);
            VAR16 += VAR14;
        }
    }
    else
    {
        static const char VAR57[] = "";
        FUN3("", FUN4(VAR12->VAR18));
        *VAR16++ = VAR42;
        *VAR16++ = 1;
        *VAR16++ = VAR58;
        *VAR16++ = VAR59;
        *VAR16++ = sizeof(VAR57) - 1;
        memcpy(VAR16, VAR57, sizeof(VAR57) - 1);
        VAR16 += sizeof(VAR57) - 1;
    }
    *VAR16++ = VAR60;
    VAR9.VAR26.VAR18 = 0xffffffffu;
    VAR6->VAR61 = sizeof(struct VAR1) - sizeof(struct VAR62) - sizeof(struct VAR63);
    FUN11(NULL, VAR6, &VAR8, &VAR9, VAR64);
}