static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6 = 0, VAR7 = 0;
    struct VAR8 *VAR9;
    void *VAR10;
    uint64_t VAR11 = VAR12, VAR13;
    if (FUN2(VAR2->VAR9, 0))
    {
        return -1;
    }
    while (VAR11 != VAR3)
    {
        VAR7 = FUN3(VAR2, &VAR13, VAR5);
        if (VAR7 < 0)
        {
            return VAR7;
        }
        VAR11 = VAR13 & VAR14;
        if (VAR11 == VAR12)
        {
            break;
        }
        if (VAR11 != VAR3)
        {
            FUN4(FUN5(VAR3), VAR3, FUN5(VAR11), VAR11);
        }
    }
    if (VAR11 == VAR3)
    {
        return 0;
    }
    while (1)
    {
        VAR7 = FUN6(VAR2);
        if (VAR7)
        {
            goto VAR15;
        }
        VAR7 = FUN7(VAR2->VAR16, &VAR9, &VAR10);
        if (VAR7)
        {
            FUN8("");
            goto VAR15;
        }
        VAR6++;
        VAR7 = -FUN2(VAR9, 0);
        if (VAR7)
        {
            goto VAR15;
        }
        while (VAR11 != VAR3)
        {
            VAR7 = FUN3(VAR2, &VAR13, VAR5);
            if (VAR7 < 0)
            {
                goto VAR15;
            }
            VAR11 = VAR13 & VAR14;
            if (VAR11 == VAR12)
            {
                break;
            }
            if (VAR11 != VAR3)
            {
                FUN4(FUN5(VAR3), VAR3, FUN5(VAR11), VAR11);
            }
        }
        if (VAR11 == VAR3)
        {
            goto VAR17;
        }
    }
VAR17:
    if (VAR6)
    {
        FUN9(VAR9, VAR6);
    }
    return 0;
VAR15:
    if (VAR6)
    {
        FUN9(VAR9, VAR6);
    }
    VAR2->VAR18 = VAR7;
    return VAR7;
}