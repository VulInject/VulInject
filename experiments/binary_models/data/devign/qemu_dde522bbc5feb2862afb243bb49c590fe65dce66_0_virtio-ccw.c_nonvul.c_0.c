static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = FUN4(VAR8);
    VAR11 *VAR12 = VAR8->VAR13;
    VAR14 *VAR15 = FUN5(VAR12);
    int VAR16;
    VAR12->VAR17 = VAR6;
    FUN6(VAR12, VAR4);
    if (VAR10->VAR18)
    {
        VAR10->FUN7(VAR8);
    }
    VAR16 = FUN8(VAR4);
    if (VAR16 != 0)
    {
        VAR6->VAR19 = FUN9(FUN10(VAR4), VAR16);
    }
    else
    {
        FUN10(VAR4);
        VAR6->VAR19 = NULL;
    }
    VAR16 = FUN8(VAR4);
    if (VAR16 != 0)
    {
        VAR6->VAR20 = FUN9(FUN10(VAR4), VAR16);
    }
    else
    {
        FUN10(VAR4);
        VAR6->VAR20 = NULL;
    }
    VAR16 = FUN8(VAR4);
    if (VAR16 != 0)
    {
        VAR6->VAR21 = FUN9(FUN10(VAR4), VAR16);
    }
    else
    {
        FUN10(VAR4);
        VAR6->VAR21 = NULL;
    }
    FUN11(VAR4, &VAR15->VAR22);
    VAR6->VAR23.VAR24.VAR25 = FUN10(VAR4);
    VAR6->VAR26 = FUN12(VAR4);
    VAR6->VAR27 = FUN8(VAR4);
    if (VAR12->VAR28)
    {
        VAR6->VAR23.VAR24.VAR29 = FUN13(VAR30, VAR6->VAR26);
    }
    return 0;
}