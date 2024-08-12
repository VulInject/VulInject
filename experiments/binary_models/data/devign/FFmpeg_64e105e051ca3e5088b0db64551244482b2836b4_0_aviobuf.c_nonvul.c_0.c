static void FUN1(void *VAR1, VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR1;
    int VAR7, VAR8;
    VAR2 *VAR9;
    VAR7 = VAR6->VAR10 + VAR4;
    VAR8 = VAR6->VAR11;
    while (VAR7 > VAR8)
    {
        if (!VAR8)
            VAR8 = VAR7;
        else
            VAR8 = (VAR8 * 3) / 2 + 1;
    }
    if (VAR8 > VAR6->VAR11)
    {
        VAR9 = FUN2(VAR8);
        if (!VAR9)
            return;
        memcpy(VAR9, VAR6->VAR12, VAR6->VAR13);
        FUN3(VAR6->VAR12);
        VAR6->VAR12 = VAR9;
        VAR6->VAR11 = VAR8;
    }
    memcpy(VAR6->VAR12 + VAR6->VAR10, VAR3, VAR4);
    VAR6->VAR10 = VAR7;
    if (VAR6->VAR10 > VAR6->VAR13)
        VAR6->VAR13 = VAR6->VAR10;
}