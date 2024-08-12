int FUN1(int VAR1, const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    char VAR9[256];
    uint64_t VAR10, VAR11;
    uint16_t VAR12;
    int VAR13;
    FUN2("");
    VAR13 = -VAR14;
    if (FUN3(VAR1, VAR9, 8) != 8)
    {
        FUN4("");
        goto VAR15;
    }
    VAR9[8] = '';
    if (strlen(VAR9) == 0)
    {
        FUN4("");
        goto VAR15;
    }
    FUN2("", FUN5(VAR9[0]) ? VAR9[0] : '', FUN5(VAR9[1]) ? VAR9[1] : '', FUN5(VAR9[2]) ? VAR9[2] : '', FUN5(VAR9[3]) ? VAR9[3] : '', FUN5(VAR9[4]) ? VAR9[4] : '', FUN5(VAR9[5]) ? VAR9[5] : '', FUN5(VAR9[6]) ? VAR9[6] : '', FUN5(VAR9[7]) ? VAR9[7] : '');
    if (memcmp(VAR9, "", 8) != 0)
    {
        FUN4("");
        goto VAR15;
    }
    if (FUN3(VAR1, &VAR10, sizeof(VAR10)) != sizeof(VAR10))
    {
        FUN4("");
        goto VAR15;
    }
    VAR10 = FUN6(VAR10);
    FUN2("" VAR16, VAR10);
    if (VAR2)
    {
        uint32_t VAR17 = 0;
        uint32_t VAR18;
        uint32_t VAR19;
        FUN2("");
        if (VAR10 != 0x49484156454F5054LL)
        {
            FUN4("");
            goto VAR15;
        }
        if (FUN3(VAR1, &VAR12, sizeof(VAR12)) != sizeof(VAR12))
        {
            FUN4("");
            goto VAR15;
        }
        *VAR4 = FUN7(VAR12) << 16;
        if (FUN8(VAR1, &VAR17, sizeof(VAR17)) != sizeof(VAR17))
        {
            FUN4("");
            goto VAR15;
        }
        VAR10 = FUN9(VAR10);
        if (FUN8(VAR1, &VAR10, sizeof(VAR10)) != sizeof(VAR10))
        {
            FUN4("");
            goto VAR15;
        }
        VAR18 = FUN10(VAR20);
        if (FUN8(VAR1, &VAR18, sizeof(VAR18)) != sizeof(VAR18))
        {
            FUN4("");
            goto VAR15;
        }
        VAR19 = FUN10(strlen(VAR2));
        if (FUN8(VAR1, &VAR19, sizeof(VAR19)) != sizeof(VAR19))
        {
            FUN4("");
            goto VAR15;
        }
        if (FUN8(VAR1, (char *)VAR2, strlen(VAR2)) != strlen(VAR2))
        {
            FUN4("");
            goto VAR15;
        }
    }
    else
    {
        FUN2("");
        if (VAR10 != 0x00420281861253LL)
        {
            FUN4("");
            goto VAR15;
        }
    }
    if (FUN3(VAR1, &VAR11, sizeof(VAR11)) != sizeof(VAR11))
    {
        FUN4("");
        goto VAR15;
    }
    *VAR6 = FUN6(VAR11);
    *VAR8 = 1024;
    FUN2("" VAR21, *VAR6);
    if (!VAR2)
    {
        if (FUN3(VAR1, VAR4, sizeof(*VAR4)) != sizeof(*VAR4))
        {
            FUN4("");
            goto VAR15;
        }
        *VAR4 = FUN11(VAR4);
    }
    else
    {
        if (FUN3(VAR1, &VAR12, sizeof(VAR12)) != sizeof(VAR12))
        {
            FUN4("");
            goto VAR15;
        }
        *VAR4 |= FUN12(VAR12);
    }
    if (FUN3(VAR1, &VAR9, 124) != 124)
    {
        FUN4("");
        goto VAR15;
    }
    VAR13 = 0;
VAR15:
    return VAR13;
}