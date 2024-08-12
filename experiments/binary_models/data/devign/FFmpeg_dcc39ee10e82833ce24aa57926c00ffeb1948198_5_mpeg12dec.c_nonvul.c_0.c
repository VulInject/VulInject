static enum VAR1 FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR6;
    VAR7 *VAR8 = &VAR5->VAR9;
    const enum VAR1 *VAR10;
    if (VAR8->VAR11 < 2)
        VAR10 = VAR12;
    else if (VAR8->VAR11 == 2)
        VAR10 = VAR13;
    else
        VAR10 = VAR14;
    return FUN2(VAR3, VAR10);
}