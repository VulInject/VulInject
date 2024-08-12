static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    enum FLACExtradataFormat VAR9;
    if (!FUN2(VAR6, &VAR9, &VAR8))
    {
        FUN3(VAR2, VAR10, "");
        return -1;
    }
    if (VAR9 == VAR11)
    {
        FUN4(VAR4, "", 4);
        FUN5(VAR4, 0x80);
        FUN6(VAR4, VAR12);
    }
    FUN4(VAR4, VAR6->VAR13, VAR6->VAR14);
    return 0;
}