static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *const VAR5 = &VAR2->VAR5;
    VAR6 *const VAR7 = VAR5->VAR7;
    VAR1 *VAR8;
    int VAR9;
    if (VAR5->VAR7->VAR10 || VAR5->VAR7->VAR11->VAR12 & VAR13)
        return 0;
    if (VAR3 == 1)
    {
        return FUN2(VAR7, &VAR2);
    }
    else
    {
        for (VAR9 = 1; VAR9 < VAR3; VAR9++)
        {
            VAR8 = VAR2->VAR14[VAR9];
            VAR8->VAR5.VAR15 = VAR7->VAR15;
            VAR8->VAR5.VAR16 = 0;
            VAR8->VAR17 = VAR2->VAR17;
        }
        VAR7->FUN3(VAR7, VAR18, VAR2->VAR14, NULL, VAR3, sizeof(void *));
        VAR8 = VAR2->VAR14[VAR3 - 1];
        VAR5->VAR19 = VAR8->VAR5.VAR19;
        VAR5->VAR20 = VAR8->VAR5.VAR20;
        VAR5->VAR21 = VAR8->VAR5.VAR21;
        VAR5->VAR22 = VAR8->VAR5.VAR22;
        for (VAR9 = 1; VAR9 < VAR3; VAR9++)
            VAR2->VAR5.VAR16 += VAR2->VAR14[VAR9]->VAR5.VAR16;
    }
    return 0;