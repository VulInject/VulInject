static VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    VAR1 *VAR5;
    VAR5 = FUN2(VAR3, VAR6);
    FUN3(VAR5 != NULL);
    FUN4(VAR5->VAR7.VAR8, ==, VAR6);
    FUN4(VAR5->VAR9->VAR10, ==, ((VAR4 << 3) | VAR11));
    FUN5(VAR5);
    FUN6(&VAR5->VAR7);
    FUN7(&VAR5->VAR7);
    FUN8(&VAR5->VAR7);
    return VAR5;
}