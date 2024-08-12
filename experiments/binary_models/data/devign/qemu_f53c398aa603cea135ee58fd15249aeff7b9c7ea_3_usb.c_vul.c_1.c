int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if (VAR2 == NULL)
    {
        return VAR6;
    }
    assert(VAR2->VAR7 == VAR4->VAR8);
    assert(VAR2->VAR9 == VAR10);
    assert(VAR4->VAR11 == NULL);
    if (VAR4->VAR12 == 0)
    {
        switch (VAR4->VAR13)
        {
        case VAR14:
            VAR5 = FUN2(VAR2, VAR4);
            break;
        case VAR15:
            VAR5 = FUN3(VAR2, VAR4);
            break;
        case VAR16:
            VAR5 = FUN4(VAR2, VAR4);
            break;
        default:
            VAR5 = VAR17;
            break;
        }
    }
    else
    {
        VAR5 = FUN5(VAR2, VAR4);
    }
    if (VAR5 == VAR18)
    {
        VAR4->VAR11 = FUN6(VAR2, VAR4->VAR13, VAR4->VAR12);
    }
    return VAR5;
}