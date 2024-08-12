static void FUN1(void *VAR1)
{
    int8_t VAR2;
    VAR3 *flock;
    size_t VAR4 = 7;
    struct stat VAR5;
    VAR6 *VAR7;
    int32_t VAR8, VAR9 = 0;
    VAR10 *VAR11 = VAR1;
    VAR12 *VAR13 = VAR11->VAR13;
    flock = FUN2(sizeof(*flock));
    FUN3(VAR11, VAR4, "", &VAR8, &flock->VAR14, &flock->VAR15, &flock->VAR16, &flock->VAR17, &flock->VAR18, &flock->VAR19);
    VAR2 = VAR20;
    if (flock->VAR15 & ~VAR21)
    {
        VAR9 = -VAR22;
        goto VAR23;
    }
    VAR7 = FUN4(VAR11, VAR8);
    if (VAR7 == NULL)
    {
        VAR9 = -VAR24;
        goto VAR23;
    }
    VAR9 = FUN5(VAR11, VAR7->VAR25.VAR26, &VAR5);
    if (VAR9 < 0)
    {
        goto VAR27;
    }
    VAR2 = VAR28;
VAR27:
    FUN6(VAR11, VAR7);
VAR23:
    VAR9 = VAR4;
    VAR9 += FUN7(VAR11, VAR4, "", VAR2);
    FUN8(VAR11->VAR29, VAR11->VAR30, VAR2);
    FUN9(VAR13, VAR11, VAR9);
    FUN10(&flock->VAR19);
    FUN11(flock);