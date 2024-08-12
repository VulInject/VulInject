int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if (VAR2 == NULL)
    {
        return VAR6;
    }
    assert(VAR2 == VAR4->VAR7->VAR2);
    assert(VAR2->VAR8 == VAR9);
    assert(VAR4->VAR8 == VAR10);
    if (VAR4->VAR7->VAR11 == 0)
    {
        switch (VAR4->VAR12)
        {
        case VAR13:
            VAR5 = FUN2(VAR2, VAR4);
            break;
        case VAR14:
            VAR5 = FUN3(VAR2, VAR4);
            break;
        case VAR15:
            VAR5 = FUN4(VAR2, VAR4);
            break;
        default:
            VAR5 = VAR16;
            break;
        }
    }
    else
    {
        VAR5 = FUN5(VAR2, VAR4);
    }
    if (VAR5 == VAR17)
    {
        VAR4->VAR8 = VAR18;
    }
    return VAR5;
}