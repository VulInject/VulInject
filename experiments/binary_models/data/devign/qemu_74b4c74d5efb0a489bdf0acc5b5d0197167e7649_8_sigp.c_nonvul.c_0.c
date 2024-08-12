static void FUN1(VAR1 *VAR2, run_on_cpu_data VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7 = VAR3.VAR8;
    uint32_t VAR9 = VAR7->VAR10 & 0x7fffe000u;
    FUN3(VAR2);
    if (!FUN4(&VAR11, VAR9, sizeof(struct VAR12), false))
    {
        FUN5(VAR7, VAR13);
        return;
    }
    if (FUN6(VAR5) != VAR14)
    {
        FUN5(VAR7, VAR15);
        return;
    }
    VAR5->VAR16.VAR17 = VAR9;
    FUN7(VAR2);
    VAR7->VAR18 = VAR19;
}