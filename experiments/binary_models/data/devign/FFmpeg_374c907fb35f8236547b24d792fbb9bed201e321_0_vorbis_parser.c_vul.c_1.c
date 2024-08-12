static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13;
    if (!VAR11->VAR14 && VAR4->VAR15 && VAR4->VAR16)
    {
        VAR11->VAR14 = FUN2(VAR4->VAR15, VAR4->VAR16);
        if (!VAR11->VAR14)
            goto VAR17;
    }
    if ((VAR13 = FUN3(VAR11->VAR14, VAR8, VAR9)) >= 0)
        VAR2->VAR13 = VAR13;
VAR17:
    *VAR6 = VAR8;
    *VAR7 = VAR9;
    return VAR9;
}