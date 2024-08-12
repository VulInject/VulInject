static int FUN1(const VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6, void *VAR7)
{
    H2645Packet VAR8 = {0};
    int VAR9, VAR10 = 0;
    VAR10 = FUN2(&VAR8, VAR2, VAR3, VAR7, VAR6, 2, VAR11, 1);
    if (VAR10 < 0)
    {
        VAR10 = 0;
        goto VAR12;
    }
    for (VAR9 = 0; VAR9 < VAR8.VAR13; VAR9++)
    {
        VAR14 *VAR15 = &VAR8.VAR16[VAR9];
        switch (VAR15->VAR17)
        {
        case VAR18:
            VAR10 = FUN3(&VAR15->VAR19, VAR7, VAR5, 0);
            if (VAR10 < 0)
                goto VAR12;
            break;
        case VAR20:
            VAR10 = FUN4(&VAR15->VAR19, VAR7, VAR5, VAR15->VAR21);
            if (VAR10 < 0)
                goto VAR12;
            break;
        default:
            FUN5(VAR7, VAR22, "", VAR15->VAR17);
            break;
        }
    }
VAR12:
    FUN6(&VAR8);
    return VAR10;
}