static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    VAR7 = FUN2(VAR3);
    if (VAR7 == NULL)
    {
        FUN3(VAR3, NULL, "");
        return NULL;
    }
    switch (VAR7->VAR8)
    {
    case VAR9:
        return FUN4(VAR3, VAR5);
    case VAR10:
        return FUN5(VAR3, VAR5);
    case VAR11:
        return FUN6(VAR3, VAR5);
    case VAR12:
    case VAR13:
    case VAR14:
        return FUN7(VAR3);
    case VAR15:
        return FUN8(VAR3);
    default:
        FUN3(VAR3, VAR7, "");
        return NULL;
    }
}