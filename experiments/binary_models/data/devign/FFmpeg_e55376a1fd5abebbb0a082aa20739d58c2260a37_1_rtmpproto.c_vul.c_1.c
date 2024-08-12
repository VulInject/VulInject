static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR3 *VAR5 = VAR2->VAR6;
    if (!(VAR2->VAR6 = FUN2(VAR2->VAR7 + 55)))
    {
        VAR2->VAR6 = VAR5;
        return FUN3(VAR8);
    }
    memcpy(VAR2->VAR6, VAR5, 13);
    memcpy(VAR2->VAR6 + 13 + 55, VAR5 + 13, VAR2->VAR7 - 13);
    VAR2->VAR7 += 55;
    FUN4(VAR5);
    VAR4 = VAR2->VAR6 + 13;
    FUN5(&VAR4, VAR9);
    FUN6(&VAR4, 40);
    FUN6(&VAR4, 0);
    FUN7(&VAR4, 0);
    FUN5(&VAR4, VAR10);
    FUN8(&VAR4, 10);
    FUN9(&VAR4, "", 10);
    FUN5(&VAR4, VAR11);
    FUN7(&VAR4, 1);
    FUN8(&VAR4, 8);
    FUN9(&VAR4, "", 8);
    FUN5(&VAR4, VAR12);
    FUN10(&VAR4, FUN11(VAR2->VAR13));
    FUN8(&VAR4, 0);
    FUN5(&VAR4, VAR14);
    FUN7(&VAR4, 40);
    return 0;
}