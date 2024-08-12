int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (!FUN2(VAR4))
    {
        return 0;
    }
    if (VAR4->VAR5[4] & VAR6)
    {
        if (VAR4->VAR7 & VAR8)
        {
            target_phys_addr_t VAR9;
            VAR9 = (VAR4->VAR5[3] & ~0xfff) & VAR4->VAR10;
            FUN3(VAR2, VAR9, VAR4->VAR10);
        }
        else
        {
            target_phys_addr_t VAR11;
            VAR11 = (VAR4->VAR5[3] & ~0x1f) & VAR4->VAR10;
            FUN4(VAR2, VAR11, VAR4->VAR10);
        }
    }
    else
    {
        target_phys_addr_t VAR12;
        bool VAR13;
        VAR12 = (VAR4->VAR5[3] & ~0xfff) & VAR4->VAR10;
        VAR13 = !!(VAR4->VAR5[4] & VAR14);
        FUN5(VAR2, VAR12, VAR4->VAR10, VAR13);
    }
    return 0;
}