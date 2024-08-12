void FUN1(void)
{
    int VAR1;
    VAR2 *VAR3;
    uint32_t VAR4, VAR5;
    int VAR6, VAR7, VAR8;
    target_ulong VAR9;
    VAR1 = VAR10 & 0xffff;
    if ((VAR1 & 0xfffc) == 0)
    {
        VAR11->VAR12.VAR13 = 0;
        VAR11->VAR12.VAR14 = 0;
        VAR11->VAR12.VAR15 = 0;
    }
    else
    {
        if (VAR1 & 0x4)
            FUN2(VAR16, VAR1 & 0xfffc);
        VAR3 = &VAR11->VAR17;
        VAR6 = VAR1 & ~7;
        if (VAR11->VAR18 & VAR19)
            VAR8 = 15;
        else
            VAR8 = 7;
        if ((VAR6 + VAR8) > VAR3->VAR14)
            FUN2(VAR16, VAR1 & 0xfffc);
        VAR9 = VAR3->VAR13 + VAR6;
        VAR4 = FUN3(VAR9);
        VAR5 = FUN3(VAR9 + 4);
        VAR7 = (VAR5 >> VAR20) & 0xf;
        if ((VAR5 & VAR21) || (VAR7 != 1 && VAR7 != 9))
            FUN2(VAR16, VAR1 & 0xfffc);
        if (!(VAR5 & VAR22))
            FUN2(VAR23, VAR1 & 0xfffc);
        if (VAR11->VAR18 & VAR19)
        {
            uint32_t VAR24, VAR25;
            VAR24 = FUN3(VAR9 + 8);
            VAR25 = FUN3(VAR9 + 12);
            if ((VAR25 >> VAR20) & 0xf)
                FUN2(VAR16, VAR1 & 0xfffc);
            FUN4(&VAR11->VAR12, VAR4, VAR5);
            VAR11->VAR12.VAR13 |= (VAR26)VAR24 << 32;
        }
        else
        {
            FUN4(&VAR11->VAR12, VAR4, VAR5);
        }
        VAR5 |= VAR27;
        FUN5(VAR9 + 4, VAR5);
    }
    VAR11->VAR12.VAR1 = VAR1;
}