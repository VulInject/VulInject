static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8[VAR3];
    VAR9 *VAR10 = VAR2->VAR11;
    AVPacket VAR12, *VAR13 = &VAR12;
    int VAR14;
    int VAR15 = FUN2(VAR7, FUN3(VAR4 - VAR16, 0), VAR5);
    uint32_t VAR17;
    if (VAR15 >= 0)
    {
        VAR10->VAR18 = VAR7->VAR19[VAR15].VAR20;
        return 0;
    }
    if (VAR4 < 0 || VAR4 >= VAR10->VAR21)
        return -1;
    VAR4 -= VAR16;
    VAR17 = VAR10->VAR18;
    if (VAR10->VAR22)
        VAR10->VAR18 = VAR10->VAR22 - 1;
    while (VAR10->VAR18 < VAR4)
    {
        VAR14 = FUN4(VAR2, VAR13);
        if (VAR14 < 0)
        {
            VAR10->VAR18 = VAR17;
            return VAR14;
        }
        FUN5(VAR13);
    }
    return 0;
}