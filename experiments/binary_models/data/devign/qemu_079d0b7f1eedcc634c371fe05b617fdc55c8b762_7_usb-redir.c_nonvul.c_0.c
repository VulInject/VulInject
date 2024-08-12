static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR6, VAR2);
    uint8_t VAR7;
    VAR7 = VAR4->VAR7->VAR8;
    if (VAR4->VAR9 == VAR10)
    {
        VAR7 |= VAR11;
    }
    switch (VAR6->VAR12[FUN3(VAR7)].VAR13)
    {
    case VAR14:
        FUN4("", VAR7);
        return VAR15;
    case VAR16:
        return FUN5(VAR6, VAR4, VAR7);
    case VAR17:
        return FUN6(VAR6, VAR4, VAR7);
    case VAR18:
        return FUN7(VAR6, VAR4, VAR7);
    default:
        FUN4("", VAR7, VAR6->VAR12[FUN3(VAR7)].VAR13);
        return VAR15;
    }
}