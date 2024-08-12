void FUN1(int VAR1, int VAR2)
{
    int VAR3, VAR4;
    uint32_t VAR5, VAR6;
    if (VAR7->VAR8 & VAR9)
    {
        if (VAR7->VAR10 & VAR11)
            FUN2(VAR12, 0);
        VAR3 = FUN3(VAR7->VAR13.VAR14 + 0);
        if (VAR3 & 4)
            FUN2(VAR15, VAR3 & 0xfffc);
        if (FUN4(&VAR5, &VAR6, VAR3) != 0)
            FUN2(VAR15, VAR3 & 0xfffc);
        VAR4 = (VAR6 >> VAR16) & 0x17;
        if (VAR4 != 3)
            FUN2(VAR15, VAR3 & 0xfffc);
        FUN5(VAR3, VAR5, VAR6, VAR17, VAR2);
    }
    else
    {
        FUN6(VAR1, 1, 0);
    }
    VAR7->VAR18 &= ~VAR19;
}