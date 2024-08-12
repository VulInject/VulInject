static VAR1 FUN1(VAR2 *VAR3, const struct VAR4 *VAR5, int VAR6, unsigned VAR7)
{
    VAR8 *VAR9 = NULL;
    VAR8 *VAR10;
    size_t VAR11;
    ssize_t VAR12;
    if (VAR6 == 1)
    {
        VAR10 = VAR5[0].VAR13;
        VAR11 = VAR5[0].VAR14;
    }
    else
    {
        VAR9 = FUN2(VAR8, VAR15);
        VAR10 = VAR9;
        VAR11 = FUN3(VAR5, VAR6, 0, VAR9, VAR15);
    }
    if (VAR7 & VAR16 && VAR3->VAR17->VAR18)
    {
        VAR12 = VAR3->VAR17->FUN4(VAR3, VAR10, VAR11);
    }
    else
    {
        VAR12 = VAR3->VAR17->FUN5(VAR3, VAR10, VAR11);
    }
    FUN6(VAR9);
    return VAR12;
}