static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR3 *VAR5[4];
    VAR5[0] = FUN2(VAR4, 9);
    if (VAR5[0])
        FUN3(VAR2, VAR5[0]);
    VAR5[1] = FUN2(VAR4, 10);
    if (VAR5[1])
        FUN4(VAR2, VAR5[1]);
    else
        FUN4(VAR2, NULL);
    VAR5[2] = FUN2(VAR4, 11);
    if (VAR5[0] && VAR5[1] && VAR5[2])
        FUN5(VAR2, VAR5[2]);
    else
        FUN5(VAR2, NULL);
    VAR5[3] = FUN2(VAR4, 12);
    if (VAR5[0] && VAR5[1] && VAR5[3])
        FUN6(VAR2, VAR5[3]);
    else
        FUN6(VAR2, NULL);
}