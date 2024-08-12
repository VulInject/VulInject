static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    int VAR4;
    VAR4 = VAR5[VAR2 >> VAR6];
    if (!(VAR4 & VAR7))
    {
        FUN2(VAR2, 2);
        VAR4 = VAR5[VAR2 >> VAR6];
    }
    FUN3(FUN4(VAR2), VAR3);
    VAR4 |= (0xff & ~VAR7);
    VAR5[VAR2 >> VAR6] = VAR4;
    if (VAR4 == 0xff)
        FUN5(VAR8, VAR8->VAR9);
}