static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7, unsigned int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    AVPacket VAR12;
    int VAR13;
    if (!VAR10->VAR14)
    {
        FUN2(VAR2);
        VAR10->VAR14 = 1;
    }
    VAR2->VAR15 = VAR10->VAR16 ? VAR17 : VAR18;
    VAR10->VAR19 = 0;
    if (VAR8 > VAR20)
    {
        FUN3(VAR2, VAR21, "");
        return VAR22;
    }
    FUN4(&VAR12);
    VAR12.VAR23 = VAR7;
    VAR12.VAR24 = VAR8;
    VAR13 = FUN5(VAR2, VAR4, VAR5, &VAR12);
    if (VAR13 < 0)
        return VAR13;
    FUN6(VAR2, VAR2->VAR25, VAR2->VAR26);
    if (VAR10->VAR16)
    {
        VAR13 = FUN7(VAR2, VAR4, VAR10->VAR27, VAR10->VAR28);
        if (VAR13 < 0)
            return VAR13;
    }
    return VAR13;