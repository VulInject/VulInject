static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    unsigned int VAR6 = VAR2 & (VAR7 - 1);
    int VAR8 = VAR6 / VAR9;
    memcpy(VAR5->VAR10 + VAR6, &VAR3, 4);
    if (!FUN2(VAR5, VAR8) && FUN3(VAR5, VAR8))
    {
        FUN4(VAR5, VAR8);
        FUN5(VAR5, VAR8);
    }
}