int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if (FUN2(VAR2))
    {
        VAR5 = FUN3(VAR4, VAR6, 0, 24);
        if (VAR5)
        {
            FUN4("", strerror(-VAR5));
            FUN5(1);
        }
        else
        {
            FUN6("");
            VAR7 = true;
            return 1;
        }
    }
    else
    {
        return 0;
    }
}