static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2();
    if (VAR2->VAR5)
    {
        VAR4->VAR6.VAR7 = VAR2->VAR7;
    }
    if (VAR2->VAR8)
    {
        VAR4->VAR6.VAR9 = VAR2->VAR9;
    }
    if (VAR2->VAR10)
    {
        VAR4->VAR6.VAR11 = VAR2->VAR11;
    }
    if (VAR2->VAR12)
    {
        VAR4->VAR6.VAR13 = VAR2->VAR13;
    }
    if (VAR2->VAR14)
    {
        VAR4->VAR6.VAR15 = VAR2->VAR15;
    }
    if (VAR2->VAR16)
    {
        FUN3(VAR4->VAR6.VAR17);
        assert(VAR2->VAR17->VAR18 == VAR19);
        VAR4->VAR6.VAR17 = FUN4(VAR2->VAR17->VAR20.VAR4);
    }
    if (VAR2->VAR21)
    {
        FUN3(VAR4->VAR6.VAR22);
        assert(VAR2->VAR22->VAR18 == VAR19);
        VAR4->VAR6.VAR22 = FUN4(VAR2->VAR22->VAR20.VAR4);
    }
    if (VAR2->VAR23)
    {
        VAR4->VAR6.VAR24 = VAR2->VAR24;
        if (VAR4->VAR25)
        {
            FUN5(VAR4->VAR25, VAR4->VAR6.VAR24 / VAR26);
        }
    }
    if (VAR2->VAR27)
    {
        VAR4->VAR6.VAR28 = VAR2->VAR28;
    }
    if (VAR2->VAR29)
    {
        VAR4->VAR6.VAR30 = VAR2->VAR30;
        if (FUN6())
        {
            FUN7(VAR4);
        }
    }
    if (VAR2->VAR31)
    {
        VAR4->VAR6.VAR32 = VAR2->VAR32;
    }
}