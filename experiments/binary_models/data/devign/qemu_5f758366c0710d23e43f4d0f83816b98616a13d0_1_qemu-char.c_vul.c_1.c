static VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    int VAR6, VAR7 = -1, VAR8 = -1;
    VAR6 = VAR9 | VAR10 | VAR11 | VAR12;
    VAR8 = FUN2(VAR3->VAR8, VAR6, VAR5);
    if (FUN3(VAR5))
    {
        return NULL;
    }
    if (VAR3->VAR13)
    {
        VAR6 = VAR14;
        VAR7 = FUN2(VAR3->VAR7, VAR6, VAR5);
        if (FUN3(VAR5))
        {
            FUN4(VAR8);
            return NULL;
        }
    }
    return FUN5(VAR7, VAR8);
}