static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR7->VAR9 = FUN2(VAR4, VAR2->VAR10[VAR3]->VAR11, VAR12);
    switch (VAR7->VAR13)
    {
    default:
    case VAR14:
        break;
    case VAR15:
        if (FUN3(VAR2) != 0)
            return -1;
        VAR7->VAR13 = VAR16;
        if (FUN4(VAR2) != 0)
            return -1;
        break;
    case VAR17:
        VAR7->VAR13 = VAR14;
        break;
    }
    return 0;
}