void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    struct VAR6 *VAR7;
    int VAR8;
    if (VAR5 < VAR9)
        return;
    VAR8 = FUN2(*(VAR10 *)(VAR4 + 12));
    switch (VAR8)
    {
    case VAR11:
        FUN3(VAR2, VAR4, VAR5);
        break;
    case VAR12:
    case VAR13:
        VAR7 = FUN4(VAR2);
        if (!VAR7)
            return;
        if (FUN5(VAR7) < VAR5 + 2)
        {
            FUN6(VAR7, VAR5 + 2);
        }
        VAR7->VAR14 = VAR5 + 2;
        memcpy(VAR7->VAR15 + 2, VAR4, VAR5);
        VAR7->VAR15 += 2 + VAR9;
        VAR7->VAR14 -= 2 + VAR9;
        if (VAR8 == VAR12)
        {
            FUN7(VAR7);
        }
        else if (VAR8 == VAR13)
        {
            FUN8(VAR7);
        }
        break;
    default:
        break;
    }
}