static int FUN1(VAR1 *VAR2)
{
    const VAR3 *VAR4, *VAR5;
    uint32_t VAR6 = -1;
    int VAR7[4 * 16] = {0};
    int VAR8 = 0, VAR9 = 0;
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    int64_t VAR15 = 0;
    uint8_t VAR16[VAR17 + VAR18] = {0};
    for (VAR12 = FUN2(4096, VAR2->VAR19); VAR12 < VAR2->VAR19 - 2; VAR12 += 2)
    {
        int VAR20, VAR21, VAR22, VAR23;
        DCACoreFrameHeader VAR24;
        GetBitContext VAR25;
        VAR5 = VAR4 = VAR2->VAR4 + VAR12;
        VAR6 = (VAR6 << 16) | FUN3(&VAR5);
        if (VAR12 >= 4)
            VAR15 += FUN4(((VAR26)FUN5(VAR4)) - (VAR26)FUN5(VAR4 - 4));
        if (VAR6 == VAR27)
        {
            if (VAR12 < VAR9)
                continue;
            FUN6(&VAR25, VAR4 - 2, 96);
            FUN7(&VAR25, 42);
            VAR21 = FUN8(&VAR25);
            VAR22 = FUN9(&VAR25, 8 + 4 * VAR21) + 1;
            VAR23 = FUN9(&VAR25, 16 + 4 * VAR21) + 1;
            if (VAR22 & 3 || VAR23 & 3)
                continue;
            if (VAR22 < 16 || VAR23 < VAR22)
                continue;
            if (VAR12 - 2 + VAR22 > VAR2->VAR19)
                continue;
            if (FUN10(FUN11(VAR28), 0xffff, VAR4 + 3, VAR22 - 5))
                continue;
            if (VAR12 == VAR9)
                VAR8++;
            else
                VAR8 = FUN12(1, VAR8 - 1);
            VAR9 = VAR12 + VAR23;
            continue;
        }
        if (VAR6 == VAR29 && (FUN3(&VAR5) & 0xFC00) == 0xFC00)
            VAR20 = 0;
        else if (VAR6 == VAR30 && (FUN3(&VAR5) & 0x00FC) == 0x00FC)
            VAR20 = 1;
        else if (VAR6 == VAR31 && (FUN3(&VAR5) & 0xFFF0) == 0x07F0)
            VAR20 = 2;
        else if (VAR6 == VAR32 && (FUN3(&VAR5) & 0xF0FF) == 0xF007)
            VAR20 = 3;
        else
            continue;
        if ((VAR13 = FUN13(VAR4 - 2, VAR17, VAR16, VAR17)) < 0)
            continue;
        if (FUN14(&VAR25, VAR16, VAR13) < 0)
            continue;
        if (FUN15(&VAR25, &VAR24) < 0)
            continue;
        VAR20 += 4 * VAR24.VAR33;
        VAR7[VAR20]++;
    }
    if (VAR8 > 3)
        return VAR34 + 1;
    VAR10 = VAR11 = 0;
    for (VAR14 = 0; VAR14 < FUN16(VAR7); VAR14++)
    {
        VAR10 += VAR7[VAR14];
        if (VAR7[VAR11] < VAR7[VAR14])
            VAR11 = VAR14;
    }
    if (VAR7[VAR11] > 3 && VAR2->VAR19 / VAR7[VAR11] < 32 * 1024 && VAR7[VAR11] * 4 > VAR10 * 3 && VAR15 / VAR2->VAR19 > 200)
        return VAR34 + 1;
    return 0;
}