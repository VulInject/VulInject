static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    MPEG4AudioConfig VAR6;
    int VAR7;
    if ((VAR2->VAR8 < 2) || (VAR2->VAR9 == NULL))
    {
        FUN2(VAR2, VAR10, "");
        return -1;
    }
    FUN3(&VAR6, VAR2->VAR9, VAR2->VAR8);
    if (!VAR6.VAR11 || VAR6.VAR11 > 7)
    {
        FUN2(VAR2, VAR10, "");
        return -1;
    }
    VAR4->VAR12 = VAR13[VAR6.VAR11];
    VAR4->VAR14 = VAR15[VAR6.VAR11];
    VAR2->VAR16 = VAR17[VAR6.VAR11];
    VAR2->VAR18 = VAR19[VAR6.VAR11];
    if (VAR6.VAR20 < 16000)
        VAR4->VAR21 = 0xffe00000;
    else
        VAR4->VAR21 = 0xfff00000;
    VAR4->VAR22[0] = FUN4(sizeof(VAR23));
    VAR2->VAR5 = VAR4->VAR22[0];
    FUN5(VAR2);
    VAR2->VAR5 = VAR4;
    VAR4->VAR22[0]->VAR24 = 1;
    for (VAR7 = 1; VAR7 < VAR4->VAR12; VAR7++)
    {
        VAR4->VAR22[VAR7] = FUN4(sizeof(VAR23));
        if (!VAR4->VAR22[VAR7])
            VAR4->VAR22[VAR7]->VAR24 = 1;
        VAR4->VAR22[VAR7]->VAR2 = VAR2;
        VAR4->VAR22[VAR7]->VAR25 = VAR4->VAR22[0]->VAR25;
    }
    if (VAR4->VAR12 > 1)
    {
        VAR4->VAR26 = FUN6(VAR27 * VAR28 * sizeof(*VAR4->VAR26));
        if (!VAR4->VAR26)
    }
    return 0;
VAR29:
    FUN7(VAR2);
    return FUN8(VAR30);