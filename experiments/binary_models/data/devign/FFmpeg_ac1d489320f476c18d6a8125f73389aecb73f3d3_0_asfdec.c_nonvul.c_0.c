static VAR1 FUN1(VAR2 *VAR3, int VAR4, VAR1 *VAR5, int64_t VAR6)
{
    AVPacket VAR7, *VAR8 = &VAR7;
    VAR9 *VAR10;
    int64_t VAR11;
    int64_t VAR12 = *VAR5;
    int VAR13;
    int64_t VAR14[VAR15];
    for (VAR13 = 0; VAR13 < VAR3->VAR16; VAR13++)
    {
        VAR14[VAR13] = VAR12;
    }
    if (VAR3->VAR17 > 0)
        VAR12 = (VAR12 + VAR3->VAR17 - 1 - VAR3->VAR18) / VAR3->VAR17 * VAR3->VAR17 + VAR3->VAR18;
    *VAR5 = VAR12;
    if (FUN2(VAR3->VAR19, VAR12, VAR20) < 0)
        return VAR21;
    FUN3(VAR3);
    for (;;)
    {
        if (FUN4(VAR3, VAR8) < 0)
        {
            FUN5(VAR3, VAR22, "");
            return VAR21;
        }
        VAR11 = VAR8->VAR11;
        FUN6(VAR8);
        if (VAR8->VAR23 & VAR24)
        {
            VAR13 = VAR8->VAR4;
            VAR10 = VAR3->VAR25[VAR13]->VAR26;
            VAR12 = VAR10->VAR27;
            FUN7(VAR3->VAR25[VAR13], VAR12, VAR11, VAR8->VAR28, VAR12 - VAR14[VAR13] + 1, VAR29);
            VAR14[VAR13] = VAR10->VAR27 + 1;
            if (VAR8->VAR4 == VAR4)
                break;
        }
    }
    *VAR5 = VAR12;
    return VAR11;
}