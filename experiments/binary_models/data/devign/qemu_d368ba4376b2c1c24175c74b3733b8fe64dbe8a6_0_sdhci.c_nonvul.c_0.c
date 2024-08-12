static void FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    if (VAR2->VAR4 & VAR5)
    {
        if (VAR2->VAR6 & VAR7)
        {
            VAR2->VAR8 |= VAR9;
        }
        FUN2(VAR2);
        return;
    }
    if (VAR2->VAR10 & VAR11)
    {
        if (VAR2->VAR12 == 0)
        {
            return;
        }
        else
        {
            VAR2->VAR12--;
        }
    }
    for (VAR3 = 0; VAR3 < (VAR2->VAR13 & 0x0fff); VAR3++)
    {
        FUN3(VAR2->VAR14, VAR2->VAR15[VAR3]);
    }
    VAR2->VAR4 |= VAR5;
    if ((VAR2->VAR10 & VAR16) == 0 || ((VAR2->VAR10 & VAR16) && (VAR2->VAR10 & VAR11) && (VAR2->VAR12 == 0)))
    {
        FUN4(VAR2);
    }
    else if (VAR2->VAR6 & VAR7)
    {
        VAR2->VAR8 |= VAR9;
    }
    if (VAR2->VAR17 == VAR18 && (VAR2->VAR10 & VAR16) && VAR2->VAR12 > 0)
    {
        VAR2->VAR4 &= ~VAR19;
        if (VAR2->VAR6 & VAR20)
        {
            VAR2->VAR8 |= VAR21;
        }
        FUN4(VAR2);
    }
    FUN2(VAR2);
}