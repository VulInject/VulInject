static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int64_t VAR11;
    VAR9->VAR12 = FUN2(VAR2);
    VAR11 = FUN3(VAR9, VAR4, (VAR5 & VAR13) ? VAR14 : VAR15, VAR2->VAR16, VAR7);
    if (VAR11 < 0)
    {
        return VAR11;
    }
    FUN4(&VAR9->mutex);
    VAR2->VAR17 = VAR11;
    VAR11 = 0;
    return VAR11;
}