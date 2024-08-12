int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    VAR5 = FUN2(VAR2, VAR5);
    VAR6 = FUN3(VAR4, VAR5);
    if (VAR6 < 0)
        return VAR6;
    VAR4->VAR7 = FUN4(VAR2);
    VAR6 = FUN5(VAR2, VAR4->VAR8, VAR5);
    if (VAR6 <= 0)
        FUN6(VAR4);
    else
        FUN7(VAR4, VAR6);
    if (VAR4->VAR5 < VAR9)
        VAR4->VAR10 |= VAR11;
    return VAR6;