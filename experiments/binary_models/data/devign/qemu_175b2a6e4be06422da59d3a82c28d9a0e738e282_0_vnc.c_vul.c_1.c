static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2(sizeof(VAR5));
    int VAR7;
    VAR6->VAR3 = VAR3;
    if (VAR4)
    {
        VAR6->VAR8 = VAR9;
        VAR6->VAR10 = VAR11;
    }
    else
    {
        VAR6->VAR8 = VAR2->VAR8;
        VAR6->VAR10 = VAR2->VAR10;
    }
    VAR6->VAR12 = FUN2(VAR13 * sizeof(*VAR6->VAR12));
    for (VAR7 = 0; VAR7 < VAR13; ++VAR7)
    {
        VAR6->VAR12[VAR7] = FUN2(VAR14 * sizeof(VAR15));
    }
    FUN3("", VAR3);
    VAR16->VAR17 = 0;
    FUN4(VAR6->VAR3);
    FUN5(VAR6->VAR3, NULL, VAR18, NULL, VAR6);
    FUN6(VAR6);
    FUN7(VAR6, VAR19);
    FUN8(VAR6, VAR20);
    VAR6->VAR2 = VAR2;
    VAR6->VAR21 = VAR2->VAR21;
    VAR6->VAR22 = -1;
    VAR6->VAR23 = -1;
    VAR6->VAR24.VAR25 = 44100;
    VAR6->VAR24.VAR26 = 2;
    VAR6->VAR24.VAR27 = VAR28;
    VAR6->VAR24.VAR29 = 0;
    FUN9(&VAR6->VAR30);
    FUN10(&VAR2->VAR31, VAR6, VAR32);
    FUN11();
    FUN12(VAR6, "", 12);
    FUN13(VAR6);
    FUN14(VAR6, VAR33, 12);
    FUN15(VAR6);
    if (VAR6->VAR2->VAR34)
        VAR6->VAR35 = FUN16(VAR36, VAR6);
    VAR6->VAR37.VAR38 = VAR39;
    FUN17(&VAR6->VAR37);
    FUN18(VAR2);