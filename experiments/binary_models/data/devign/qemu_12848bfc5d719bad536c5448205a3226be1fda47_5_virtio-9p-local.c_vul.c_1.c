static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, VAR5 *VAR6)
{
    int VAR7 = -1;
    int VAR8 = -1;
    int VAR9 = 0;
    if (VAR2->VAR10 == VAR11)
    {
        VAR7 = open(FUN2(VAR2, VAR3), VAR4, VAR12);
        if (VAR7 == -1)
        {
            return VAR7;
        }
        VAR6->VAR13 = VAR6->VAR13 | VAR14;
        VAR8 = FUN3(FUN2(VAR2, VAR3), VAR6);
        if (VAR8 == -1)
        {
            VAR9 = VAR15;
            goto VAR16;
        }
    }
    else if (VAR2->VAR10 == VAR17)
    {
        VAR7 = open(FUN2(VAR2, VAR3), VAR4, VAR6->VAR13);
        if (VAR7 == -1)
        {
            return VAR7;
        }
        VAR8 = FUN4(VAR2, VAR3, VAR6);
        if (VAR8 == -1)
        {
            VAR9 = VAR15;
            goto VAR16;
        }
    }
    return VAR7;
VAR16:
    close(VAR7);
    remove(FUN2(VAR2, VAR3));
    VAR15 = VAR9;
    return VAR8;
}