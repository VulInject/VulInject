static void FUN1(void *VAR1)
{
    int8_t VAR2;
    V9fsFlock flock;
    size_t VAR3 = 7;
    struct stat VAR4;
    VAR5 *VAR6;
    int32_t VAR7, VAR8 = 0;
    VAR9 *VAR10 = VAR1;
    VAR11 *VAR12 = VAR10->VAR12;
    VAR2 = VAR13;
    FUN2(&flock.VAR14);
    VAR8 = FUN3(VAR10, VAR3, "", &VAR7, &flock.VAR15, &flock.VAR16, &flock.VAR17, &flock.VAR18, &flock.VAR19, &flock.VAR14);
    if (VAR8 < 0)
    {
        goto VAR20;
    }
    FUN4(VAR10->VAR21, VAR10->VAR22, VAR7, flock.VAR15, flock.VAR17, flock.VAR18);
    if (flock.VAR16 & ~VAR23)
    {
        VAR8 = -VAR24;
        goto VAR20;
    }
    VAR6 = FUN5(VAR10, VAR7);
    if (VAR6 == NULL)
    {
        VAR8 = -VAR25;
        goto VAR20;
    }
    VAR8 = FUN6(VAR10, VAR6, &VAR4);
    if (VAR8 < 0)
    {
        goto VAR26;
    }
    VAR2 = VAR27;
VAR26:
    FUN7(VAR10, VAR6);
VAR20:
    VAR8 = FUN8(VAR10, VAR3, "", VAR2);
    if (VAR8 > 0)
    {
        VAR8 += VAR3;
    }
    FUN9(VAR10->VAR21, VAR10->VAR22, VAR2);
    FUN10(VAR12, VAR10, VAR8);
    FUN11(&flock.VAR14);
}