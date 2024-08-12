static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(FUN3(VAR2));
    VAR7 *VAR8 = FUN4(VAR2);
    int VAR9;
    for (VAR9 = 0; VAR9 < VAR8->VAR10; VAR9++)
    {
        VAR11 *VAR12 = FUN3(VAR6->VAR13[VAR9]);
        VAR1 *VAR2 = FUN5(VAR12);
        VAR14 *VAR15 = FUN6(VAR2);
        VAR16 *VAR17 = FUN7(VAR15);
        FUN8(VAR17);
        FUN9(VAR17->VAR18);
        FUN10(VAR15);
        FUN9(VAR12);
    }
    FUN11(VAR6->VAR13);
}