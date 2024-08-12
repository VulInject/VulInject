void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, ram_addr_t VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11, VAR12;
    for (VAR9 = 0; VAR9 < 256; VAR9++)
    {
        VAR11 = 0;
        for (VAR10 = 0; VAR10 < 8; VAR10++)
        {
            VAR11 |= ((VAR9 >> VAR10) & 1) << (VAR10 * 4);
        }
        VAR13[VAR9] = VAR11;
        VAR11 = 0;
        for (VAR10 = 0; VAR10 < 4; VAR10++)
        {
            VAR11 |= ((VAR9 >> (2 * VAR10)) & 3) << (VAR10 * 4);
        }
        VAR14[VAR9] = VAR11;
    }
    for (VAR9 = 0; VAR9 < 16; VAR9++)
    {
        VAR11 = 0;
        for (VAR10 = 0; VAR10 < 4; VAR10++)
        {
            VAR12 = ((VAR9 >> VAR10) & 1);
            VAR11 |= VAR12 << (2 * VAR10);
            VAR11 |= VAR12 << (2 * VAR10 + 1);
        }
        VAR15[VAR9] = VAR11;
    }
    FUN2(VAR2);
    VAR2->VAR16 = VAR6;
    VAR2->VAR17 = VAR7;
    VAR2->VAR18 = VAR8;
    VAR2->VAR4 = VAR4;
    VAR2->VAR19 = VAR20;
    VAR2->VAR21 = VAR22;
    VAR2->VAR23 = VAR24;
    VAR2->update = VAR25;
    VAR2->VAR26 = VAR27;
    VAR2->VAR28 = VAR29;
    VAR2->VAR30 = VAR31;
    switch (VAR32)
    {
    case VAR33:
        VAR2->VAR34 = VAR35;
        VAR2->VAR36 = VAR37;
        break;
    case VAR38:
        VAR2->VAR34 = VAR39;
        VAR2->VAR36 = VAR40;
        memset(&VAR2->VAR41, 0, sizeof(VAR2->VAR41));
        break;
    }
}