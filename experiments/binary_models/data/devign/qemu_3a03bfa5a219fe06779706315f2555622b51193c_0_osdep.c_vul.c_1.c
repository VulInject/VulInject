int FUN1(int VAR1[2])
{
    int VAR2;
    VAR2 = FUN2(VAR1, VAR3);
    VAR2 = FUN3(VAR1);
    if (VAR2 == 0)
    {
        FUN4(VAR1[0]);
        FUN4(VAR1[1]);
    }
    return VAR2;
}