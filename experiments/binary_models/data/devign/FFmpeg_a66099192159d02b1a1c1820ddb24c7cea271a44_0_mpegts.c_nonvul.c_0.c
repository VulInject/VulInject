static VAR1 FUN1(VAR2 *VAR3, int VAR4, VAR1 *VAR5, int64_t VAR6)
{
    VAR7 *VAR8 = VAR3->VAR9;
    int64_t VAR10;
    int VAR11 = VAR8->VAR12 % VAR8->VAR13;
    VAR10 = ((*VAR5 + VAR8->VAR13 - 1 - VAR11) / VAR8->VAR13) * VAR8->VAR13 + VAR11;
    FUN2(VAR3);
    if (FUN3(VAR3->VAR14, VAR10, VAR15) < 0)
        return VAR16;
    while (VAR10 < VAR6)
    {
        int VAR17;
        AVPacket VAR18;
        FUN4(&VAR18);
        VAR17 = FUN5(VAR3, &VAR18);
        if (VAR17 < 0)
            return VAR16;
        FUN6(&VAR18);
        if (VAR18.VAR19 != VAR16 && VAR18.VAR10 >= 0)
        {
            FUN7(VAR3, VAR18.VAR4);
            FUN8(VAR3->VAR20[VAR18.VAR4], VAR18.VAR10, VAR18.VAR19, 0, 0, VAR21);
            if (VAR18.VAR4 == VAR4 && VAR18.VAR10 >= *VAR5)
            {
                *VAR5 = VAR18.VAR10;
                return VAR18.VAR19;
            }
        }
        VAR10 = VAR18.VAR10;
    }
    return VAR16;
}