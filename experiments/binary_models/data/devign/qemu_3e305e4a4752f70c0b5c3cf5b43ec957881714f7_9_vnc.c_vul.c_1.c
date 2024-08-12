VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    ssize_t VAR7;
    if (VAR3->VAR8.VAR9)
    {
        VAR7 = FUN2(&VAR3->VAR8.VAR9, VAR5, VAR6);
    }
    else
    {
        VAR7 = send(VAR3->VAR10, (const void *)VAR5, VAR6, 0);
    }
    FUN3("", VAR5, VAR6, VAR7);
    return FUN4(VAR3, VAR7, FUN5());
}