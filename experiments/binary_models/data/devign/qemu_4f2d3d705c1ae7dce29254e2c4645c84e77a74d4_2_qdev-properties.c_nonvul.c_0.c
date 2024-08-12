void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    if (!VAR4)
        return;
    for (; VAR4->VAR7; VAR4++)
    {
        VAR8 *VAR9 = NULL;
        if (VAR4->VAR10 == VAR11)
        {
            continue;
        }
        if (VAR4->VAR10 == VAR12)
        {
            FUN3(VAR6, VAR4->VAR13, VAR4->VAR7, &VAR9);
        }
        else if (VAR4->VAR14->VAR15)
        {
            FUN4(VAR6, VAR4->VAR14->VAR15[VAR4->VAR13], VAR4->VAR7, &VAR9);
        }
        else if (VAR4->VAR10 == VAR16)
        {
            FUN5(VAR6, VAR4->VAR13, VAR4->VAR7, &VAR9);
        }
        assert(!VAR9);
    }
}