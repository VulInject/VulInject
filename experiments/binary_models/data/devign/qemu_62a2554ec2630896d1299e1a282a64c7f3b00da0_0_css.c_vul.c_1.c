void FUN1(VAR1 *VAR2, CCW1 const *VAR3, ORB const *VAR4)
{
    FUN2(!(VAR4->VAR5 & VAR6));
    VAR2->VAR7 = (VAR4->VAR8 & VAR9 ? VAR10 : 0) | (VAR4->VAR8 & VAR11 ? VAR12 : 0) | (VAR3->VAR7 & VAR13 ? VAR14 : 0);
    VAR2->VAR15 = VAR3->VAR15;
    VAR2->VAR16 = VAR3->VAR17;
    FUN3(VAR2);
    if (!(VAR2->VAR7 & VAR14))
    {
        VAR2->VAR18 = VAR19;
    }
    else
    {
        assert(false);
    }