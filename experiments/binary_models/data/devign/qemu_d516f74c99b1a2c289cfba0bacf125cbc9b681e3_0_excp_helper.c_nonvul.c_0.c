static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    uint64_t VAR5, VAR6;
    VAR7 *VAR8;
    if (!(VAR2->VAR9.VAR5 & VAR10))
    {
        FUN3(FUN4(VAR4), "");
    }
    VAR8 = FUN5(VAR2);
    if (VAR2->VAR11 & VAR12)
    {
        VAR8->VAR13 = FUN6(VAR14);
        VAR8->VAR15 = 0;
        VAR2->VAR11 &= ~VAR12;
    }
    else if (VAR2->VAR11 & VAR16)
    {
        VAR8->VAR13 = FUN6(VAR17);
        VAR8->VAR15 = 0;
        VAR2->VAR11 &= ~VAR16;
    }
    else if (VAR2->VAR11 & VAR18)
    {
        VAR8->VAR13 = FUN6(VAR19);
        VAR8->VAR20 = FUN7(VAR2->VAR21);
        VAR8->VAR15 = 0;
        VAR2->VAR21 = 0;
        VAR2->VAR11 &= ~VAR18;
    }
    else
    {
        FUN8();
    }
    VAR5 = FUN9(VAR8->VAR22.VAR5);
    VAR6 = FUN9(VAR8->VAR22.VAR6);
    VAR8->VAR23.VAR5 = FUN10(FUN11(VAR2));
    VAR8->VAR23.VAR6 = FUN10(VAR2->VAR9.VAR6);
    FUN12(VAR8);
    FUN13("" VAR24 "" VAR24 "", VAR25, VAR2->VAR9.VAR5, VAR2->VAR9.VAR6);
    FUN14(VAR2, VAR5, VAR6);
}