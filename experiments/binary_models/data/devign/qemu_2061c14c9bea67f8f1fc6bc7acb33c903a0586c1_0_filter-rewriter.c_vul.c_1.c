static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    struct VAR7 *VAR8;
    VAR8 = (struct VAR7 *)VAR6->VAR9;
    if (FUN2(VAR10))
    {
        char *VAR11, *VAR12;
        VAR11 = strdup(FUN3(VAR6->VAR13->VAR14));
        VAR12 = strdup(FUN3(VAR6->VAR13->VAR15));
        FUN4(VAR16, VAR11, VAR12, FUN5(VAR8->VAR17), FUN5(VAR8->VAR18), VAR8->VAR19);
        FUN6(VAR4->VAR20);
        FUN7(VAR11);
        FUN7(VAR12);
    }
    if (((VAR8->VAR19 & (VAR21 | VAR22)) == (VAR21 | VAR22)))
    {
        VAR4->VAR20 = FUN5(VAR8->VAR17);
    }
    if ((VAR8->VAR19 & (VAR21 | VAR22)) == VAR21)
    {
        VAR8->VAR17 = FUN8(FUN5(VAR8->VAR17) - VAR4->VAR20);
        FUN9((VAR23 *)VAR6->VAR24, VAR6->VAR25);
    }
    return 0;
}