int FUN1(int VAR1[2])
{
    int VAR2;
    VAR2 = FUN2(0, 0);
    if (VAR2 >= 0)
    {
        VAR1[0] = VAR2;
        VAR1[1] = FUN3(VAR2);
        if (VAR1[1] == -1)
        {
            close(VAR2);
            return -1;
        }
        FUN4(VAR2);
        FUN4(VAR1[1]);
        return 0;
    }
    if (VAR3 != VAR4)
    {
        return -1;
    }
    return FUN5(VAR1);
}