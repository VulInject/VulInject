static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    if (VAR6->VAR9.VAR10 == VAR6->VAR9.VAR11)
    {
        VAR8 = FUN2(VAR2);
        if (VAR8)
            return VAR8;
    }
    if (VAR6->VAR12 == 0)
    {
        VAR8 = FUN3(VAR2, VAR4);
    }
    else
    {
        VAR8 = FUN4(VAR2, VAR4, VAR6->VAR12 - 1);
    }
    if (VAR8)
    {
        VAR6->VAR12 = 0;
        VAR6->VAR9.VAR10 = VAR6->VAR9.VAR11;
        return VAR8;
    }
    if (++VAR6->VAR12 >= VAR6->VAR13)
    {
        VAR6->VAR12 = 0;
        VAR6->VAR9.VAR10 += 1;
    }
    return 0;
}