int FUN1(int VAR1, int VAR2, int VAR3)
{
    const VAR4 *VAR5, *VAR6;
    int VAR7;
    VAR6 = &VAR8[VAR2];
    VAR5 = &VAR8[VAR1];
    VAR7 = 0;
    VAR5 = &VAR8[VAR1];
    if (VAR5->VAR9 < VAR6->VAR9)
        VAR7 |= VAR10;
    if (VAR5->VAR11 >= VAR6->VAR11 || VAR5->VAR12 >= VAR6->VAR12)
        VAR7 |= VAR13;
    switch (VAR5->VAR14)
    {
    case VAR15:
        if (VAR6->VAR14 != VAR15 && VAR6->VAR14 != VAR16)
            VAR7 |= VAR17;
        break;
    case VAR16:
        if (VAR6->VAR14 != VAR16)
            VAR7 |= VAR17;
        break;
    case VAR18:
        if (VAR6->VAR14 != VAR18)
            VAR7 |= VAR17;
        break;
    case VAR19:
        if (VAR6->VAR14 != VAR19 && VAR6->VAR14 != VAR18)
            VAR7 |= VAR17;
        break;
    default:
        if (VAR6->VAR14 != VAR5->VAR14)
            VAR7 |= VAR17;
        break;
    }
    if (VAR5->VAR14 == VAR16 && VAR6->VAR14 != VAR16)
        VAR7 |= VAR20;
    if (!VAR5->VAR21 && (VAR6->VAR21 && VAR3))
        VAR7 |= VAR22;
    if (VAR5->VAR23 == VAR24 && (VAR6->VAR23 != VAR24 && VAR6->VAR14 != VAR16))
        VAR7 |= VAR25;
    return VAR7;
}