VAR1 FUN1(VAR2)(VAR3 *VAR4, uint64_t VAR5, uint64_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR4);
    VAR9 *VAR10 = FUN3(VAR8);
    if (!FUN4(VAR8, VAR5, 0, 1))
    {
        return 0;
    }
    switch (VAR4->VAR11)
    {
    case VAR12:
        VAR10->VAR13 = 0;
        return 1;
    case VAR14:
        VAR10->VAR13 = 0;
        return 2;
    case VAR15:
    case VAR16:
    case VAR17:
    case VAR18:
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
    case VAR26:
        VAR10->VAR13 = 0;
        return 3;
    }
    FUN5(VAR8, FUN6());
    return 0;
}