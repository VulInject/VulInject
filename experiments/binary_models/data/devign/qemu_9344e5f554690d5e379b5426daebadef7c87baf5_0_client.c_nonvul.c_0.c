int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 **VAR9)
{
    char VAR10[256];
    uint64_t VAR11, VAR12;
    int VAR13;
    FUN2("");
    VAR13 = -VAR14;
    if (FUN3(VAR2, VAR10, 8) != 8)
    {
        FUN4(VAR9, "");
        goto VAR15;
    }
    VAR10[8] = '';
    if (strlen(VAR10) == 0)
    {
        FUN4(VAR9, "");
        goto VAR15;
    }
    FUN2("", FUN5(VAR10[0]) ? VAR10[0] : '', FUN5(VAR10[1]) ? VAR10[1] : '', FUN5(VAR10[2]) ? VAR10[2] : '', FUN5(VAR10[3]) ? VAR10[3] : '', FUN5(VAR10[4]) ? VAR10[4] : '', FUN5(VAR10[5]) ? VAR10[5] : '', FUN5(VAR10[6]) ? VAR10[6] : '', FUN5(VAR10[7]) ? VAR10[7] : '');
    if (memcmp(VAR10, "", 8) != 0)
    {
        FUN4(VAR9, "");
        goto VAR15;
    }
    if (FUN3(VAR2, &VAR11, sizeof(VAR11)) != sizeof(VAR11))
    {
        FUN4(VAR9, "");
        goto VAR15;
    }
    VAR11 = FUN6(VAR11);
    FUN2("" VAR16, VAR11);
    if (VAR11 == VAR17)
    {
        uint32_t VAR18 = 0;
        uint32_t VAR19;
        uint32_t VAR20;
        uint16_t VAR21;
        uint16_t VAR22;
        bool VAR23 = false;
        if (FUN3(VAR2, &VAR21, sizeof(VAR21)) != sizeof(VAR21))
        {
            FUN4(VAR9, "");
            goto VAR15;
        }
        VAR21 = FUN7(VAR21);
        *VAR5 = VAR21 << 16;
        FUN2("", VAR21);
        if (VAR21 & VAR24)
        {
            VAR23 = true;
            FUN2("");
            VAR18 |= VAR25;
        }
        VAR18 = FUN8(VAR18);
        if (FUN9(VAR2, &VAR18, sizeof(VAR18)) != sizeof(VAR18))
        {
            FUN4(VAR9, "");
            goto VAR15;
        }
        if (!VAR3)
        {
            FUN4(VAR9, "");
            goto VAR15;
        }
        if (VAR23)
        {
            if (FUN10(VAR2, VAR3, VAR9) < 0)
            {
                goto VAR15;
            }
        }
        VAR11 = FUN11(VAR11);
        if (FUN9(VAR2, &VAR11, sizeof(VAR11)) != sizeof(VAR11))
        {
            FUN4(VAR9, "");
            goto VAR15;
        }
        VAR19 = FUN8(VAR26);
        if (FUN9(VAR2, &VAR19, sizeof(VAR19)) != sizeof(VAR19))
        {
            FUN4(VAR9, "");
            goto VAR15;
        }
        VAR20 = FUN8(strlen(VAR3));
        if (FUN9(VAR2, &VAR20, sizeof(VAR20)) != sizeof(VAR20))
        {
            FUN4(VAR9, "");
            goto VAR15;
        }
        if (FUN9(VAR2, (char *)VAR3, strlen(VAR3)) != strlen(VAR3))
        {
            FUN4(VAR9, "");
            goto VAR15;
        }
        if (FUN3(VAR2, &VAR12, sizeof(VAR12)) != sizeof(VAR12))
        {
            FUN4(VAR9, "");
            goto VAR15;
        }
        *VAR7 = FUN6(VAR12);
        FUN2("" VAR27, *VAR7);
        if (FUN3(VAR2, &VAR22, sizeof(VAR22)) != sizeof(VAR22))
        {
            FUN4(VAR9, "");
            goto VAR15;
        }
        VAR22 = FUN7(VAR22);
        *VAR5 |= VAR22;
        FUN2("", VAR22);
    }
    else if (VAR11 == VAR28)
    {
        if (VAR3)
        {
            FUN4(VAR9, "");
            goto VAR15;
        }
        if (FUN3(VAR2, &VAR12, sizeof(VAR12)) != sizeof(VAR12))
        {
            FUN4(VAR9, "");
            goto VAR15;
        }
        *VAR7 = FUN6(VAR12);
        FUN2("" VAR27, *VAR7);
        if (FUN3(VAR2, VAR5, sizeof(*VAR5)) != sizeof(*VAR5))
        {
            FUN4(VAR9, "");
            goto VAR15;
        }
        *VAR5 = FUN12(VAR5);
    }
    else
    {
        FUN4(VAR9, "");
        goto VAR15;
    }
    if (FUN3(VAR2, &VAR10, 124) != 124)
    {
        FUN4(VAR9, "");
        goto VAR15;
    }
    VAR13 = 0;
VAR15:
    return VAR13;
}