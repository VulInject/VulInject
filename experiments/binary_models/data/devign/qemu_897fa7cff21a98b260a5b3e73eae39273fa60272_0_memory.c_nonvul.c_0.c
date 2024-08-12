static void FUN1(void *VAR1, target_phys_addr_t VAR2, unsigned VAR3, uint64_t VAR4)
{
    VAR5 *VAR6 = VAR1;
    if (!FUN2(VAR6, VAR2, VAR3, true))
    {
        return;
    }
    if (!VAR6->VAR7->write)
    {
        VAR6->VAR7->VAR8.write[FUN3(VAR3)](VAR6->VAR9, VAR2, VAR4);
        return;
    }
    FUN4(VAR2 + VAR6->VAR10, &VAR4, VAR3, VAR6->VAR7->VAR11.VAR12, VAR6->VAR7->VAR11.VAR13, VAR14, VAR6);
}