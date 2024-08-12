static void FUN1(int VAR1, VAR2 *VAR3, void *VAR4)
{
    VAR5 *VAR6 = VAR7->VAR8;
    VAR9 *VAR10 = FUN2(VAR6);
    VAR11 *VAR12 = VAR10->VAR13;
    int VAR14;
    target_siginfo_t VAR15;
    VAR16 *VAR17 = VAR4;
    struct VAR18 *VAR19;
    if ((VAR1 == VAR20 || VAR1 == VAR21) && VAR3->VAR22 > 0)
    {
        if (FUN3(VAR1, VAR3, VAR4))
            return;
    }
    VAR14 = FUN4(VAR1);
    if (VAR14 < 1 || VAR14 > VAR23)
        return;
    FUN5(VAR6, VAR1, VAR14);
    FUN6(VAR4);
    FUN7(&VAR15, VAR3);
    VAR19 = &VAR12->VAR24[VAR14 - 1];
    VAR19->VAR3 = VAR15;
    VAR19->VAR25 = VAR14;
    VAR12->VAR26 = 1;
    FUN8(&VAR17->VAR27);
    FUN9(&VAR17->VAR27, VAR20);
    FUN9(&VAR17->VAR27, VAR21);
    FUN10(VAR7);
}