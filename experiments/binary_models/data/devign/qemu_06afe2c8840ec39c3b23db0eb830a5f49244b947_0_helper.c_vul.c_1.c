int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int update)
{
    int VAR5, VAR6;
    VAR5 = FUN2(VAR2, VAR3, VAR2->VAR7, VAR8, VAR4);
    if (VAR5 == VAR9)
        VAR5 = VAR10;
    else if (VAR5 == VAR11 && update)
    {
        VAR5 = FUN2(VAR2, VAR3, VAR2->VAR12, VAR13, VAR4);
        if (VAR5 >= 0)
        {
            VAR6 = FUN3(VAR2);
            VAR2->VAR7[VAR6] = VAR2->VAR12[VAR5];
            VAR5 = VAR6;
        }
        else if (VAR5 == VAR11)
            VAR5 = VAR14;
    }
    else if (VAR5 == VAR11)
        VAR5 = VAR14;
    if (VAR5 >= 0)
        FUN4(VAR2, VAR5);
    return VAR5;
}