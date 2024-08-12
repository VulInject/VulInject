static int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    struct VAR4 *VAR5, *VAR6;
    int VAR7;
    FUN2("");
    VAR5 = (struct VAR4 *)VAR3->VAR8;
    VAR6 = (struct VAR4 *)VAR2->VAR8;
    if (FUN3(VAR3->VAR9->VAR10) & VAR11)
    {
        VAR2->VAR9->VAR12 = VAR3->VAR9->VAR12;
        VAR2->VAR9->VAR13 = VAR3->VAR9->VAR13;
    }
    if (VAR5->VAR14 > 5)
    {
        ptrdiff_t VAR15;
        VAR15 = VAR3->VAR8 - (VAR16 *)VAR3->VAR17 + (VAR5->VAR14 * 4);
        VAR7 = FUN4(VAR3, VAR2, VAR15);
    }
    else if (VAR5->VAR18 == VAR6->VAR18)
    {
        VAR7 = FUN4(VAR3, VAR2, VAR19);
    }
    else
    {
        VAR7 = -1;
    }
    if (VAR7 != 0 && FUN5(VAR20))
    {
        FUN6(FUN7(VAR3->VAR9->VAR21), FUN8(VAR6->VAR22), FUN8(VAR6->VAR23), VAR7, VAR6->VAR24, VAR2->VAR25);
        FUN9(FUN7(VAR3->VAR9->VAR26), FUN8(VAR5->VAR22), FUN8(VAR5->VAR23), VAR7, VAR5->VAR24, VAR3->VAR25);
        FUN10((char *)VAR3->VAR17, VAR27, "", VAR3->VAR25);
        FUN10((char *)VAR2->VAR17, VAR27, "", VAR2->VAR25);
    }
    return VAR7;
}