static void FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6[VAR3];
    VAR7 *VAR8 = VAR2->VAR9[VAR3].VAR8;
    *VAR6 &= ~(VAR4 & VAR10);
    *VAR6 &= VAR4 | ~VAR11;
    FUN2(VAR2, VAR3, VAR4);
    VAR4 &= VAR12;
    if ((VAR4 & VAR13) && !(*VAR6 & VAR13))
    {
        FUN3(VAR3, 1);
    }
    if (!(VAR4 & VAR13) && (*VAR6 & VAR13))
    {
        FUN3(VAR3, 0);
        if (VAR8 && VAR8->VAR14)
        {
            FUN4(&VAR2->VAR9[VAR3]);
            FUN5(VAR8, VAR15);
            *VAR6 &= ~VAR16;
        }
        if (VAR8 && VAR8->VAR14 && (VAR8->VAR17 & VAR18))
        {
            VAR4 |= VAR11;
        }
    }
    *VAR6 &= ~VAR12;
    *VAR6 |= VAR4;
}