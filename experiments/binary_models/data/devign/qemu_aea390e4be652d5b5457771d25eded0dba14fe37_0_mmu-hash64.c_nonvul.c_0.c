static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7, int VAR8)
{
    hwaddr VAR9, VAR10;
    ppc_hash_pte64_t VAR11;
    int VAR12;
    VAR12 = -1;
    VAR9 = (VAR4->VAR13[VAR6] * VAR14) & VAR2->VAR15;
    VAR10 = FUN2(VAR2, VAR9, VAR6, VAR4->VAR16, &VAR11);
    if (VAR10 != -1)
    {
        VAR12 = FUN3(VAR4, VAR11.VAR17, VAR11.VAR18, VAR7);
        FUN4("" VAR19 "", VAR4->VAR20, VAR4->VAR21, VAR12);
        if (FUN5(VAR4, &VAR11.VAR18, VAR12, VAR7) == 1)
        {
            FUN6(VAR2, VAR10, VAR11.VAR18);
        }
    }
    if (VAR8 != VAR22)
    {
        VAR4->VAR20 |= (VAR5 & ((1 << VAR8) - 1)) & VAR23;
    }
    return VAR12;
}