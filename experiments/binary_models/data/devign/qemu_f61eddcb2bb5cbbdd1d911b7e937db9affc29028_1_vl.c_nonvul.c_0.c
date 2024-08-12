static int FUN1(const char *VAR1)
{
    int VAR2;
    VAR2 = FUN2(VAR1);
    if (VAR2 < 0)
    {
        FUN3("", VAR1);
    }
    return VAR2;
}