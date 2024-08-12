static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR4 *VAR7, int64_t VAR8)
{
    VAR9 *VAR10;
    int VAR11;
    uint32_t VAR12;
    if ((VAR11 = VAR2->FUN2(VAR2, &VAR10, VAR3, VAR13, NULL)) < 0)
        return VAR11;
    VAR11 = FUN3(VAR14);
    *VAR7 = FUN4(VAR10);
    if (*VAR7 < 8 || *VAR7 > VAR8)
        goto VAR15;
    if (FUN5(VAR10) != FUN6('', '', '', ''))
        goto VAR15;
    VAR12 = FUN4(VAR10);
    if (VAR12 > *VAR7)
        goto VAR15;
    if (FUN5(VAR10) != FUN6('', '', '', ''))
        goto VAR15;
    FUN7(VAR10, VAR12 - 8, VAR16);
    FUN4(VAR10);
    if (FUN5(VAR10) != FUN6('', '', '', ''))
        goto VAR15;
    while (FUN8(VAR10) < *VAR7)
    {
        uint32_t VAR12 = FUN4(VAR10);
        uint32_t VAR17 = FUN5(VAR10);
        int64_t VAR18 = FUN8(VAR10) + VAR12 - 8;
        if (VAR12 < 8 || VAR12 >= *VAR7)
            goto VAR15;
        if (VAR17 == FUN6('', '', '', ''))
        {
            const uint8_t VAR19[] = {0x6d, 0x1d, 0x9b, 0x05, 0x42, 0xd5, 0x44, 0xe6, 0x80, 0xe2, 0x14, 0x1d, 0xaf, 0xf7, 0x57, 0xb2};
            uint8_t VAR20[16];
            FUN9(VAR10, VAR20, 16);
            if (!memcmp(VAR20, VAR19, 16) && VAR12 >= 8 + 16 + 4 + 16)
            {
                FUN7(VAR10, 4, VAR16);
                *VAR5 = FUN10(VAR10);
                *VAR6 = FUN10(VAR10);
                VAR11 = 0;
                break;
            }
        }
        FUN7(VAR10, VAR18, VAR21);
    }
VAR15:
    FUN11(VAR2, &VAR10);
    return VAR11;
}