int FUN1(int VAR1, const struct VAR2 *VAR3, socklen_t VAR4, int VAR5, VAR6 *VAR7, int VAR8)
{
    struct pollfd VAR9 = {VAR1, VAR10, 0};
    int VAR11;
    socklen_t VAR12;
    if (FUN2(VAR1, 1) < 0)
        FUN3(NULL, VAR13, "");
    while ((VAR11 = connect(VAR1, VAR3, VAR4)))
    {
        VAR11 = FUN4();
        switch (VAR11)
        {
        case FUN5(VAR14):
            if (FUN6(&VAR7->VAR15))
                return VAR16;
            continue;
        case FUN5(VAR17):
        case FUN5(VAR18):
            VAR11 = FUN7(&VAR9, 1, VAR5, &VAR7->VAR15);
            if (VAR11 < 0)
                return VAR11;
            VAR12 = sizeof(VAR11);
            if (FUN8(VAR1, VAR19, VAR20, &VAR11, &VAR12))
                VAR11 = FUN9(FUN4());
            if (VAR11 != 0)
            {
                char VAR21[100];
                VAR11 = FUN5(VAR11);
                FUN10(VAR11, VAR21, sizeof(VAR21));
                if (VAR8)
                    FUN3(VAR7, VAR22, "", VAR7->VAR23, VAR21);
                else
                    FUN3(VAR7, VAR24, "", VAR7->VAR23, VAR21);
            }
        default:
            return VAR11;
        }
    }
    return VAR11;
}