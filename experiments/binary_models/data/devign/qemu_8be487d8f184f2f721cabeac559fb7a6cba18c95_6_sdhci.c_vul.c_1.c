static void FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    FUN2("", VAR3 ? "" : "");
    if ((VAR5->VAR6 & VAR7) && VAR3)
    {
        FUN3(VAR5->VAR8, FUN4(VAR9) + VAR10);
    }
    else
    {
        if (VAR3)
        {
            VAR5->VAR11 = 0x1ff0000;
            if (VAR5->VAR12 & VAR13)
            {
                VAR5->VAR6 |= VAR14;
            }
        }
        else
        {
            VAR5->VAR11 = 0x1fa0000;
            VAR5->VAR15 &= ~VAR16;
            VAR5->VAR17 &= ~VAR18;
            if (VAR5->VAR12 & VAR19)
            {
                VAR5->VAR6 |= VAR7;
            }
        }
        FUN5(VAR5);
    }
}