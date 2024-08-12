static VAR1 FUN1(VAR2 *VAR3)
{
    switch (VAR3->VAR4)
    {
    case VAR5:
    case VAR6:
        return VAR7;
    case VAR8:
        break;
    case VAR9:
        return VAR10;
    default:
        FUN2();
    }
    FUN3(VAR3->VAR11);
    VAR3->VAR11 = NULL;
    if (FUN4(VAR3) == VAR12 && !VAR3->VAR13)
    {
        return VAR14;
    }
    VAR3->VAR4 = VAR5;
    if (VAR3->VAR13)
    {
        uint32_t VAR15 = FUN5(VAR3);
        FUN6(VAR15);
        FUN7(VAR3);
    }
    return VAR7;
}