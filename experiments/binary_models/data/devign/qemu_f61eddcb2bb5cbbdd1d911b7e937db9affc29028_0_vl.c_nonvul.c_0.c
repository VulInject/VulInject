static int FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    if (!FUN2("", VAR1, NULL))
    {
        FUN3(1);
    }
    VAR3 = FUN4(FUN5(""), "", 1, NULL);
    if (!VAR3)
    {
        FUN6("");
        FUN3(1);
    }
    FUN7(VAR3, "", "", &VAR4);
    FUN7(VAR3, "", "", &VAR4);
    return 0;
}