static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[0];
    VAR8 *VAR9 = VAR2->VAR10;
    int64_t VAR11;
    int VAR12, VAR13;
    VAR11 = VAR9->VAR14 - FUN2(VAR2->VAR15);
    if (VAR11 <= 0)
        return VAR16;
    switch (VAR6->VAR17->VAR18)
    {
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
        VAR13 = VAR6->VAR17->VAR23;
        break;
    default:
        VAR13 = (VAR24 / VAR6->VAR17->VAR23) * VAR6->VAR17->VAR23;
    }
    VAR13 = FUN3(VAR11, VAR13);
    VAR12 = FUN4(VAR2->VAR15, VAR4, VAR13);
    if (VAR12 < 0)
        return VAR12;
    if (VAR13 >= VAR6->VAR17->VAR23)
        VAR4->VAR25 &= ~VAR26;
    VAR4->VAR27 = 0;
    VAR4->VAR28 = (VAR12 / VAR6->VAR17->VAR23) * VAR9->VAR29;
    return 0;
}