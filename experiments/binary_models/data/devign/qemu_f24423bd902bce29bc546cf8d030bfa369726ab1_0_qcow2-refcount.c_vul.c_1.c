int FUN1(VAR1 *VAR2, uint64_t VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    uint64_t VAR8;
    uint64_t VAR9;
    int VAR10, VAR11, VAR12;
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
    VAR12 = FUN3(VAR2, VAR3, VAR10 << VAR6->VAR13, 1);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    return VAR10;