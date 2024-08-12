static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7, unsigned int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    AVPacket VAR12;
    int VAR13;
    if (!VAR10->VAR14)
    {
        FUN2(VAR2);
        VAR10->VAR14 = 1;
        if (VAR10->VAR15)
            VAR2->VAR16 = VAR17;
    }
    VAR10->VAR18 = 0;
    if (VAR8 > VAR19)
    {
        FUN3(VAR2, VAR20, "");
        return VAR21;
    }
    FUN4(&VAR12);
    VAR12.VAR22 = VAR7;
    VAR12.VAR23 = VAR8;
    VAR13 = FUN5(VAR2, VAR4, VAR5, &VAR12);
    if (VAR10->VAR15)
    {
        VAR13 = FUN6(VAR2, VAR4, VAR10->VAR24, VAR10->VAR25);
    }