static inline int FUN1(VAR1 *VAR2)
{
    int VAR3 = 4;
    while (FUN2(VAR2))
    {
        VAR3++;
        if (VAR3 > 30)
        {
            FUN3(NULL, VAR4, "");
            VAR3 = 30;
            break;
        }
    }
    return (1 << VAR3) + FUN4(VAR2, VAR3);
}