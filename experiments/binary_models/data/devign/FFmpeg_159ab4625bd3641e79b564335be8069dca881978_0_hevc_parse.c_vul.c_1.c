static int FUN1(const VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6, int VAR7, void *VAR8)
{
    int VAR9;
    int VAR10 = 0;
    H2645Packet VAR11 = {0};
    VAR10 = FUN2(&VAR11, VAR2, VAR3, VAR8, VAR6, VAR7, VAR12, 1);
    if (VAR10 < 0)
    {
        goto VAR13;
    }
    for (VAR9 = 0; VAR9 < VAR11.VAR14; VAR9++)
    {
        VAR15 *VAR16 = &VAR11.VAR17[VAR9];
        switch (VAR16->VAR18)
        {
        case VAR19:
            FUN3(&VAR16->VAR20, VAR8, VAR5);
            break;
        case VAR21:
            FUN4(&VAR16->VAR20, VAR8, VAR5, 1);
            break;
        case VAR22:
            FUN5(&VAR16->VAR20, VAR8, VAR5);
            break;
        default:
            FUN6(VAR8, VAR23, "", VAR16->VAR18);
            break;
        }
    }
VAR13:
    FUN7(&VAR11);
    return VAR10;
}