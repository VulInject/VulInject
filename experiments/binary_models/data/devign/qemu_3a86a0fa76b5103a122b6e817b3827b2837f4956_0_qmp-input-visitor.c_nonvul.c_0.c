static VAR1 *FUN1(VAR2 *VAR3, VAR1 **VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    VAR1 *VAR9;
    VAR10 *VAR11 = &VAR8->VAR12[VAR8->VAR13 - 1];
    bool VAR14;
    if (VAR11->VAR9 == NULL)
    {
        VAR11->VAR9 = FUN3(FUN4(VAR11->VAR15));
        VAR14 = true;
    }
    else
    {
        VAR11->VAR9 = FUN5(VAR11->VAR9);
        VAR14 = false;
    }
    if (VAR11->VAR9 == NULL)
    {
        return NULL;
    }
    VAR9 = FUN6(sizeof(*VAR9));
    if (VAR14)
    {
        *VAR4 = VAR9;
    }
    else
    {
        (*VAR4)->VAR16 = VAR9;
    }
    return VAR9;
}