void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    for (VAR6 = 0; VAR6 < 256; VAR6++)
    {
        VAR8 = 0;
        for (VAR7 = 0; VAR7 < 8; VAR7++)
        {
            VAR8 |= ((VAR6 >> VAR7) & 1) << (VAR7 * 4);
        }
        VAR10[VAR6] = VAR8;
        VAR8 = 0;
        for (VAR7 = 0; VAR7 < 4; VAR7++)
        {
            VAR8 |= ((VAR6 >> (2 * VAR7)) & 3) << (VAR7 * 4);
        }
        VAR11[VAR6] = VAR8;
    }
    for (VAR6 = 0; VAR6 < 16; VAR6++)
    {
        VAR8 = 0;
        for (VAR7 = 0; VAR7 < 4; VAR7++)
        {
            VAR9 = ((VAR6 >> VAR7) & 1);
            VAR8 |= VAR9 << (2 * VAR7);
            VAR8 |= VAR9 << (2 * VAR7 + 1);
        }
        VAR12[VAR6] = VAR8;
    }
    VAR2->VAR13 = FUN2(VAR2->VAR13, 1, 512);
    VAR2->VAR13 = FUN3(VAR2->VAR13);
    VAR2->VAR14 = VAR2->VAR13 << 20;
    if (!VAR2->VAR15)
    {
        VAR2->VAR15 = VAR2->VAR14;
    }
    VAR2->VAR16 = 1;
    FUN4(&VAR2->VAR17, VAR4, "", VAR2->VAR14, &VAR18);
    FUN5(&VAR2->VAR17, VAR5 ? NULL : FUN6(VAR4));
    FUN7(&VAR2->VAR17);
    VAR2->VAR19 = FUN8(&VAR2->VAR17);
    VAR2->VAR20 = VAR21;
    VAR2->VAR22 = VAR23;
    VAR2->VAR24 = VAR25;
    VAR2->VAR26 = &VAR27;
    switch (VAR28)
    {
    case VAR29:
        VAR2->VAR30 = VAR31;
        VAR2->VAR32 = VAR33;
        break;
    case VAR34:
        VAR2->VAR30 = VAR35;
        VAR2->VAR32 = VAR36;
        break;
    }
    VAR2->VAR37 = true;
    VAR2->VAR37 = false;
    FUN9(VAR2);
}