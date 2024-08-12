static unsigned FUN1(const struct VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4)
{
    int VAR5;
    if (!(VAR3 & VAR6))
    {
        if (VAR2->VAR7 != 12)
        {
            return 0;
        }
        return 12;
    }
    for (VAR5 = 0; VAR5 < VAR8; VAR5++)
    {
        const struct VAR9 *VAR10 = &VAR2->VAR11[VAR5];
        uint64_t VAR12;
        if (!VAR10->VAR7)
        {
            break;
        }
        if (VAR10->VAR7 == 12)
        {
            continue;
        }
        VAR12 = ((1ULL << VAR10->VAR7) - 1) & VAR13;
        if ((VAR4 & VAR12) == (VAR10->VAR14 << VAR15))
        {
            return VAR10->VAR7;
        }
    }
    return 0;
}