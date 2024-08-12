VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR3);
    VAR4 *VAR6 = VAR5;
    while (VAR6 && !VAR6->VAR7 && VAR6->VAR8)
    {
        VAR6 = FUN2(VAR6->VAR8);
    }
    if (VAR6 && VAR6->VAR7)
    {
        return VAR6->FUN3(VAR5, VAR6->VAR9, VAR3->VAR10);
    }
    return &VAR11;
}