static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    uint32_t VAR7 = 0;
    VAR3 >>= 2;
    if (VAR3 > VAR8)
    {
        return 0;
    }
    else if (VAR3 == VAR9)
    {
        FUN2(VAR6, &VAR7);
        return VAR7;
    }
    return VAR6->VAR10[VAR3];
}