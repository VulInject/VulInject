void FUN1(struct VAR1 *VAR1, int VAR2)
{
    time_t VAR3 = FUN2();
    VAR3 += VAR2;
    if (VAR4 == -1)
    {
        if (VAR5)
            FUN3(&VAR3, VAR1);
        else
            FUN4(&VAR3, VAR1);
    }
    else
    {
        VAR3 -= VAR4;
        FUN3(&VAR3, VAR1);
    }
}