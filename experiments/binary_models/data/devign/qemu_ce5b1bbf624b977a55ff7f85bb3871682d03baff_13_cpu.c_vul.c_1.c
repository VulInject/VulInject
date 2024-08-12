static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    static bool VAR7;
    uint32_t VAR8, VAR9;
    VAR4->VAR10 = &VAR6->VAR11;
    FUN4(VAR4, &VAR12);
    VAR6->VAR13 = FUN5(VAR14, VAR15, VAR16, VAR16);
    VAR8 = VAR4->VAR17 / VAR18;
    VAR9 = VAR4->VAR17 % VAR18;
    VAR6->VAR19 = (VAR8 << VAR20) | VAR9;
    if (FUN6())
    {
        FUN7(FUN8(VAR6), VAR21, 4);
    }
    else
    {
        FUN7(FUN8(VAR6), VAR22, 4);
    }
    VAR6->VAR23[VAR24] = FUN9(VAR25, VAR26, VAR27, VAR6);
    VAR6->VAR23[VAR28] = FUN9(VAR25, VAR26, VAR29, VAR6);
    VAR6->VAR23[VAR30] = FUN9(VAR25, VAR26, VAR31, VAR6);
    VAR6->VAR23[VAR32] = FUN9(VAR25, VAR26, VAR33, VAR6);
    FUN10(FUN8(VAR6), VAR6->VAR34, FUN11(VAR6->VAR34));
    VAR6->VAR35 = "";
    VAR6->VAR36 = 1;
    VAR6->VAR37 = VAR38;
    if (FUN12())
    {
        VAR6->VAR36 = 2;
        if (!VAR7)
        {
            VAR7 = true;
            FUN13();
        }
    }
}