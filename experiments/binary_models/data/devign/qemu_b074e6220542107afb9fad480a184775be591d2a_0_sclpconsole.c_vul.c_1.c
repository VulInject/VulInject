static int FUN1(VAR1 *VAR2)
{
    static bool VAR3;
    VAR4 *VAR5 = FUN2(VAR4, VAR2, VAR2);
    if (VAR3)
    {
        FUN3("");
        return -1;
    }
    VAR3 = true;
    if (VAR5->VAR6)
    {
        FUN4(VAR5->VAR6, VAR7, VAR8, NULL, VAR5);
    }
    VAR5->VAR9 = *FUN5(VAR10, NULL, 1);
    return 0;
}