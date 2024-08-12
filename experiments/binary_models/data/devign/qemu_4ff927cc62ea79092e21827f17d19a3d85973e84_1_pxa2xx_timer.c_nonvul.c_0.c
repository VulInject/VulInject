static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    VAR5 *VAR6;
    VAR6 = FUN2(VAR5, VAR2);
    VAR6->VAR7 = 0;
    VAR6->VAR8 = 0;
    VAR6->VAR9 = 0;
    VAR6->VAR10 = FUN3(VAR11);
    VAR6->VAR12 = 0;
    for (VAR3 = 0; VAR3 < 4; VAR3++)
    {
        VAR6->VAR13[VAR3].VAR14 = 0;
        FUN4(VAR2, &VAR6->VAR13[VAR3].VAR15);
        VAR6->VAR13[VAR3].VAR16 = VAR6;
        VAR6->VAR13[VAR3].VAR17 = VAR3;
        VAR6->VAR13[VAR3].VAR18 = 0;
        VAR6->VAR13[VAR3].VAR19 = FUN5(VAR11, VAR20, &VAR6->VAR13[VAR3]);
    }
    if (VAR6->VAR21 & (1 << VAR22))
    {
        FUN4(VAR2, &VAR6->VAR23);
        for (VAR3 = 0; VAR3 < 8; VAR3++)
        {
            VAR6->VAR24[VAR3].VAR25.VAR14 = 0;
            VAR6->VAR24[VAR3].VAR25.VAR16 = VAR6;
            VAR6->VAR24[VAR3].VAR25.VAR17 = VAR3 + 4;
            VAR6->VAR24[VAR3].VAR25.VAR18 = 0;
            VAR6->VAR24[VAR3].VAR26 = 0;
            VAR6->VAR24[VAR3].VAR27 = 0x0;
            VAR6->VAR24[VAR3].VAR25.VAR19 = FUN5(VAR11, VAR28, &VAR6->VAR24[VAR3]);
        }
    }
    VAR4 = FUN6(VAR29, VAR30, VAR6, VAR31);
    FUN7(VAR2, 0x00001000, VAR4);
    return 0;
}