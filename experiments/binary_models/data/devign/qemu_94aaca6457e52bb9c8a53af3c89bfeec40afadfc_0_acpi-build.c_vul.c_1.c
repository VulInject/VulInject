static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2();
    VAR3 *VAR5 = FUN3();
    VAR3 *VAR6 = NULL;
    VAR7 *VAR8;
    VAR2->VAR9 = 0;
    VAR2->VAR10 = 0;
    if (VAR4)
    {
        VAR6 = VAR4;
        VAR2->VAR11 = VAR12;
        VAR2->VAR9 = FUN4(VAR6, VAR13, NULL);
        VAR2->VAR10 = FUN4(VAR6, VAR14, NULL);
    }
    if (VAR5)
    {
        VAR6 = VAR5;
        VAR2->VAR11 = VAR15;
    }
    assert(VAR6);
    VAR2->VAR16 = VAR17;
    VAR2->VAR18 = VAR19;
    VAR2->VAR20 = VAR21;
    VAR8 = FUN5(VAR6, VAR22, NULL);
    if (VAR8)
    {
        VAR2->VAR23 = FUN6(FUN7(VAR8));
    }
    else
    {
        VAR2->VAR23 = false;
    }
    FUN8(VAR8);
    VAR8 = FUN5(VAR6, VAR24, NULL);
    if (VAR8)
    {
        VAR2->VAR25 = FUN6(FUN7(VAR8));
    }
    else
    {
        VAR2->VAR25 = false;
    }
    FUN8(VAR8);
    VAR8 = FUN5(VAR6, VAR26, NULL);
    if (VAR8)
    {
        VAR2->VAR27 = FUN6(FUN7(VAR8));
    }
    else
    {
        VAR2->VAR27 = false;
    }
    FUN8(VAR8);
    VAR2->VAR28 = FUN4(VAR6, VAR29, NULL);
    VAR2->VAR30 = FUN4(VAR6, VAR31, NULL);
    VAR2->VAR32 = FUN4(VAR6, VAR33, NULL);
    VAR2->VAR34 = FUN4(VAR6, VAR35, NULL);
    VAR2->VAR36 = FUN4(VAR6, VAR37, NULL);
    VAR2->VAR38 = FUN4(VAR6, VAR39, NULL);
    VAR2->VAR40 = FUN9(VAR6, "", NULL);