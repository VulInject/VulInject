int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5 = 1;
    FUN2(VAR4, &VAR6, VAR7)
    {
        if (VAR4->VAR8 == NULL)
            continue;
        FUN3(VAR2, VAR9);
        FUN4(VAR2, VAR4->VAR10);
        VAR5 &= !!VAR4->FUN5(VAR2, VAR9, VAR4->VAR11);
    }
    if (VAR5)
        return 1;
    if (FUN6(VAR2))
        return -VAR12;
    return 0;
}