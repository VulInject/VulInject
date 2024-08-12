static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    int VAR6 = -1;
    int VAR7 = 0;
    if (VAR2->VAR8 == VAR9)
    {
        VAR6 = mkdir(FUN2(VAR2, VAR3), VAR10);
        if (VAR6 == -1)
        {
            return VAR6;
        }
        VAR5->VAR11 = VAR5->VAR11 | VAR12;
        VAR6 = FUN3(FUN2(VAR2, VAR3), VAR5);
        if (VAR6 == -1)
        {
            VAR7 = VAR13;
            goto VAR14;
        }
    }
    else if (VAR2->VAR8 == VAR15)
    {
        VAR6 = mkdir(FUN2(VAR2, VAR3), VAR5->VAR11);
        if (VAR6 == -1)
        {
            return VAR6;
        }
        VAR6 = FUN4(VAR2, VAR3, VAR5);
        if (VAR6 == -1)
        {
            VAR7 = VAR13;
            goto VAR14;
        }
    }
    return VAR6;
VAR14:
    remove(FUN2(VAR2, VAR3));
    VAR13 = VAR7;
    return VAR6;
}