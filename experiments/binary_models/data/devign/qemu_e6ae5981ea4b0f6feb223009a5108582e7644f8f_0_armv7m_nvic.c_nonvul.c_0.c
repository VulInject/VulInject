static inline int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5->VAR4;
    int VAR6;
    if (VAR4->VAR7.VAR8)
    {
        VAR6 = -1;
    }
    else if (VAR4->VAR7.VAR9)
    {
        VAR6 = 0;
    }
    else if (VAR4->VAR7.VAR10 > 0)
    {
        VAR6 = VAR4->VAR7.VAR10 & FUN2(VAR2);
    }
    else
    {
        VAR6 = VAR11;
    }
    return FUN3(VAR6, VAR2->VAR12);
}