static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, ssize_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    ssize_t VAR9;
    if (!VAR8->VAR10)
    {
        return VAR6;
    }
    VAR9 = FUN3(VAR8->VAR10, VAR5, VAR6);
    FUN4(VAR3->VAR11, VAR6, VAR9);
    if (VAR9 < VAR6)
    {
        VAR12 *VAR13 = FUN5(VAR3);