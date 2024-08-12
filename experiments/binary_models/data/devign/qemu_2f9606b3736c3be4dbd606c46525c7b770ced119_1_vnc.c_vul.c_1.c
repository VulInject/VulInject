void FUN1(void *VAR1)
{
    long VAR2;
    VAR3 *VAR4 = VAR1;
    if (VAR4->VAR5.VAR6)
    {
        VAR2 = FUN2(VAR4->VAR5.VAR6, VAR4->VAR7.VAR8, VAR4->VAR7.VAR9);
        if (VAR2 < 0)
        {
            if (VAR2 == VAR10)
                VAR11 = VAR12;
            else
                VAR11 = VAR13;
            VAR2 = -1;
        }
    }
    else
        VAR2 = send(VAR4->VAR14, VAR4->VAR7.VAR8, VAR4->VAR7.VAR9, 0);
    VAR2 = FUN3(VAR4, VAR2, FUN4());
    if (!VAR2)
        return;
    memmove(VAR4->VAR7.VAR8, VAR4->VAR7.VAR8 + VAR2, (VAR4->VAR7.VAR9 - VAR2));
    VAR4->VAR7.VAR9 -= VAR2;
    if (VAR4->VAR7.VAR9 == 0)
    {
        FUN5(VAR4->VAR14, NULL, VAR15, NULL, VAR4);
    }
}