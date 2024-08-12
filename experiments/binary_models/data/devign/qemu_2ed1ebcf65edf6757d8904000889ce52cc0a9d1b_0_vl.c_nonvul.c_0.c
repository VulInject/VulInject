int FUN1(struct VAR1 *VAR1)
{
    time_t VAR2;
    if (VAR3 == -1)
        if (VAR4)
            VAR2 = FUN2(VAR1);
        else
        {
            struct tm VAR5 = *VAR1;
            VAR5.VAR6 = -1;
            VAR2 = FUN3(&VAR5);
        }
    else
        VAR2 = FUN2(VAR1) + VAR3;
    return VAR2 - FUN4();
}