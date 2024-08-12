static int FUN1(VAR1 *VAR2, void (*VAR3)(VAR1 *, VAR4 **VAR5), VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    VAR4 *VAR8 = NULL;
    int VAR9;
    assert(VAR7->VAR2 == VAR2);
    FUN2(VAR2);
    FUN3(VAR2, &VAR8);
    if (VAR8)
    {
        FUN4(VAR5, VAR8);
        FUN5(VAR2);
        return -VAR10;
    }
    while (!VAR2->VAR11)
    {
        FUN6(VAR2->VAR12 ? FUN7() : FUN8(VAR7), true);
    }
    VAR9 = (VAR2->VAR13 && VAR2->VAR9 == 0) ? -VAR14 : VAR2->VAR9;
    FUN5(VAR2);
    return VAR9;
}