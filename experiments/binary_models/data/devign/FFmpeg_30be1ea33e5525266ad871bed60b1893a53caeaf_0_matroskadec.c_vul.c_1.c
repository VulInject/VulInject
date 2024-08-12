static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    FUN2(VAR5->VAR6);
    if (!(VAR5->VAR6 = FUN3(VAR3)))
        return FUN4(VAR7);
    VAR5->VAR8 = VAR3;
    VAR5->VAR9 = FUN5(VAR2);
    if (FUN6(VAR2, VAR5->VAR6, VAR3) != VAR3)
    {
        FUN7(&VAR5->VAR6);
        return FUN4(VAR10);
    }
    return 0;
}