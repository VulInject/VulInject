static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = &VAR6->VAR8;
    static bool VAR9;
    static int VAR10 = 0;
    struct tm VAR11;
    VAR4->VAR12 = VAR8;
    FUN4(VAR8);
    FUN5(VAR13, VAR6);
    FUN6(&VAR11, 0);
    VAR8->VAR14 = VAR15 + (FUN7(FUN8(&VAR11)) * 1000000000ULL);
    VAR8->VAR16 = 0;
    VAR8->VAR17 = FUN9(VAR18, VAR19, VAR6);
    VAR8->VAR20 = FUN9(VAR18, VAR21, VAR6);
    FUN10(VAR22, VAR6);
    VAR8->VAR10 = VAR10++;
    if (FUN11() && !VAR9)
    {
        VAR9 = true;
        FUN12();
    }
}