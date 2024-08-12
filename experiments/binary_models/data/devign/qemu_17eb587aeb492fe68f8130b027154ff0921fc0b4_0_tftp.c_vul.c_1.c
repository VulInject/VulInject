static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6)
{
    struct VAR7 *VAR8;
    int VAR9;
    for (VAR9 = 0; VAR9 < VAR10; VAR9++)
    {
        VAR8 = &VAR2->VAR11[VAR9];
        if (!FUN2(VAR8))
            goto VAR12;
        if ((int)(VAR13 - VAR8->VAR14) > 5000)
        {
            FUN3(VAR8);
            goto VAR12;
        }
    }
    return -1;
VAR12:
    memset(VAR8, 0, sizeof(*VAR8));
    VAR8->VAR15 = *VAR4;
    VAR8->VAR16 = -1;
    VAR8->VAR17 = 512;
    VAR8->VAR18 = VAR6->VAR19.VAR20;
    VAR8->VAR2 = VAR2;
    FUN4(VAR8);
    return VAR9;
}