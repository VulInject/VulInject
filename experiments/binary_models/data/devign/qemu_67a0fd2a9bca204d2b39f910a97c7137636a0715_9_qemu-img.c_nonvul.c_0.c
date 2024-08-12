static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, VAR5 *VAR6)
{
    int64_t VAR7;
    int VAR8;
    VAR1 *VAR9;
    VAR8 = 0;
    for (;;)
    {
        VAR7 = FUN2(VAR2, VAR3, VAR4, &VAR4, &VAR9);
        if (VAR7 < 0)
        {
            return VAR7;
        }
        assert(VAR4);
        if (VAR7 & (VAR10 | VAR11))
        {
            break;
        }
        VAR2 = FUN3(VAR2);
        if (VAR2 == NULL)
        {
            VAR7 = 0;
            break;
        }
        VAR8++;
    }
    VAR6->VAR12 = VAR3 * VAR13;
    VAR6->VAR14 = VAR4 * VAR13;
    VAR6->VAR15 = VAR7 & ~VAR16;
    VAR6->VAR17 = VAR7 & VAR16;
    VAR6->VAR8 = VAR8;
    VAR6->VAR2 = VAR2;
    return 0;
}