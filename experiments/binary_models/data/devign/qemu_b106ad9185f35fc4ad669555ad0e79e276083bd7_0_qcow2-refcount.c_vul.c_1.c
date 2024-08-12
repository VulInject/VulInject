int FUN1(VAR1 *VAR2, uint64_t VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    uint64_t VAR8;
    uint64_t VAR9;
    uint64_t VAR10;
    int VAR11, VAR12;
    assert(VAR4 >= 0);
    if (VAR4 == 0)
    {
        return 0;
    }
    VAR8 = VAR3 >> VAR6->VAR13;
    for (VAR10 = 0; VAR10 < VAR4; VAR10++)
    {
        VAR11 = FUN2(VAR2, VAR8++);
        if (VAR11 < 0)
        {
            return VAR11;
        }
        else if (VAR11 != 0)
        {
            break;
        }
    }
    VAR9 = VAR6->VAR14;
    VAR6->VAR14 = VAR8 + VAR10;
    VAR12 = FUN3(VAR2, VAR3, VAR10 << VAR6->VAR13, 1, VAR15);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    VAR6->VAR14 = VAR9;
    return VAR10;
}