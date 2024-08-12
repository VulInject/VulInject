int FUN1(int VAR1, int VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR4 = FUN2(VAR1);
    if (!VAR4)
        return -1;
    FUN3(VAR6, &VAR4->VAR9, VAR10)
    {
        if (VAR6->VAR8->VAR2 == VAR2)
            break;
    }
    if (!VAR6)
        return -1;
    VAR8 = VAR6->VAR8;
    FUN4(&VAR4->VAR9, VAR6, VAR10);
    VAR4->VAR11--;
    FUN5(VAR6, NULL);
    VAR8->VAR12->FUN6(VAR8);
    FUN7(&VAR4->free, VAR6, VAR10);
    VAR4->VAR13++;
    return 0;
}