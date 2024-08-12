static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8 = VAR6->VAR9 * VAR10;
    int VAR11 = (VAR6->VAR12 - VAR7) * VAR13;
    uint8_t VAR14, VAR15 = 0;
    int VAR16;
    VAR17 *VAR18 = VAR6->VAR19 + (VAR7 * VAR6->VAR9);
    VAR17 *VAR20 = VAR6->VAR19 + (VAR6->VAR12 * VAR6->VAR9);
    for (; VAR18 < VAR20; VAR18++)
    {
        if (VAR18->VAR21 != VAR22)
        {
            VAR15 = VAR23;
            break;
        }
    }
    if (VAR15 == 0)
    {
        FUN2(VAR2, VAR24, "", VAR6->VAR25);
        VAR4->VAR26 = VAR27;
        return 0;
    }
    if ((VAR16 = FUN3(&VAR4->VAR28, VAR29, VAR8, VAR11)) < 0)
        return VAR16;
    VAR4->VAR28.VAR30[1] = NULL;
    FUN4(VAR6, VAR31, VAR4->VAR28.VAR30[0], VAR4->VAR28.VAR32[0], 0, VAR7, VAR6->VAR9, VAR6->VAR12 - VAR7, 1, 1);
    FUN5(VAR2, VAR4, VAR6, VAR7, VAR15, VAR8, VAR11);
    VAR4->VAR33 = VAR2->VAR34;
    VAR4->VAR35 = VAR2->VAR36 + VAR7 * VAR13;
    VAR4->VAR37 = VAR8;
    VAR4->VAR38 = VAR11;
    VAR4->VAR39 = (int)VAR15 + 1;
    VAR4->VAR28.VAR30[1] = FUN6(VAR40);
    if (!VAR4->VAR28.VAR30[1])
    {
        FUN7(&VAR4->VAR28.VAR30[0]);
        return FUN8(VAR41);
    }
    for (VAR14 = 0; VAR14 < VAR15; VAR14++)
    {
        int VAR42, VAR43, VAR44, VAR45;
        VAR42 = FUN9(VAR6->VAR46[VAR14]);
        VAR43 = FUN10(VAR6->VAR46[VAR14]);
        VAR44 = FUN11(VAR6->VAR46[VAR14]);
        VAR45 = FUN12(VAR6->VAR46[VAR14]);
        ((VAR47 *)VAR4->VAR28.VAR30[1])[VAR14] = FUN13(VAR42, VAR43, VAR44, VAR45);
        FUN14(VAR2, "", ((VAR47 *)VAR4->VAR28.VAR30[1])[VAR14]);
    }
    ((VAR47 *)VAR4->VAR28.VAR30[1])[VAR15] = FUN13(0, 0, 0, 0);
    VAR4->VAR26 = VAR48;
    return 0;
}