int FUN1(VAR1 *VAR2, enum AVPacketSideDataType VAR3, VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8, *VAR9;
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR2->VAR11; VAR10++)
    {
        VAR8 = &VAR2->VAR12[VAR10];
        if (VAR8->VAR3 == VAR3)
        {
            FUN2(&VAR8->VAR5);
            VAR8->VAR5 = VAR5;
            VAR8->VAR6 = VAR6;
            return 0;
        }
    }
    VAR9 = FUN3(VAR2->VAR12, VAR2->VAR11 + 1, sizeof(*VAR9));
    if (!VAR9)
    {
        return FUN4(VAR13);
    }
    VAR2->VAR12 = VAR9;
    VAR2->VAR11++;
    VAR8 = &VAR2->VAR12[VAR2->VAR11 - 1];
    VAR8->VAR3 = VAR3;
    VAR8->VAR5 = VAR5;
    VAR8->VAR6 = VAR6;
    return 0;
}