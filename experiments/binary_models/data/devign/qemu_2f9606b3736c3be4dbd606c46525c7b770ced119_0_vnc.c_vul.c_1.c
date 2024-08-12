void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    long VAR4;
    FUN2(&VAR3->VAR5, 4096);
    if (VAR3->VAR6.VAR7)
    {
        VAR4 = FUN3(VAR3->VAR6.VAR7, FUN4(&VAR3->VAR5), 4096);
        if (VAR4 < 0)
        {
            if (VAR4 == VAR8)
                VAR9 = VAR10;
            else
                VAR9 = VAR11;
            VAR4 = -1;
        }
    }
    else
        VAR4 = recv(VAR3->VAR12, FUN4(&VAR3->VAR5), 4096, 0);
    VAR4 = FUN5(VAR3, VAR4, FUN6());
    if (!VAR4)
        return;
    VAR3->VAR5.VAR13 += VAR4;
    while (VAR3->VAR14 && VAR3->VAR5.VAR13 >= VAR3->VAR15)
    {
        size_t VAR16 = VAR3->VAR15;
        int VAR4;
        VAR4 = VAR3->FUN7(VAR3, VAR3->VAR5.VAR17, VAR16);
        if (VAR3->VAR12 == -1)
            return;
        if (!VAR4)
        {
            memmove(VAR3->VAR5.VAR17, VAR3->VAR5.VAR17 + VAR16, (VAR3->VAR5.VAR13 - VAR16));
            VAR3->VAR5.VAR13 -= VAR16;
        }
        else
        {
            VAR3->VAR15 = VAR4;
        }
    }
}