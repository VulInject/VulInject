static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    int VAR9 = 1, VAR10 = 0;
    AVFrame VAR11;
    AVPacket VAR12 = *VAR4;
    if (!FUN2(VAR2->VAR8))
    {
        VAR5 *VAR13 = NULL;
        VAR8 = FUN3(VAR2->VAR8->VAR14);
        if (!VAR8)
            return -1;
        FUN4(VAR6 ? VAR6 : &VAR13, "", "", 0);
        VAR10 = FUN5(VAR2->VAR8, VAR8, VAR6 ? VAR6 : &VAR13);
        if (!VAR6)
            FUN6(&VAR13);
        if (VAR10 < 0)
            return VAR10;
    }
    while ((VAR12.VAR15 > 0 || (!VAR12.VAR16 && VAR9)) && VAR10 >= 0 && (!FUN7(VAR2->VAR8) || !FUN8(VAR2) || (!VAR2->VAR17 && VAR2->VAR8->VAR8->VAR18 & VAR19)))
    {
        VAR9 = 0;
        FUN9(&VAR11);
        switch (VAR2->VAR8->VAR20)
        {
        case VAR21:
            VAR10 = FUN10(VAR2->VAR8, &VAR11, &VAR9, &VAR12);
            break;
        case VAR22:
            VAR10 = FUN11(VAR2->VAR8, &VAR11, &VAR9, &VAR12);
            break;
        default:
            break;
        }
        if (VAR10 >= 0)
        {
            if (VAR9)
                VAR2->VAR23->VAR24++;
            VAR12.VAR16 += VAR10;
            VAR12.VAR15 -= VAR10;
            VAR10 = VAR9;
        }
    }
    return VAR10;
}