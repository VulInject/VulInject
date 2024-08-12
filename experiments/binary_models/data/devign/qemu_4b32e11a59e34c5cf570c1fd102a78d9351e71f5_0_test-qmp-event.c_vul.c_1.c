static void FUN1(test_QAPIEvent VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    VAR2 *VAR8;
    int64_t VAR9, VAR10;
    VAR7 = FUN2(VAR3, "");
    FUN3(VAR7);
    VAR8 = FUN4(VAR7);
    FUN3(VAR8);
    VAR7 = FUN2(VAR8, "");
    FUN3(VAR7 && FUN5(VAR7) == VAR11);
    VAR9 = FUN6(FUN7(VAR7));
    VAR7 = FUN2(VAR8, "");
    FUN3(VAR7 && FUN5(VAR7) == VAR11);
    VAR10 = FUN6(FUN7(VAR7));
    if (VAR9 == -1)
    {
        FUN3(VAR10 == -1);
    }
    else
    {
        FUN3(VAR10 >= 0 && VAR10 <= 999999);
    }
    FUN3(FUN8(VAR8) == 2);
    FUN9(VAR3, "");
    FUN3(FUN10(VAR3, VAR12->VAR13));
}