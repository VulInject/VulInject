static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6;
    const int VAR7 = VAR2->VAR7;
    VAR6 = FUN2(VAR2);
    if (VAR6 < 0)
        return VAR6;
    VAR4 = VAR2->VAR8;
    VAR4->VAR9 = VAR2->VAR10 ? 0 : VAR2->VAR11;
    VAR4->VAR12->VAR13 = VAR2->VAR13++;
    VAR4->VAR14 = VAR2->VAR11 != VAR15;
    VAR4->VAR16 = VAR2->VAR17.VAR16;
    VAR4->VAR12->VAR18 = 0;
    VAR4->VAR19 = 0;
    VAR4->VAR20 = 0;
    if (VAR21 && VAR2->VAR22)
        FUN3(&VAR2->VAR23[0].VAR24);
    for (VAR5 = 0; VAR5 < 16; VAR5++)
    {
        VAR2->VAR25[VAR5] = (4 * ((VAR26[VAR5] - VAR26[0]) & 7) << VAR7) + 4 * VAR4->VAR12->VAR27[0] * ((VAR26[VAR5] - VAR26[0]) >> 3);
        VAR2->VAR25[48 + VAR5] = (4 * ((VAR26[VAR5] - VAR26[0]) & 7) << VAR7) + 8 * VAR4->VAR12->VAR27[0] * ((VAR26[VAR5] - VAR26[0]) >> 3);
    }
    for (VAR5 = 0; VAR5 < 16; VAR5++)
    {
        VAR2->VAR25[16 + VAR5] = VAR2->VAR25[32 + VAR5] = (4 * ((VAR26[VAR5] - VAR26[0]) & 7) << VAR7) + 4 * VAR4->VAR12->VAR27[1] * ((VAR26[VAR5] - VAR26[0]) >> 3);
        VAR2->VAR25[48 + 16 + VAR5] = VAR2->VAR25[48 + 32 + VAR5] = (4 * ((VAR26[VAR5] - VAR26[0]) & 7) << VAR7) + 8 * VAR4->VAR12->VAR27[1] * ((VAR26[VAR5] - VAR26[0]) >> 3);
    }
    memset(VAR2->VAR28, -1, (VAR2->VAR29 * VAR2->VAR30 - 1) * sizeof(*VAR2->VAR28));
    VAR2->VAR8->VAR9 = 0;
    VAR2->VAR8->VAR31[0] = VAR2->VAR8->VAR31[1] = VAR32;
    VAR2->VAR33 = NULL;
    assert(VAR2->VAR8->VAR34 == 0);
    return 0;
}