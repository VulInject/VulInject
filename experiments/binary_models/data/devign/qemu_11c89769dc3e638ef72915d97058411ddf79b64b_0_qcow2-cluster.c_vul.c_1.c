int FUN1(VAR1 *VAR2, uint64_t VAR3, int *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    uint64_t VAR12, VAR13;
    uint64_t VAR14;
    uint64_t VAR15;
    int VAR16;
    FUN2(FUN3(), VAR3, *VAR4);
    assert((VAR3 & ~VAR17) == 0);
VAR18:
    VAR12 = VAR3;
    VAR13 = *VAR4 << VAR19;
    VAR14 = 0;
    *VAR6 = 0;
    VAR15 = 0;
    *VAR8 = NULL;
    while (true)
    {
        if (!*VAR6)
        {
            *VAR6 = FUN4(VAR10, VAR14);
        }
        assert(VAR13 >= VAR15);
        VAR12 += VAR15;
        VAR13 -= VAR15;
        VAR14 += VAR15;
        if (VAR13 == 0)
        {
            break;
        }
        VAR15 = VAR13;
        VAR16 = FUN5(VAR2, VAR12, &VAR15, VAR8);
        if (VAR16 == -VAR20)
        {
            assert(*VAR8 == NULL);
            goto VAR18;
        }
        else if (VAR16 < 0)
        {
            return VAR16;
        }
        else if (VAR15 == 0)
        {
            break;
        }
        else
        {
        }
        VAR16 = FUN6(VAR2, VAR12, &VAR14, &VAR15, VAR8);
        if (VAR16 < 0)
        {
            return VAR16;
        }
        else if (VAR16)
        {
            continue;
        }
        else if (VAR15 == 0)
        {
            break;
        }
        VAR16 = FUN7(VAR2, VAR12, &VAR14, &VAR15, VAR8);
        if (VAR16 < 0)
        {
            return VAR16;
        }
        else if (VAR16)
        {
            continue;
        }
        else
        {
            assert(VAR15 == 0);
            break;
        }
    }
    *VAR4 -= VAR13 >> VAR19;
    assert(*VAR4 > 0);
    assert(*VAR6 != 0);
    return 0;
}