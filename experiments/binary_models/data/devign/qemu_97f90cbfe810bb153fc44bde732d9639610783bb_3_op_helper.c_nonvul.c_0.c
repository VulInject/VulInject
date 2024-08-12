void FUN1(target_phys_addr_t VAR1, int VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7;
    VAR7 = VAR8;
    VAR8 = VAR9;
    FUN2(VAR10, "" VAR11 "", VAR1, VAR2, VAR3);
    if (!(VAR8->VAR12[VAR13] & VAR14))
    {
        return;
    }
    VAR8->VAR12[VAR15] = VAR1;
    if (VAR3)
    {
        if ((VAR8->VAR16.VAR17[2] & VAR18))
        {
            VAR8->VAR12[VAR19] = VAR20;
            FUN3(VAR21);
        }
    }
    else
    {
        if ((VAR8->VAR16.VAR17[2] & VAR22))
        {
            VAR8->VAR12[VAR19] = VAR23;
            FUN3(VAR21);
        }
    }
}