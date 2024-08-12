static int FUN1(VAR1 *VAR2, const int VAR3)
{
    uint16_t VAR4;
    uint64_t VAR5 = 0;
    VAR6 *VAR7 = NULL, VAR8, VAR9 = 0, VAR10 = 0, VAR11 = 0;
    const VAR6 *VAR12 = VAR2->VAR12 + 4;
    static const uint8_t VAR13[4] = {0, 0, 0, 1};
    int VAR14 = (*VAR12++ & 0x3) + 1;
    VAR8 = *VAR12++ & 0x1f;
    if (!VAR8)
    {
        goto VAR15;
    }
    else
    {
        VAR10 = 1;
    }
    while (VAR8--)
    {
        void *VAR16;
        VAR4 = FUN2(VAR12);
        VAR5 += VAR4 + 4;
        if (VAR5 > VAR17 - VAR3)
        {
            FUN3(VAR2, VAR18, "");
            FUN4(VAR7);
            return FUN5(VAR19);
        }
        if (VAR12 + 2 + VAR4 > VAR2->VAR12 + VAR2->VAR20)
        {
            FUN3(VAR2, VAR18, ""
                                        "");
            FUN4(VAR7);
            return FUN5(VAR19);
        }
        VAR16 = FUN6(VAR7, VAR5 + VAR3);
        if (!VAR16)
        {
            FUN4(VAR7);
            return FUN5(VAR21);
        }
        VAR7 = VAR16;
        memcpy(VAR7 + VAR5 - VAR4 - 4, VAR13, 4);
        memcpy(VAR7 + VAR5 - VAR4, VAR12 + 2, VAR4);
        VAR12 += 2 + VAR4;
    VAR15:
        if (!VAR8 && !VAR9++)
        {
            VAR8 = *VAR12++;
            if (VAR8)
                VAR11 = 1;
        }
    }
    if (VAR7)
        memset(VAR7 + VAR5, 0, VAR22);
    if (!VAR10)
        FUN3(VAR2, VAR23, ""
                                      "");
    if (!VAR11)
        FUN3(VAR2, VAR23, ""
                                      "");
    FUN4(VAR2->VAR12);
    VAR2->VAR12 = VAR7;
    VAR2->VAR20 = VAR5;
    return VAR14;
}