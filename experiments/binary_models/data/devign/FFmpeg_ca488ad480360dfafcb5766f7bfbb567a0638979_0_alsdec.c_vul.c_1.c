static int FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4, const unsigned int *VAR5, unsigned int *VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR8;
    unsigned int VAR9 = 0;
    unsigned int VAR10;
    ALSBlockData VAR11[2] = {{0}};
    VAR11[0].VAR12 = VAR3;
    VAR11[0].VAR13 = VAR2->VAR13;
    VAR11[0].VAR14 = VAR2->VAR14;
    VAR11[0].VAR15 = VAR2->VAR15;
    VAR11[0].VAR16 = VAR2->VAR16;
    VAR11[0].VAR17 = VAR2->VAR17;
    VAR11[0].VAR18 = VAR2->VAR18;
    VAR11[0].VAR19 = VAR2->VAR19[0];
    VAR11[0].VAR20 = VAR2->VAR20[0];
    VAR11[0].VAR21 = VAR2->VAR21[0];
    VAR11[0].VAR22 = VAR2->VAR22;
    VAR11[0].VAR6 = *VAR6;
    VAR11[1].VAR12 = VAR3;
    VAR11[1].VAR13 = VAR2->VAR13;
    VAR11[1].VAR14 = VAR2->VAR14;
    VAR11[1].VAR15 = VAR2->VAR15;
    VAR11[1].VAR16 = VAR2->VAR16;
    VAR11[1].VAR17 = VAR2->VAR17;
    VAR11[1].VAR18 = VAR2->VAR18;
    VAR11[1].VAR19 = VAR2->VAR19[0];
    VAR11[1].VAR20 = VAR2->VAR20[0];
    VAR11[1].VAR21 = VAR2->VAR21[0];
    VAR11[1].VAR22 = VAR2->VAR22;
    VAR11[1].VAR6 = *(VAR6 + 1);
    for (VAR10 = 0; VAR10 < VAR2->VAR23; VAR10++)
    {
        unsigned int VAR24;
        VAR11[0].VAR25 = VAR5[VAR10];
        VAR11[1].VAR25 = VAR5[VAR10];
        VAR11[0].VAR26 = VAR2->VAR26[VAR4] + VAR9;
        VAR11[1].VAR26 = VAR2->VAR26[VAR4 + 1] + VAR9;
        VAR11[0].VAR27 = VAR11[1].VAR26;
        VAR11[1].VAR27 = VAR11[0].VAR26;
        if (FUN2(VAR2, &VAR11[0]) || FUN2(VAR2, &VAR11[1]))
        {
            FUN3(VAR10, VAR2->VAR23, VAR5, VAR11[0].VAR26);
            FUN3(VAR10, VAR2->VAR23, VAR5, VAR11[1].VAR26);
            return -1;
        }
        if (VAR11[0].VAR6)
        {
            if (VAR11[1].VAR6)
                FUN4(VAR2->VAR28, VAR29, "");
            for (VAR24 = 0; VAR24 < VAR5[VAR10]; VAR24++)
                VAR11[0].VAR26[VAR24] = VAR11[1].VAR26[VAR24] - VAR11[0].VAR26[VAR24];
        }
        else if (VAR11[1].VAR6)
        {
            for (VAR24 = 0; VAR24 < VAR5[VAR10]; VAR24++)
                VAR11[1].VAR26[VAR24] = VAR11[1].VAR26[VAR24] + VAR11[0].VAR26[VAR24];
        }
        VAR9 += VAR5[VAR10];
        VAR11[0].VAR12 = 0;
        VAR11[1].VAR12 = 0;
    }
    memmove(VAR2->VAR26[VAR4] - VAR8->VAR30, VAR2->VAR26[VAR4] - VAR8->VAR30 + VAR8->VAR31, sizeof(*VAR2->VAR26[VAR4]) * VAR8->VAR30);
    return 0;
}