static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    int VAR4;
    VAR4 = FUN2(VAR2);
    if (!(VAR4 & VAR5))
    {
        FUN3(VAR2, 4);
        VAR4 = FUN2(VAR2);
    }
    FUN4(FUN5(VAR2), VAR3);
    VAR4 |= (0xff & ~VAR5);
    FUN6(VAR2, VAR4);
    if (VAR4 == 0xff)
        FUN7(VAR6, VAR6->VAR7);
}