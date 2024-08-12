static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, VAR7 *VAR8);
static bool FUN2(VAR1 *VAR2, int VAR5, int VAR6)
{
    if (VAR2->VAR9.VAR10 != VAR11)
    {
        return false;
    }
    if (FUN3(VAR2->VAR12) == 1 || VAR2->VAR13.VAR14 == 1)
    {
        return false;
    }
    return true;
}