int FUN1(target_phys_addr_t VAR1, ram_addr_t VAR2)
{
    int VAR3 = -VAR4;
    VAR5 *VAR6 = VAR7;
    if (VAR6->VAR8)
    {
        struct kvm_coalesced_mmio_zone VAR9;
        VAR9.VAR10 = VAR1;
        VAR9.VAR2 = VAR2;
        VAR3 = FUN2(VAR6, VAR11, &VAR9);
    }
    return VAR3;