static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, bool VAR5)
{
    VAR6 *VAR7;
    char VAR8[256];
    VAR7 = FUN2(VAR2);
    if (FUN3(VAR7) && FUN4(VAR7) && !(VAR4 & VAR9))
    {
        FUN5(VAR5, "", VAR3);
        if (FUN6(VAR8, sizeof(VAR8)) < 0)
        {
            FUN7("");
            return -1;
        }
        if (FUN8(VAR7, VAR8) < 0)
        {
            FUN7("");
            return -1;
        }
    }
    return 0;
}