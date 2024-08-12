static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    FUN3(VAR6);
    if (!FUN4(VAR3))
        VAR8->VAR9 = 1;
    memcpy(VAR8->VAR10, VAR5, VAR6);
    VAR8->VAR11 = VAR6;
    VAR8->VAR12 = 0;
    VAR8->VAR13 |= VAR14;
    FUN5(VAR8);
    return VAR6;