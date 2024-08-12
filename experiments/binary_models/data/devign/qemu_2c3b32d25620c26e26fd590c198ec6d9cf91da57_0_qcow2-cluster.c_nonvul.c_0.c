int FUN1(VAR1 *VAR2, uint64_t VAR3, int VAR4, int VAR5, int *VAR6, VAR7 *VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    uint64_t VAR14, VAR15;
    uint64_t VAR16;
    uint64_t VAR17;
    int VAR18;
    FUN2(FUN3(), VAR3, VAR4, VAR5);
    assert(VAR4 * VAR19 == FUN4(VAR12, VAR3));
    VAR3 = FUN5(VAR12, VAR3);
VAR20:
    VAR14 = VAR3 + (VAR4 << VAR21);
    VAR15 = (VAR5 - VAR4) << VAR21;
    VAR16 = 0;
    *VAR8 = 0;
    while (true)
    {
        VAR17 = VAR15;
        VAR18 = FUN6(VAR2, VAR14, &VAR17);
        if (VAR18 == -VAR22)
        {
            goto VAR20;
        }
        else if (VAR18 < 0)
        {
            return VAR18;
        }
        else
        {
        }
        VAR18 = FUN7(VAR2, VAR14, &VAR16, &VAR17, VAR10);
        if (VAR18 < 0)
        {
            return VAR18;
        }
        else if (VAR18)
        {
            if (!*VAR8)
            {
                *VAR8 = FUN5(VAR12, VAR16);
            }
            VAR14 += VAR17;
            VAR15 -= VAR17;
            VAR16 += VAR17;
            VAR17 = VAR15;
        }
        else if (VAR17 == 0)
        {
            break;
        }
        if (VAR15 == 0)
        {
            break;
        }
        VAR18 = FUN8(VAR2, VAR14, &VAR16, &VAR17, VAR10);
        if (VAR18 < 0)
        {
            return VAR18;
        }
        else if (VAR18)
        {
            if (!*VAR8)
            {
                *VAR8 = FUN5(VAR12, VAR16);
            }
            VAR14 += VAR17;
            VAR15 -= VAR17;
            VAR16 += VAR17;
            break;
        }
        else
        {
            assert(VAR17 == 0);
            break;
        }
    }
    *VAR6 = (VAR5 - VAR4) - (VAR15 >> VAR21);
    assert(*VAR6 > 0);
    assert(*VAR8 != 0);
    return 0;
}