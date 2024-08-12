int FUN1(const VAR1 *VAR2, size_t VAR3)
{
    const uint64_t VAR4 = VAR5;
    FuzzDataBuffer VAR6;
    const VAR1 *VAR7 = VAR2;
    const VAR1 *VAR8 = VAR2 + VAR3;
    uint32_t VAR9 = 0;
    if (!VAR10)
        VAR10 = FUN2(VAR11);
    VAR12 *VAR13 = FUN3(NULL);
    if (!VAR13)
        FUN4("");
    VAR13->VAR14 = 4096 * 4096;
    int VAR15 = FUN5(VAR13, VAR10, NULL);
    if (VAR15 < 0)
        return VAR15;
    FUN6(&VAR6);
    int VAR16;
    VAR17 *VAR18 = FUN7();
    if (!VAR18)
        FUN4("");
    AVPacket VAR19;
    while (VAR2 < VAR8 && VAR9 < VAR20)
    {
        while (VAR2 + sizeof(VAR4) < VAR8)
        {
            if (VAR2[0] == (VAR4 & 0xFF) && *(const VAR21 *)(VAR2) == VAR4)
                break;
            VAR2++;
        }
        if (VAR2 + sizeof(VAR4) > VAR8)
            VAR2 = VAR8;
        FUN8(&VAR6, &VAR19, VAR7, VAR2 - VAR7);
        VAR2 += sizeof(VAR4);
        VAR7 = VAR2;
        while (VAR19.VAR3 > 0 && VAR9++ < VAR20)
        {
            FUN9(VAR18);
            int VAR22 = FUN10(VAR13, VAR18, &VAR16, &VAR19);
            if (VAR9 > 20)
                VAR13->VAR23 = 0;
            if (VAR22 <= 0 || VAR22 > VAR19.VAR3)
                break;
            VAR19.VAR2 += VAR22;
            VAR19.VAR3 -= VAR22;
        }
    }
    FUN11(&VAR19);
    VAR19.VAR2 = NULL;
    VAR19.VAR3 = 0;
    do
    {
        VAR16 = 0;
        FUN10(VAR13, VAR18, &VAR16, &VAR19);
    } while (VAR16 == 1 && VAR9++ < VAR20);
    FUN12(&VAR18);
    FUN13(&VAR13);
    FUN14(&VAR13);
    FUN15(&VAR6);
    return 0;