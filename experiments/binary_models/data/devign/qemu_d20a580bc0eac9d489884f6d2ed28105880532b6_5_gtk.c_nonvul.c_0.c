static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, void *VAR6)
{
    VAR7 *VAR8 = VAR6;
    InputButton VAR9;
    if (VAR5->VAR10 == VAR11)
    {
        VAR9 = VAR12;
    }
    else if (VAR5->VAR10 == VAR13)
    {
        VAR9 = VAR14;
    }
    else
    {
        return VAR15;
    }
    FUN2(VAR8->VAR16.VAR17.VAR18, VAR9, true);
    FUN3();
    FUN2(VAR8->VAR16.VAR17.VAR18, VAR9, false);
    FUN3();
    return VAR15;
}