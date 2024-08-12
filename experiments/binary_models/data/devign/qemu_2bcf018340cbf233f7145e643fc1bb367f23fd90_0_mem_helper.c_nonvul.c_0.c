VAR1 FUN1(VAR2)(VAR3 *VAR4, uint64_t VAR5)
{
    uintptr_t VAR6 = FUN2();
    int VAR7;
    VAR5 = FUN3(VAR4, VAR5) & VAR8;
    for (VAR7 = 0; VAR7 < VAR9; VAR7 += 8)
    {
        FUN4(VAR4, VAR5 + VAR7, 0, VAR6);
    }
    return 0;
}