void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 **VAR5)
{
    VAR4 *VAR6 = NULL;
    assert(!FUN2(&VAR3->VAR7));
    assert(!FUN2(&VAR2->VAR7));
    FUN3(VAR2, VAR3, &VAR6);
    if (VAR6)
    {
        FUN4(VAR5, VAR6);
        goto VAR8;
    }
    FUN5(VAR3, VAR2, &VAR6);
    if (VAR6)
    {
        FUN4(VAR5, VAR6);
        FUN3(VAR2, NULL, &VAR9);
        goto VAR8;
    }
VAR8:
    FUN6(VAR2);
}