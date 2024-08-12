static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    struct VAR5 *VAR6 = VAR4->VAR7;
    uint16_t VAR8, VAR9, VAR10;
    VAR11 *VAR12;
    int VAR13, VAR14;
    if (!FUN2())
    {
        return FUN3(VAR2);
    }
    memset(VAR6, 0, sizeof(struct VAR5));
    VAR10 = 0;
    VAR9 = VAR4->VAR15 & ~(7 << 11);
    VAR9 |= (VAR4->VAR16 & 7) << 11;
    VAR8 = VAR4->VAR17;
    for (VAR13 = 0; VAR13 < 8; ++VAR13)
    {
        VAR10 |= (!VAR4->VAR18[VAR13]) << VAR13;
    }
    VAR6->VAR19[VAR20] = (VAR21)(VAR9 << 16) + VAR8;
    VAR6->VAR19[VAR22] = (VAR21)(VAR4->VAR23 << 16) + VAR10;
    memcpy(&VAR6->VAR19[VAR24], &VAR4->VAR25, sizeof(VAR4->VAR25));
    memcpy(&VAR6->VAR19[VAR26], &VAR4->VAR27, sizeof(VAR4->VAR27));
    memcpy(&VAR6->VAR19[VAR28], VAR4->VAR29, sizeof VAR4->VAR29);
    VAR6->VAR19[VAR30] = VAR4->VAR31;
    *(VAR32 *)&VAR6->VAR19[VAR33] = VAR4->VAR34;
    memcpy(&VAR6->VAR19[VAR35], VAR4->VAR36, sizeof VAR4->VAR36);
    memcpy(&VAR6->VAR19[VAR37], VAR4->VAR38, sizeof VAR4->VAR38);
    memcpy(&VAR6->VAR19[VAR39], &VAR4->VAR40, sizeof(VAR4->VAR40));
    memcpy(&VAR6->VAR19[VAR41], VAR4->VAR42, sizeof VAR4->VAR42);
    memcpy(&VAR6->VAR19[VAR43], VAR4->VAR44, sizeof VAR4->VAR44);
    VAR12 = (VAR11 *)&VAR6->VAR19[VAR45];
    for (VAR13 = 0; VAR13 < VAR46; VAR13++, VAR12 += 16)
    {
        FUN4(VAR12, VAR4->VAR47[VAR13].FUN5(0));
        FUN4(VAR12 + 8, VAR4->VAR47[VAR13].FUN5(1));
    }
    memcpy(&VAR6->VAR19[VAR48], VAR4->VAR49, sizeof VAR4->VAR49);
    VAR14 = FUN6(FUN7(VAR2), VAR50, VAR6);
    return VAR14;
}