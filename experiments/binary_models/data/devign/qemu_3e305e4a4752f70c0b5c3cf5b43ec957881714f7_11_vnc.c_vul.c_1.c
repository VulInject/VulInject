VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, size_t VAR6)
{
    ssize_t VAR7;
    if (VAR3->VAR8.VAR9)
    {
        VAR7 = FUN2(&VAR3->VAR8.VAR9, VAR5, VAR6);
    }
    else
    {
        VAR7 = FUN3(VAR3->VAR10, VAR5, VAR6, 0);
    }
    FUN4("", VAR5, VAR6, VAR7);
    return FUN5(VAR3, VAR7, FUN6());
}