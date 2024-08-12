static void FUN1(VAR1 *VAR2, const struct VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    struct VAR7 *VAR8;
    struct VAR3 *VAR9;
    struct sockaddr_in VAR10, VAR11;
    struct in_addr VAR12;
    int VAR13, VAR14;
    VAR15 *VAR16;
    uint8_t VAR17[VAR18];
    FUN2(VAR4, &VAR13, &VAR12);
    FUN3("", VAR4->VAR19, VAR13);
    if (VAR12.VAR20 != FUN4(0L))
        FUN3("" VAR21 "", FUN5(VAR12.VAR20));
    else
        FUN3("");
    if (VAR13 == 0)
        VAR13 = VAR22;
    if (VAR13 != VAR23 && VAR13 != VAR22)
        return;
    memcpy(VAR17, VAR4->VAR24, VAR18);
    VAR8 = FUN6(VAR2);
    if (!VAR8)
    {
        return;
    }
    VAR8->VAR25 += VAR26;
    VAR9 = (struct VAR3 *)VAR8->VAR25;
    VAR8->VAR25 += sizeof(struct VAR27);
    memset(VAR9, 0, sizeof(struct VAR3));
    if (VAR13 == VAR23)
    {
        if (VAR12.VAR20 != FUN4(0L))
        {
            VAR6 = FUN7(VAR2, &VAR12, VAR17);
            if (VAR6)
            {
                VAR11.VAR28 = VAR12;
            }
        }
        if (!VAR6)
        {
        VAR29:
            VAR6 = FUN8(VAR2, &VAR11.VAR28, VAR17);
            if (!VAR6)
            {
                FUN3("");
                return;
            }
        }
        memcpy(VAR6->VAR30, VAR17, VAR18);
    }
    else if (VAR12.VAR20 != FUN4(0L))
    {
        VAR6 = FUN7(VAR2, &VAR12, VAR17);
        if (VAR6)
        {
            VAR11.VAR28 = VAR12;
            memcpy(VAR6->VAR30, VAR17, VAR18);
        }
        else
        {
            VAR11.VAR28.VAR20 = 0xffffffff;
        }
    }
    else
    {
        VAR6 = FUN9(VAR2, &VAR11.VAR28, VAR4->VAR24);
        if (!VAR6)
        {
            goto VAR29;
        }
    }
    FUN10(VAR2, VAR11.VAR28.VAR20, VAR17);
    VAR10.VAR28 = VAR2->VAR31;
    VAR10.VAR32 = FUN11(VAR33);
    VAR11.VAR32 = FUN11(VAR34);
    VAR9->VAR19 = VAR35;
    VAR9->VAR36 = VAR4->VAR36;
    VAR9->VAR37 = 1;
    VAR9->VAR38 = 6;
    memcpy(VAR9->VAR24, VAR4->VAR24, VAR18);
    VAR9->VAR39 = VAR11.VAR28;
    VAR9->VAR40 = VAR10.VAR28;
    VAR16 = VAR9->VAR41;
    memcpy(VAR16, VAR42, 4);
    VAR16 += 4;
    if (VAR6)
    {
        FUN3("" VAR21 "", (VAR13 == VAR23) ? "" : "", FUN5(VAR11.VAR28.VAR20));
        if (VAR13 == VAR23)
        {
            *VAR16++ = VAR43;
            *VAR16++ = 1;
            *VAR16++ = VAR44;
        }
        else
        {
            *VAR16++ = VAR43;
            *VAR16++ = 1;
            *VAR16++ = VAR45;
        }
        if (VAR2->VAR46)
            snprintf((char *)VAR9->VAR47, sizeof(VAR9->VAR47), "", VAR2->VAR46);
        *VAR16++ = VAR48;
        *VAR16++ = 4;
        memcpy(VAR16, &VAR10.VAR28, 4);
        VAR16 += 4;
        *VAR16++ = VAR49;
        *VAR16++ = 4;
        memcpy(VAR16, &VAR2->VAR50, 4);
        VAR16 += 4;
        if (!VAR2->VAR51)
        {
            *VAR16++ = VAR52;
            *VAR16++ = 4;
            memcpy(VAR16, &VAR10.VAR28, 4);
            VAR16 += 4;
            *VAR16++ = VAR53;
            *VAR16++ = 4;
            memcpy(VAR16, &VAR2->VAR54, 4);
            VAR16 += 4;
        }
        *VAR16++ = VAR55;
        *VAR16++ = 4;
        VAR14 = FUN4(VAR56);
        memcpy(VAR16, &VAR14, 4);
        VAR16 += 4;
        if (*VAR2->VAR57)
        {
            VAR14 = strlen(VAR2->VAR57);
            *VAR16++ = VAR58;
            *VAR16++ = VAR14;
            memcpy(VAR16, VAR2->VAR57, VAR14);
            VAR16 += VAR14;
        }
        if (VAR2->VAR59)
        {
            size_t VAR60 = sizeof(VAR9->VAR41) - (VAR16 - VAR9->VAR41);
            VAR14 = VAR2->VAR61;
            if (VAR14 + 1 > VAR60)
            {
                FUN12(""
                          "");
            }
            else
            {
                memcpy(VAR16, VAR2->VAR59, VAR14);
                VAR16 += VAR14;
            }
        }
    }
    else
    {
        static const char VAR62[] = "";
        FUN3("" VAR21 "", FUN5(VAR12.VAR20));
        *VAR16++ = VAR43;
        *VAR16++ = 1;
        *VAR16++ = VAR63;
        *VAR16++ = VAR64;
        *VAR16++ = sizeof(VAR62) - 1;
        memcpy(VAR16, VAR62, sizeof(VAR62) - 1);
        VAR16 += sizeof(VAR62) - 1;
    }
    *VAR16 = VAR65;
    VAR11.VAR28.VAR20 = 0xffffffffu;
    VAR8->VAR66 = sizeof(struct VAR3) - sizeof(struct VAR67) - sizeof(struct VAR68);
    FUN13(NULL, VAR8, &VAR10, &VAR11, VAR69);
}