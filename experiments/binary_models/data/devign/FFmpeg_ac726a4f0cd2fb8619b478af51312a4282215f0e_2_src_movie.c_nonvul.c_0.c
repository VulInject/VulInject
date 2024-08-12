static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    AVPacket VAR7;
    int VAR8, VAR9 = 0;
    if (!VAR4->VAR7.VAR10 && VAR4->VAR11 == VAR12)
        return VAR13;
    if (!VAR4->VAR7.VAR10)
    {
        while ((VAR8 = FUN2(VAR4->VAR14, &VAR7)) >= 0)
        {
            if (VAR7.VAR15 != VAR4->VAR15)
            {
                FUN3(&VAR7);
                continue;
            }
            else
            {
                VAR4->VAR16 = VAR4->VAR7 = VAR7;
                break;
            }
        }
        if (VAR8 == VAR13)
        {
            VAR4->VAR11 = VAR12;
            return VAR8;
        }
    }
    FUN4(VAR4->VAR17);
    VAR8 = FUN5(VAR4->VAR18, VAR4->VAR17, &VAR9, &VAR4->VAR7);
    if (VAR8 < 0)
    {
        VAR4->VAR7.VAR10 = 0;
        return VAR8;
    }
    VAR4->VAR7.VAR19 += VAR8;
    VAR4->VAR7.VAR10 -= VAR8;
    if (VAR9)
    {
        int VAR20 = VAR4->VAR17->VAR20;
        int VAR21 = FUN6(NULL, VAR4->VAR18->VAR22, VAR20, VAR4->VAR18->VAR23, 1);
        if (VAR21 < 0)
            return VAR21;
        VAR4->VAR24 = FUN7(VAR2, VAR25, VAR20);
        memcpy(VAR4->VAR24->VAR19[0], VAR4->VAR17->VAR19[0], VAR21);
        VAR4->VAR24->VAR26 = VAR4->VAR7.VAR26;
        VAR4->VAR24->VAR27 = VAR4->VAR7.VAR27;
        VAR4->VAR24->VAR28->VAR29 = VAR4->VAR18->VAR29;
    }
    if (VAR4->VAR7.VAR10 <= 0)
        FUN3(&VAR4->VAR16);
    return 0;
}