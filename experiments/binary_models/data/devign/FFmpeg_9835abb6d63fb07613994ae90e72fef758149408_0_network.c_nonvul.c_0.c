int FUN1(int VAR1, const struct VAR2 *VAR3, socklen_t VAR4, int VAR5, VAR6 *VAR7)
{
    struct pollfd VAR8 = {VAR1, VAR9, 0};
    int VAR10;
    socklen_t VAR11;
    FUN2(VAR1, 1);
    while ((VAR10 = connect(VAR1, VAR3, VAR4)))
    {
        VAR10 = FUN3();
        switch (VAR10)
        {
        case FUN4(VAR12):
            if (FUN5(&VAR7->VAR13))
                return VAR14;
            continue;
        case FUN4(VAR15):
        case FUN4(VAR16):
            VAR10 = FUN6(&VAR8, 1, VAR5, &VAR7->VAR13);
            if (VAR10 < 0)
                return VAR10;
            VAR11 = sizeof(VAR10);
            if (FUN7(VAR1, VAR17, VAR18, &VAR10, &VAR11))
                VAR10 = FUN8(FUN3());
            if (VAR10 != 0)
            {
                char VAR19[100];
                VAR10 = FUN4(VAR10);
                FUN9(VAR10, VAR19, sizeof(VAR19));
                FUN10(VAR7, VAR20, "", VAR7->VAR21, VAR19);
            }
        default:
            return VAR10;
        }
    }
    return VAR10;
}