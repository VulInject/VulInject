static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    int64_t VAR6;
    FUN2(&VAR2->VAR7, 16, 0);
    FUN2(&VAR2->VAR7, 16, VAR8);
    VAR6 = VAR2->VAR9->VAR10;
    if (VAR2->VAR11[1])
        VAR6 = FUN3(VAR6, VAR2->VAR11[1]->VAR10);
    VAR6 = VAR6 * VAR2->VAR12->VAR13.VAR14;
    VAR2->VAR15 = FUN4(VAR6, VAR2->VAR12->VAR13.VAR16);
    VAR5 = FUN4(VAR6, VAR2->VAR12->VAR13.VAR16);
    VAR4 = FUN4(VAR5, 60);
    FUN5(VAR5, 60);
    VAR3 = FUN4(VAR4, 60);
    FUN5(VAR4, 60);
    VAR3 = FUN5(VAR3, 24);
    FUN2(&VAR2->VAR7, 5, VAR3);
    FUN2(&VAR2->VAR7, 6, VAR4);
    FUN2(&VAR2->VAR7, 1, 1);
    FUN2(&VAR2->VAR7, 6, VAR5);
    FUN2(&VAR2->VAR7, 1, !!(VAR2->VAR17 & VAR18));
    FUN2(&VAR2->VAR7, 1, 0);
    FUN6(&VAR2->VAR7);
}