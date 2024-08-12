static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    unsigned int VAR7 = VAR2 & (VAR8 - 1) & ~0x3;
    int VAR9 = VAR7 / VAR10;
    FUN2(VAR6->VAR11 + VAR7, VAR3);
    FUN3(VAR6, VAR9)