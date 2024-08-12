static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7 = FUN2(VAR4, "");
    int VAR8 = FUN2(VAR4, "");
    uint64_t VAR9 = FUN2(VAR4, "");
    uint64_t VAR10 = FUN2(VAR4, "");
    uint64_t VAR11 = FUN2(VAR4, "");
    uint64_t VAR12 = FUN2(VAR4, "");
    for (VAR6 = VAR13; VAR6 != NULL; VAR6 = VAR6->VAR14)
        if (VAR6->VAR7 == VAR7 && VAR6->VAR15)
        {
            FUN3(VAR6, VAR8, VAR9, VAR10, VAR11, VAR12);
            break;
        }
}