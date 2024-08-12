static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR3 *VAR8, *VAR9 = NULL;
    int VAR10, VAR11;
    VAR12 *VAR13;
    int VAR14 = VAR15;
    do
    {
        VAR13 = FUN2(sizeof(*VAR13) * VAR14);
        VAR11 = FUN3(VAR6->VAR16, VAR13, &VAR14);
        if (VAR11 <= 0)
        {
            FUN4(VAR13);
        }
    } while (VAR11 == -VAR17);
    if (VAR11 <= 0)
    {
        goto VAR18;
    }
    VAR9 = FUN5(VAR11 * sizeof(VAR3));
    for (VAR10 = 0; VAR10 < VAR11; VAR10++)
    {
        const char *VAR19 = VAR13[VAR10].VAR20;
        VAR8 = VAR9 + VAR10;
        FUN6(VAR8->VAR21, sizeof(VAR8->VAR21), VAR19);
        FUN6(VAR8->VAR20, sizeof(VAR8->VAR20), VAR19);
        VAR8->VAR22 = VAR13[VAR10].VAR23;
        VAR8->VAR24 = 0;
        VAR8->VAR25 = 0;
        VAR8->VAR26 = 0;
    }
    FUN7(VAR13);
    FUN4(VAR13);
VAR18:
    *VAR4 = VAR9;
    return VAR11;
}