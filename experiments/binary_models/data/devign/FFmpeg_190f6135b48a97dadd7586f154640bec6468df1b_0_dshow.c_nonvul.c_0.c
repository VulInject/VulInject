FUN1(void *VAR1, int VAR2, VAR3 *VAR4, int VAR5, int64_t VAR6)
{
    VAR7 *VAR8 = VAR1;
    struct VAR9 *VAR10 = VAR8->VAR1;
    VAR11 **VAR12, *VAR13;
    FUN2(VAR10->mutex, VAR14);
    if (FUN3(VAR8))
        goto VAR15;
    VAR13 = FUN4(sizeof(VAR11));
    if (!VAR13)
        goto VAR15;
    if (FUN5(&VAR13->VAR16, VAR5) < 0)
    {
        FUN6(VAR13);
        goto VAR15;
    }
    VAR13->VAR16.VAR17 = VAR2;
    VAR13->VAR16.VAR18 = VAR6;
    memcpy(VAR13->VAR16.VAR19, VAR4, VAR5);
    for (VAR12 = &VAR10->VAR20; *VAR12; VAR12 = &(*VAR12)->VAR21)
        ;
    *VAR12 = VAR13;
    VAR10->VAR22 += VAR5;
    FUN7(VAR10->VAR23[1]);
    FUN8(VAR10->mutex);
    return;
VAR15:
    FUN8(VAR10->mutex);
    return;
}