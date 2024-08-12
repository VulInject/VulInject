int FUN1(VAR1 *VAR2, const char *VAR3)
{
    if (!FUN2(VAR3[0]))
    {
        int VAR4;
        VAR4 = FUN3(VAR2, VAR3);
        if (VAR4 == -1)
        {
            FUN4("", VAR3);
            return -1;
        }
        return VAR4;
    }
    else
    {
        return FUN5(VAR3, NULL, 0);
    }
}