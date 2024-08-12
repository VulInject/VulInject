static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5)
{
    z_stream VAR6;
    unsigned char *VAR7;
    unsigned VAR8;
    int VAR9;
    VAR6.VAR10 = VAR11;
    VAR6.VAR12 = VAR13;
    VAR6.VAR14 = NULL;
    if (FUN2(&VAR6) != VAR15)
        return VAR16;
    VAR6.VAR17 = (unsigned char *)VAR4;
    VAR6.VAR18 = VAR5 - VAR4;
    FUN3(VAR2, 0, -1);
    while (VAR6.VAR18 > 0)
    {
        FUN4(VAR2, 1, &VAR7, &VAR8);
        if (!VAR8)
        {
            VAR9 = FUN5(VAR19);
            goto VAR20;
        }
        VAR6.VAR21 = VAR7;
        VAR6.VAR22 = VAR8;
        VAR9 = FUN6(&VAR6, VAR23);
        if (VAR9 != VAR15 && VAR9 != VAR24)
        {
            VAR9 = VAR16;
            goto VAR20;
        }
        VAR2->VAR25 += VAR6.VAR21 - VAR7;
        if (VAR9 == VAR24)
            break;
    }
    FUN7(&VAR6);
    VAR2->VAR26[VAR2->VAR25] = 0;
    return 0;
VAR20:
    FUN7(&VAR6);
    FUN8(VAR2, NULL);
    return VAR9;
}