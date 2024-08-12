static void FUN1(VAR1 *VAR2, run_on_cpu_data VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7 = VAR3.VAR8;
    uint32_t VAR9 = VAR7->VAR10 & 0x7ffffe00u;
    if (FUN3(VAR5) != VAR11)
    {
        FUN4(VAR7, VAR12);
        return;
    }
    FUN5(VAR2);
    if (FUN6(VAR5, VAR9, false))
    {
        FUN4(VAR7, VAR13);
        return;
    }
    VAR7->VAR14 = VAR15;
}