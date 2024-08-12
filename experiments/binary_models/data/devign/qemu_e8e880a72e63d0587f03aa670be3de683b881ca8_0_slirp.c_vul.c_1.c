void FUN1(const VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR5;
    int VAR6;
    if (VAR3 < VAR7)
        return;
    VAR6 = FUN2(*(VAR8 *)(VAR2 + 12));
    switch (VAR6)
    {
    case VAR9:
        FUN3(VAR2, VAR3);
        break;
    case VAR10:
        VAR5 = FUN4();
        if (!VAR5)
            return;
        VAR5->VAR11 = VAR3 + 2;
        memcpy(VAR5->VAR12 + 2, VAR2, VAR3);
        VAR5->VAR12 += 2 + VAR7;
        VAR5->VAR11 -= 2 + VAR7;
        FUN5(VAR5);
        break;
    default:
        break;