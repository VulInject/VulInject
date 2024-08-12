static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    int VAR6 = -1;
    int VAR7 = 0;
    if (VAR2->VAR8 == VAR9)
    {
        VAR6 = FUN2(FUN3(VAR2, VAR3), VAR10 | VAR11, 0);
        if (VAR6 == -1)
        {
            return VAR6;
        }
        FUN4(FUN3(VAR2, VAR3), VAR5);
        if (VAR6 == -1)
        {
            VAR7 = VAR12;
            goto VAR13;
        }
    }
    else if (VAR2->VAR8 == VAR14)
    {
        VAR6 = FUN2(FUN3(VAR2, VAR3), VAR5->VAR15, VAR5->VAR16);
        if (VAR6 == -1)
        {
            return VAR6;
        }
        VAR6 = FUN5(VAR2, VAR3, VAR5);
        if (VAR6 == -1)
        {
            VAR7 = VAR12;
            goto VAR13;
        }
    }
    return VAR6;
VAR13:
    remove(FUN3(VAR2, VAR3));
    VAR12 = VAR7;
    return VAR6;
}