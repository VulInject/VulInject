VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    VAR5 *VAR6;
    VAR6 = FUN2(VAR3);
    if (!VAR6)
        return FUN3(VAR3);
    FUN4(VAR6->VAR7);
    VAR6->VAR7 = NULL;
    VAR4 = FUN5(VAR6->VAR8, VAR3->VAR9, VAR10, VAR6, 0);
    if (!VAR4)
    {
        FUN4(VAR6);
        return NULL;
    }
    FUN6(&VAR3->VAR11, 1);
    return VAR4;
}