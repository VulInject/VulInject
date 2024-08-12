int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    unsigned int VAR6, VAR7;
    int VAR8;
    assert(VAR4->VAR9 <= VAR10 / sizeof(VAR11));
    VAR6 = VAR4->VAR9 * sizeof(VAR11);
    VAR4->VAR12 = FUN2(VAR6);
    if (VAR4->VAR9 > 0)
    {
        if (VAR4->VAR12 == NULL)
        {
            goto VAR13;
        }
        FUN3(VAR2->VAR14, VAR15);
        VAR8 = FUN4(VAR2->VAR14, VAR4->VAR16, VAR4->VAR12, VAR6);
        if (VAR8 != VAR6)
            goto VAR13;
        for (VAR7 = 0; VAR7 < VAR4->VAR9; VAR7++)
            FUN5(&VAR4->VAR12[VAR7]);
    }
    return 0;
VAR13:
    return -VAR17;
}