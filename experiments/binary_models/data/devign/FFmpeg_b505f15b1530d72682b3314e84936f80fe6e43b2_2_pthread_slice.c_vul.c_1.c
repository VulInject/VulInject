static int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, int *VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11->VAR12;
    if (!(VAR2->VAR13 & VAR14) || VAR2->VAR15 <= 1)
        return FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
    if (VAR7 <= 0)
        return 0;
    pthread_mutex_lock(&VAR10->VAR16);
    VAR10->VAR17 = VAR2->VAR15;
    VAR10->VAR7 = VAR7;
    VAR10->VAR8 = VAR8;
    VAR10->VAR18 = VAR5;
    VAR10->VAR4 = VAR4;
    VAR10->VAR19 = VAR6;
    VAR10->VAR20++;
    FUN3(&VAR10->VAR21);
    FUN4(VAR10, VAR2->VAR15);
    return 0;
}