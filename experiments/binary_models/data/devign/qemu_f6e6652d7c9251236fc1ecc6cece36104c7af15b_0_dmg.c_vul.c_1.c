static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5, uint64_t VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10;
    uint32_t VAR11, VAR12;
    VAR13 *VAR14 = NULL;
    uint64_t VAR15;
    uint64_t VAR16;
    VAR10 = FUN2(VAR2, VAR5, &VAR12);
    if (VAR10 < 0)
    {
        goto VAR17;
    }
    else if (VAR12 > VAR6)
    {
        VAR10 = -VAR18;
        goto VAR17;
    }
    VAR10 = FUN2(VAR2, VAR5 + 8, &VAR11);
    if (VAR10 < 0)
    {
        goto VAR17;
    }
    else if (VAR11 == 0 || VAR12 + VAR11 > VAR6)
    {
        VAR10 = -VAR18;
        goto VAR17;
    }
    VAR16 = VAR5 + VAR12;
    VAR15 = VAR16 + VAR11;
    while (VAR16 < VAR15)
    {
        VAR10 = FUN2(VAR2, VAR16, &VAR11);
        if (VAR10 < 0)
        {
            goto VAR17;
        }
        else if (VAR11 == 0)
        {
            VAR10 = -VAR18;
            goto VAR17;
        }
        VAR16 += 4;
        VAR14 = FUN3(VAR14, VAR11);
        VAR10 = FUN4(VAR2->VAR19, VAR16, VAR14, VAR11);
        if (VAR10 < 0)
        {
            goto VAR17;
        }
        VAR10 = FUN5(VAR8, VAR4, VAR14, VAR11);
        if (VAR10 < 0)
        {
            goto VAR17;
        }
        VAR16 += VAR11;
    }
    VAR10 = 0;
VAR17:
    FUN6(VAR14);
    return VAR10;
}