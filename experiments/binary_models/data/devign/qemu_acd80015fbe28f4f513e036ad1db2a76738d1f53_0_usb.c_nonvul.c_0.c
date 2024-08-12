void FUN1(const char *VAR1, const int VAR2, void (*VAR3)(void))
{
    char *VAR4 = FUN2("", VAR2);
    FUN3("", VAR4, "", VAR2, VAR1);
    if (VAR3)
    {
        FUN4();
    }
    FUN5(VAR4);
    FUN6(VAR4);
}