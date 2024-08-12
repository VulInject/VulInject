int FUN1(void)
{
    VAR1 *VAR2;
    int VAR3 = 0;
    FUN2(VAR2, &VAR4, VAR5)
    {
        int VAR6 = FUN3(VAR2);
        if (VAR6 < 0 && !VAR3)
        {
            VAR3 = VAR6;
        }
    }
    return VAR3;
}