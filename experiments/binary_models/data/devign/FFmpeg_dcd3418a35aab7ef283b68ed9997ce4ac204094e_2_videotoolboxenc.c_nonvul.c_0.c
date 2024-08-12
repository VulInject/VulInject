static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    switch (VAR2->VAR5)
    {
    case VAR6:
        *VAR4 = VAR7;
        break;
    case VAR8:
        *VAR4 = NULL;
        break;
    case VAR9:
    case VAR10:
        *VAR4 = VAR11;
        break;
    case VAR12:
        *VAR4 = VAR13;
        break;
    case VAR14:
        *VAR4 = VAR15.VAR16;
        break;
    default:
        FUN2(VAR2, VAR17, "", FUN3(VAR2->VAR5));
        return -1;
    }
    return 0;
}