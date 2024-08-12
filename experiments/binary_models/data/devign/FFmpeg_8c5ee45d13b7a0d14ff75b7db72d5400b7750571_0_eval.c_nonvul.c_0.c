static int FUN1(VAR1 *VAR2)
{
    if (!VAR2)
        return 0;
    switch (VAR2->VAR3)
    {
    case VAR4:
    case VAR5:
        return 1;
    case VAR6:
    case VAR7:
    case VAR8:
    case VAR9:
    case VAR10:
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
        return FUN1(VAR2->VAR18[0]) && !VAR2->VAR18[1];
    case VAR19:
        return FUN1(VAR2->VAR18[0]) && FUN1(VAR2->VAR18[1]) && (!VAR2->VAR18[2] || FUN1(VAR2->VAR18[2]));
    default:
        return FUN1(VAR2->VAR18[0]) && FUN1(VAR2->VAR18[1]) && !VAR2->VAR18[2];
    }
}