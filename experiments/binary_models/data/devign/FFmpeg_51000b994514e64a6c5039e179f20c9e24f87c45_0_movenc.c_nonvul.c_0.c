static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR10[VAR4->VAR11];
    int64_t VAR12;
    uint64_t VAR13;
    if (VAR9->VAR14)
    {
        VAR12 = VAR9->VAR15[VAR9->VAR14 - 1].VAR16;
    }
    else if (VAR9->VAR17 != VAR18)
    {
        VAR12 = VAR9->VAR17 + VAR9->VAR19;
    }
    else
        VAR12 = VAR4->VAR16;
    VAR13 = VAR4->VAR16 - VAR12;
    if (VAR4->VAR16 < VAR12 || VAR13 >= VAR20)
    {
        FUN2(VAR2, VAR21, "" VAR22 "" VAR22 "", VAR13, VAR4->VAR16);
        VAR4->VAR16 = VAR12 + 1;
        VAR4->VAR23 = VAR18;
    }
    if (VAR4->VAR13 < 0 || VAR4->VAR13 > VAR20)
    {
        FUN2(VAR2, VAR21, "" VAR22 "", VAR4->VAR13);
        return FUN3(VAR24);
    }
    return 0;
}