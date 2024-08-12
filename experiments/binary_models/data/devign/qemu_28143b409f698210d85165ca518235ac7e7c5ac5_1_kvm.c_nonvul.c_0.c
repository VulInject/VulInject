static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    struct VAR5 *VAR6 = VAR4->VAR7;
    int VAR8, VAR9;
    const VAR10 *VAR11, *VAR12, *VAR13;
    uint16_t VAR14, VAR15, VAR16;
    if (!VAR17)
    {
        return FUN2(VAR2);
    }
    VAR8 = FUN3(FUN4(VAR2), VAR18, VAR6);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    VAR14 = (VAR19)VAR6->VAR20[VAR21];
    VAR15 = (VAR19)(VAR6->VAR20[VAR21] >> 16);
    VAR16 = (VAR19)VAR6->VAR20[VAR22];
    VAR4->VAR23 = (VAR19)(VAR6->VAR20[VAR22] >> 16);
    VAR4->VAR24 = (VAR15 >> 11) & 7;
    VAR4->VAR25 = VAR15;
    VAR4->VAR26 = VAR14;
    for (VAR9 = 0; VAR9 < 8; ++VAR9)
    {
        VAR4->VAR27[VAR9] = !((VAR16 >> VAR9) & 1);
    }
    memcpy(&VAR4->VAR28, &VAR6->VAR20[VAR29], sizeof(VAR4->VAR28));
    memcpy(&VAR4->VAR30, &VAR6->VAR20[VAR31], sizeof(VAR4->VAR30));
    VAR4->VAR32 = VAR6->VAR20[VAR33];
    memcpy(VAR4->VAR34, &VAR6->VAR20[VAR35], sizeof VAR4->VAR34);
    VAR4->VAR36 = *(VAR37 *)&VAR6->VAR20[VAR38];
    memcpy(VAR4->VAR39, &VAR6->VAR20[VAR40], sizeof VAR4->VAR39);
    memcpy(&VAR4->VAR41, &VAR6->VAR20[VAR42], sizeof(VAR4->VAR41));
    memcpy(VAR4->VAR43, &VAR6->VAR20[VAR44], sizeof VAR4->VAR43);
    VAR11 = (const VAR10 *)&VAR6->VAR20[VAR45];
    VAR12 = (const VAR10 *)&VAR6->VAR20[VAR46];
    VAR13 = (const VAR10 *)&VAR6->VAR20[VAR47];
    for (VAR9 = 0; VAR9 < VAR48; VAR9++, VAR11 += 16, VAR12 += 16, VAR13 += 32)
    {
        VAR4->VAR49[VAR9].FUN5(0) = FUN6(VAR11);
        VAR4->VAR49[VAR9].FUN5(1) = FUN6(VAR11 + 8);
        VAR4->VAR49[VAR9].FUN5(2) = FUN6(VAR12);
        VAR4->VAR49[VAR9].FUN5(3) = FUN6(VAR12 + 8);
        VAR4->VAR49[VAR9].FUN5(4) = FUN6(VAR13);
        VAR4->VAR49[VAR9].FUN5(5) = FUN6(VAR13 + 8);
        VAR4->VAR49[VAR9].FUN5(6) = FUN6(VAR13 + 16);
        VAR4->VAR49[VAR9].FUN5(7) = FUN6(VAR13 + 24);
    }
    memcpy(&VAR4->VAR49[16], &VAR6->VAR20[VAR50], 16 * sizeof VAR4->VAR49[16]);
    return 0;
}