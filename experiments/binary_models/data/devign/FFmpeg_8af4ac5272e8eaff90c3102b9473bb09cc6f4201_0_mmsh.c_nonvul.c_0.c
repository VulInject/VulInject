static VAR1 FUN1(VAR2 *VAR3, int VAR4, int64_t VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR3->VAR9;
    VAR10 *VAR11 = &VAR8->VAR11;
    int VAR12;
    VAR12 = FUN2(VAR3, VAR8->VAR13, 0, FUN3(VAR5, 0), 0);
    if (VAR12 >= 0)
    {
        if (VAR11->VAR14)
            FUN4(VAR11->VAR14);
        FUN5(&VAR11->VAR15);
        FUN5(&VAR11->VAR16);
        FUN6(VAR8);
        VAR8 = VAR3->VAR9;
        VAR11 = &VAR8->VAR11;
        VAR11->VAR17 = VAR11->VAR18;
    }
    else
        VAR3->VAR9 = VAR8;
    return VAR12;
}