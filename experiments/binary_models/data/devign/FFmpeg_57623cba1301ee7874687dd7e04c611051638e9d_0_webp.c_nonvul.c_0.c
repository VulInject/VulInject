static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7, unsigned int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    AVPacket VAR12;
    int VAR13;
    if (!VAR10->VAR14)
    {
        FUN2(VAR2);
        VAR10->VAR14 = 1;
        VAR10->VAR15.VAR16 = 1;
        if (VAR10->VAR17)
            VAR2->VAR18 = VAR19;
        else
            VAR2->VAR18 = VAR20;
    }
    VAR10->VAR21 = 0;
    if (VAR8 > VAR22)
    {
        FUN3(VAR2, VAR23, "");
        return VAR24;
    }
    FUN4(&VAR12);
    VAR12.VAR25 = VAR7;
    VAR12.VAR26 = VAR8;
    VAR13 = FUN5(VAR2, VAR4, VAR5, &VAR12);
    if (VAR10->VAR17)
    {
        VAR13 = FUN6(VAR2, VAR4, VAR10->VAR27, VAR10->VAR28);
        if (VAR13 < 0)
            return VAR13;
    }
    return VAR13;
}