void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    for (VAR3 = 0; VAR3 < 256; VAR3++)
    {
        VAR5 = 0;
        for (VAR4 = 0; VAR4 < 8; VAR4++)
        {
            VAR5 |= ((VAR3 >> VAR4) & 1) << (VAR4 * 4);
        }
        VAR7[VAR3] = VAR5;
        VAR5 = 0;
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            VAR5 |= ((VAR3 >> (2 * VAR4)) & 3) << (VAR4 * 4);
        }
        VAR8[VAR3] = VAR5;
    }
    for (VAR3 = 0; VAR3 < 16; VAR3++)
    {
        VAR5 = 0;
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            VAR6 = ((VAR3 >> VAR4) & 1);
            VAR5 |= VAR6 << (2 * VAR4);
            VAR5 |= VAR6 << (2 * VAR4 + 1);
        }
        VAR9[VAR3] = VAR5;
    }
    VAR2->VAR10 = 1024 * 1024;
    while (VAR2->VAR10 < (VAR2->VAR11 << 20) && VAR2->VAR10 < (256 << 20))
    {
        VAR2->VAR10 <<= 1;
    }
    VAR2->VAR11 = VAR2->VAR10 >> 20;
    VAR2->VAR12 = 1;
    FUN2(&VAR2->VAR13, "", VAR2->VAR10);
    FUN3(&VAR2->VAR13);
    FUN4(&VAR2->VAR13);
    VAR2->VAR14 = FUN5(&VAR2->VAR13);
    VAR2->VAR15 = VAR16;
    VAR2->VAR17 = VAR18;
    VAR2->VAR19 = VAR20;
    VAR2->update = VAR21;
    VAR2->VAR22 = VAR23;
    VAR2->VAR24 = VAR25;
    switch (VAR26)
    {
    case VAR27:
        VAR2->VAR28 = VAR29;
        VAR2->VAR30 = VAR31;
        break;
    case VAR32:
        VAR2->VAR28 = VAR33;
        VAR2->VAR30 = VAR34;
        break;
    }
    FUN6(VAR2);
}