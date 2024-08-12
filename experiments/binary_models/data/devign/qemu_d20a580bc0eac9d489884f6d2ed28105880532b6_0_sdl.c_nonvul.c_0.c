static void FUN1(int VAR1, int VAR2, int VAR3, int VAR4, int VAR5)
{
    static uint32_t VAR6[VAR7] = {
        [VAR8] = FUN2(VAR9),
        [VAR10] = FUN2(VAR11),
        [VAR12] = FUN2(VAR13),
        [VAR14] = FUN2(VAR15),
        [VAR16] = FUN2(VAR17),
    };
    static uint32_t VAR18;
    if (VAR18 != VAR5)
    {
        FUN3(VAR19->VAR20, VAR6, VAR18, VAR5);
        VAR18 = VAR5;
    }
    if (FUN4())
    {
        FUN5(VAR19->VAR20, VAR21, VAR3, VAR22->VAR23);
        FUN5(VAR19->VAR20, VAR24, VAR4, VAR22->VAR25);
    }
    else
    {
        if (VAR26)
        {
            VAR3 -= VAR27;
            VAR4 -= VAR28;
            VAR27 += VAR3;
            VAR28 += VAR4;
            VAR1 = VAR3;
            VAR2 = VAR4;
        }
        FUN6(VAR19->VAR20, VAR21, VAR1);
        FUN6(VAR19->VAR20, VAR24, VAR2);
    }
    FUN7();
}