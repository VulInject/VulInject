static int FUN1(void *VAR1, VAR2 *VAR3, int VAR4, int VAR5, UID VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = VAR1;
    switch (VAR4)
    {
    case 0x1901:
        VAR9->VAR10 = FUN2(VAR3);
        VAR9->VAR11 = FUN3(VAR9->VAR10, sizeof(VAR12));
        if (!VAR9->VAR11)
            return FUN4(VAR13);
        FUN5(VAR3, 4);
        FUN6(VAR3, (VAR14 *)VAR9->VAR11, VAR9->VAR10 * sizeof(VAR12));
        break;
    }
    return 0;