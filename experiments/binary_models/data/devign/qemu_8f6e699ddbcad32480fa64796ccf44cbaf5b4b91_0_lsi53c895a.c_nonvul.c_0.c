static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR4, VAR6.VAR7, VAR2->VAR8->VAR9.VAR10);
    int VAR11;
    assert(VAR2->VAR12);
    if (VAR5->VAR13 == 1 || VAR2->VAR12 != VAR5->VAR14 || (FUN3(VAR5) && !(VAR5->VAR15 & VAR16)))
    {
        if (FUN4(VAR5, VAR2, VAR3))
        {
            return;
        }
    }
    VAR11 = (VAR5->VAR17 & VAR18) == VAR19;
    FUN5("", VAR2->VAR20, VAR3);
    VAR5->VAR14->VAR21 = VAR3;
    VAR5->VAR22 = 1;
    if (VAR5->VAR13)
    {
        if (VAR5->VAR13 == 1 || VAR5->VAR23 == 0)
        {
            FUN6(VAR5);
        }
        else
        {
            FUN7(VAR5, VAR11);
        }
    }
}