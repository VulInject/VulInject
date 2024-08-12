static int FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
    struct VAR5 *VAR5;
    if (VAR4->VAR6 || VAR4->VAR7)
    {
        FUN3(VAR2);
    }
    if (VAR4->VAR8)
    {
        FUN4(VAR4->VAR9);
    }
    while (!FUN5(&VAR4->VAR10))
    {
        VAR5 = FUN6(&VAR4->VAR10);
        FUN7(VAR5, VAR11);
        FUN8(&VAR5->VAR12);
        FUN9(VAR5);
    }
    FUN9(VAR4->VAR13);
    FUN9(VAR4->VAR14);
    FUN9(VAR4->VAR15);
    FUN9(VAR4->VAR16);
    FUN9(VAR4->VAR17);
    FUN10(VAR4->VAR18);
    return 0;
}