static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    unsigned int VAR6 = VAR3 & (VAR7 - 1);
    void *VAR8 = VAR5->VAR9;
    uint32_t VAR10 = 0;
    memcpy(&VAR10, (void *)((char *)VAR8 + VAR6), 4);
    return VAR10;
}