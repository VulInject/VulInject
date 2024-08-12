int FUN1(VAR1 *VAR2)
{
    struct VAR3 *const VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    VAR9 = FUN2(VAR4);
    if (VAR9 < 0)
        goto VAR10;
    VAR9 = FUN3(VAR4, FUN4(&VAR7->VAR11->VAR12));
    if (VAR9 < 0)
        goto VAR10;
    FUN5(VAR7, 0, VAR7->VAR2->VAR13);
VAR10:
    FUN6(VAR2);
    return VAR9;
}