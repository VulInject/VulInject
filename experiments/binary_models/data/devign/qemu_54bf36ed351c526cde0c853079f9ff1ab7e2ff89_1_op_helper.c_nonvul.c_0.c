static bool FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    uint64_t VAR6 = VAR5->VAR7.VAR8[VAR3];
    int VAR9 = FUN2(VAR2->VAR10, 24, 4);
    int VAR11 = FUN2(VAR2->VAR10, 20, 4);
    int VAR12;
    uint32_t VAR13;
    if (VAR3 > VAR9 || VAR3 < (VAR9 - VAR11))
    {
        return false;
    }
    VAR6 = VAR5->VAR7.VAR8[VAR3];
    if (FUN3(VAR6, 0, 1) == 0)
    {
        return false;
    }
    VAR12 = FUN3(VAR6, 20, 4);
    VAR13 = FUN3(VAR5->VAR7.VAR14[1], 0, 32);
    switch (VAR12)
    {
    case 3:
        if (FUN4(VAR5) > 1)
        {
            return false;
        }
        return (VAR13 == FUN3(VAR5->VAR7.VAR15[VAR3], 0, 32));
    case 5:
    case 9:
    case 11:
    default:
        return false;
    }
    return false;
}