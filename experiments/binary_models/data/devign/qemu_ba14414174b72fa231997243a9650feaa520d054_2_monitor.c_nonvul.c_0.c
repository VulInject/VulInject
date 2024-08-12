static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR8 = FUN2();
    FUN3();
    for (VAR6 = VAR9; VAR6 != NULL; VAR6 = VAR6->VAR10)
    {
        VAR11 *VAR12;
        VAR3 *VAR13;
        FUN4(VAR6);
        VAR13 = FUN5("", VAR6->VAR14, VAR6 == VAR2->VAR15, VAR6->VAR16);
        VAR12 = FUN6(VAR13);
        FUN7(VAR12, "", FUN8(VAR6->VAR17 + VAR6->VAR18[VAR19].VAR20));
        FUN7(VAR12, "", FUN8(VAR6->VAR21));
        FUN7(VAR12, "", FUN8(VAR6->VAR22));
        FUN7(VAR12, "", FUN8(VAR6->VAR23));
        FUN7(VAR12, "", FUN8(VAR6->VAR24.VAR25));
        FUN9(VAR8, VAR12);
    }
    *VAR4 = FUN10(VAR8);
}