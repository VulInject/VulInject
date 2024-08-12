static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint64_t VAR7 = 0;
    if (!FUN2(VAR6, VAR3, VAR4, false))
    {
        return -1U;
    }
    if (!VAR6->VAR8->read)
    {
        return VAR6->VAR8->VAR9.read[FUN3(VAR4)](VAR6->VAR10, VAR3);
    }
    FUN4(VAR3 + VAR6->VAR11, &VAR7, VAR4, VAR6->VAR8->VAR12.VAR13, VAR6->VAR8->VAR12.VAR14, VAR15, VAR6);
    return VAR7;
}