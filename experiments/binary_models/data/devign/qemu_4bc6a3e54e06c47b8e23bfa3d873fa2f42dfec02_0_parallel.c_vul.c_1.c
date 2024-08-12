FUN1(VAR1) static bool FUN2(VAR2 *VAR3, int VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR10 = FUN3(VAR3, "");
    if (!VAR10)
    {
        return false;
    }
    VAR8 = FUN4(VAR10);
    FUN5(VAR8, "", VAR4);
    FUN6(VAR8, "", VAR6);
    if (FUN7(VAR8) < 0)
    {
        return false;
    }
    return true;
}