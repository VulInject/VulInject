static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = (VAR3 & VAR5) ? 16 : 8;
    int VAR6 = VAR3 & VAR7;
    int VAR8;
    if (!VAR2->VAR8 && !VAR2->VAR9)
        return 1;
    if (VAR2->VAR4 != VAR4)
        return 0;
    switch (VAR6)
    {
    case VAR10:
        VAR8 = VAR4 == 8 ? VAR11 : VAR12;
        VAR13;
        return VAR8 == VAR2->VAR8;
    case VAR14:
        VAR8 = VAR4 == 8 ? VAR11 : VAR13;
        return VAR8 == VAR2->VAR8;
    case VAR15:
        return VAR2->VAR8 == VAR16;
    case VAR17:
        return VAR2->VAR8 == VAR18;
    case VAR19:
        return VAR2->VAR8 == VAR20;
    case VAR21:
        return VAR2->VAR8 == VAR22;
    case VAR23:
    case VAR24:
    case VAR25:
        return VAR2->VAR8 == VAR26;
    case VAR27:
        return VAR2->VAR28 == 8000 && VAR2->VAR8 == VAR29;
    case VAR30:
        return VAR2->VAR28 == 8000 && VAR2->VAR8 == VAR31;
    default:
        return VAR2->VAR9 == (VAR6 >> VAR32);
    }
}