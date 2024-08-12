void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7;
    for (VAR4 = 0; VAR4 < 256; VAR4++)
    {
        VAR6 = 0;
        for (VAR5 = 0; VAR5 < 8; VAR5++)
        {
            VAR6 |= ((VAR4 >> VAR5) & 1) << (VAR5 * 4);
        }
        VAR8[VAR4] = VAR6;
        VAR6 = 0;
        for (VAR5 = 0; VAR5 < 4; VAR5++)
        {
            VAR6 |= ((VAR4 >> (2 * VAR5)) & 3) << (VAR5 * 4);
        }
        VAR9[VAR4] = VAR6;
    }
    for (VAR4 = 0; VAR4 < 16; VAR4++)
    {
        VAR6 = 0;
        for (VAR5 = 0; VAR5 < 4; VAR5++)
        {
            VAR7 = ((VAR4 >> VAR5) & 1);
            VAR6 |= VAR7 << (2 * VAR5);
            VAR6 |= VAR7 << (2 * VAR5 + 1);
        }
        VAR10[VAR4] = VAR6;
    }
    VAR2->VAR11 = 1;
    VAR2->VAR11 = 0;
    VAR2->VAR12 = FUN2(VAR3);
    VAR2->VAR13 = FUN3(VAR2->VAR12);
    VAR2->VAR14 = VAR3;
    VAR2->VAR15 = VAR16;
    VAR2->VAR17 = VAR18;
    VAR2->VAR19 = VAR20;
    VAR2->update = VAR21;
    VAR2->VAR22 = VAR23;
    VAR2->VAR24 = VAR25;
    VAR2->VAR26 = VAR27;
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
}