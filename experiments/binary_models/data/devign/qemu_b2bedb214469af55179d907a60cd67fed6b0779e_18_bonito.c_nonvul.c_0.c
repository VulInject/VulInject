static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    uint32_t VAR6;
    VAR6 = (VAR3 - VAR7) >> 2;
    FUN2("" VAR8 "", VAR3);
    switch (VAR6)
    {
    case VAR9:
        return VAR5->VAR10[VAR6];
    default:
        return VAR5->VAR10[VAR6];
    }
}