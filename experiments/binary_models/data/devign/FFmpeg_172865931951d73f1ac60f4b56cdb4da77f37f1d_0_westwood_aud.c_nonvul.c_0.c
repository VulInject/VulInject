static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    unsigned char VAR7[VAR8];
    unsigned int VAR9;
    int VAR10 = 0;
    VAR11 *VAR12 = VAR2->VAR13[0];
    if (FUN2(VAR6, VAR7, VAR8) != VAR8)
        return FUN3(VAR14);
    if (FUN4(&VAR7[4]) != VAR15)
        return VAR16;
    VAR9 = FUN5(&VAR7[0]);
    if (VAR12->VAR17->VAR18 == VAR19)
    {
        int VAR20 = FUN5(&VAR7[2]);
        if ((VAR10 = FUN6(VAR4, VAR9 + 4)) < 0)
            return VAR10;
        if ((VAR10 = FUN2(VAR6, &VAR4->VAR21[4], VAR9)) != VAR9)
            return VAR10 < 0 ? VAR10 : FUN3(VAR14);
        FUN7(&VAR4->VAR21[0], VAR20);
        FUN7(&VAR4->VAR21[2], VAR9);
        VAR4->VAR22 = VAR20;
    }
    else
    {
        VAR10 = FUN8(VAR6, VAR4, VAR9);
        if (VAR10 != VAR9)
            return FUN3(VAR14);
        VAR4->VAR22 = (VAR9 * 2) / VAR12->VAR17->VAR23;
    }
    VAR4->VAR24 = VAR12->VAR25;
    return VAR10;
}