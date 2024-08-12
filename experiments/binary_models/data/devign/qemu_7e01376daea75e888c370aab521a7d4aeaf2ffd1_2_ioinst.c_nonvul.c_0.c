void FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    uint64_t VAR11;
    int VAR12;
    SCHIB VAR13;
    VAR14 *VAR15 = &VAR2->VAR15;
    uint8_t VAR16;
    VAR11 = FUN2(VAR15, VAR4, &VAR16);
    if (VAR11 & 3)
    {
        FUN3(VAR15, VAR17, 4);
        return;
    }
    if (FUN4(VAR3, &VAR8, &VAR5, &VAR6, &VAR7))
    {
        if (!FUN5(VAR2, VAR11, VAR16, sizeof(VAR13)))
        {
            FUN3(VAR15, VAR18, 4);
        }
        return;
    }
    FUN6("", VAR5, VAR6, VAR7);
    VAR10 = FUN7(VAR8, VAR5, VAR6, VAR7);
    if (VAR10)
    {
        if (FUN8(VAR10))
        {
            FUN9(VAR10, &VAR13);
            VAR12 = 0;
        }
        else
        {
            VAR12 = 3;
        }
    }
    else
    {
        if (FUN10(VAR8, VAR5, VAR6, VAR7))
        {
            VAR12 = 3;
        }
        else
        {
            memset(&VAR13, 0, sizeof(VAR13));
            VAR12 = 0;
        }
    }
    if (VAR12 != 3)
    {
        if (FUN11(VAR2, VAR11, VAR16, &VAR13, sizeof(VAR13)) != 0)
        {
            return;
        }
    }
    else
    {
        if (FUN5(VAR2, VAR11, VAR16, sizeof(VAR13)) != 0)
        {
            return;
        }
    }
    FUN12(VAR2, VAR12);
}