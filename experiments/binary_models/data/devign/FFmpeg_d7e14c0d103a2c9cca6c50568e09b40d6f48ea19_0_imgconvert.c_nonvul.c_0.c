int FUN1(enum PixelFormat VAR1, enum PixelFormat VAR2, int VAR3)
{
    const VAR4 *VAR5, *VAR6;
    const VAR7 *VAR8 = &VAR9[VAR2];
    const VAR7 *VAR10 = &VAR9[VAR1];
    int VAR11;
    VAR6 = &VAR12[VAR2];
    VAR11 = 0;
    VAR5 = &VAR12[VAR1];
    if (VAR5->VAR13 < VAR6->VAR13 || ((VAR1 == VAR14 || VAR1 == VAR15 || VAR1 == VAR16 || VAR1 == VAR17) && (VAR2 == VAR18 || VAR2 == VAR19 || VAR2 == VAR20 || VAR2 == VAR21)))
        VAR11 |= VAR22;
    if (VAR10->VAR23 > VAR8->VAR23 || VAR10->VAR24 > VAR8->VAR24)
        VAR11 |= VAR25;
    switch (VAR5->VAR26)
    {
    case VAR27:
        if (VAR6->VAR26 != VAR27 && VAR6->VAR26 != VAR28)
            VAR11 |= VAR29;
        break;
    case VAR28:
        if (VAR6->VAR26 != VAR28)
            VAR11 |= VAR29;
        break;
    case VAR30:
        if (VAR6->VAR26 != VAR30)
            VAR11 |= VAR29;
        break;
    case VAR31:
        if (VAR6->VAR26 != VAR31 && VAR6->VAR26 != VAR30 && VAR6->VAR26 != VAR28)
            VAR11 |= VAR29;
        break;
    default:
        if (VAR6->VAR26 != VAR5->VAR26)
            VAR11 |= VAR29;
        break;
    }
    if (VAR5->VAR26 == VAR28 && VAR6->VAR26 != VAR28)
        VAR11 |= VAR32;
    if (!VAR5->VAR33 && (VAR6->VAR33 && VAR3))
        VAR11 |= VAR34;
    if (VAR1 == VAR35 && (VAR2 != VAR35 && VAR6->VAR26 != VAR28))
        VAR11 |= VAR36;
    return VAR11;
}