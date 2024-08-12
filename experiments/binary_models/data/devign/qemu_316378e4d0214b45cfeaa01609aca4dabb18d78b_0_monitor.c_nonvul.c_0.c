static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7 = FUN2(VAR4, "");
    int VAR8 = FUN2(VAR4, "");
    uint64_t VAR9 = FUN2(VAR4, "");
    uint64_t VAR10 = FUN2(VAR4, "");
    uint64_t VAR11 = FUN2(VAR4, "");
    uint64_t VAR12 = FUN2(VAR4, "");
    int VAR13 = FUN3(VAR4, "", 0);
    for (VAR6 = VAR14; VAR6 != NULL; VAR6 = VAR6->VAR15)
    {
        if (VAR6->VAR7 == VAR7)
        {
            FUN4(VAR2, VAR6, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13);
            break;
        }
    }
}