void FUN1(target_ulong VAR1, target_ulong VAR2)
{
    VAR3 *VAR4;
    target_ulong VAR5, VAR6;
    FUN2("" VAR7 "", VAR8, (int)VAR1, VAR2);
    VAR1 &= 0x3F;
    VAR4 = &VAR9->VAR4[VAR1].VAR10;
    if (VAR4->VAR11 & VAR12)
    {
        VAR6 = VAR4->VAR13 + VAR4->VAR14;
        FUN2("" VAR7 "" VAR7 "", VAR8, (int)VAR1, VAR4->VAR13, VAR6);
        for (VAR5 = VAR4->VAR13; VAR5 < VAR6; VAR5 += VAR15)
            FUN3(VAR9, VAR5);
    }
    VAR4->VAR14 = FUN4((VAR2 >> 7) & 0x7);
    if ((VAR2 & 0x40) && VAR4->VAR14 < VAR15)
    {
        FUN5(VAR9, "" VAR16 ""
                       "",
                  VAR4->VAR14, VAR15, (int)((VAR2 >> 7) & 0x7));
    }
    VAR4->VAR13 = VAR2 & ~(VAR4->VAR14 - 1);
    if (VAR2 & 0x40)
    {
        VAR4->VAR11 |= VAR12;
        if (VAR2 & 0x20)
        {
            FUN5(VAR9, "");
        }
    }
    else
    {
        VAR4->VAR11 &= ~VAR12;
    }
    VAR4->VAR17 = VAR9->VAR18[VAR19];
    FUN2("" VAR20 "" VAR7 "" VAR7 "", VAR8, (int)VAR1, VAR4->VAR21, VAR4->VAR13, VAR4->VAR14, VAR4->VAR11 & VAR22 ? '' : '', VAR4->VAR11 & VAR23 ? '' : '', VAR4->VAR11 & VAR24 ? '' : '', VAR4->VAR11 & VAR12 ? '' : '', (int)VAR4->VAR17);
    if (VAR4->VAR11 & VAR12)
    {
        VAR6 = VAR4->VAR13 + VAR4->VAR14;
        FUN2("" VAR7 "" VAR7 "", VAR8, (int)VAR1, VAR4->VAR13, VAR6);
        for (VAR5 = VAR4->VAR13; VAR5 < VAR6; VAR5 += VAR15)
            FUN3(VAR9, VAR5);
    }
}