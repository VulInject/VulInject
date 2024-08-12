void FUN1(VAR1 *VAR2, const char *VAR3, uint16_t VAR4, size_t VAR5)
{
    VAR6 *VAR7 = FUN2(FUN3(VAR2));
    VAR8 *VAR9 = FUN4(VAR7);
    int VAR10;
    int VAR11 = VAR9->VAR12 ? VAR9->FUN5(VAR7->VAR13) : 0;
    if (VAR11)
    {
        VAR2->VAR14 = FUN6(sizeof(*VAR2->VAR14) * VAR11);
    }
    VAR2->VAR4 = VAR4;
    VAR2->VAR15 = 0;
    VAR2->VAR16 = 0;
    VAR2->VAR17 = 0;
    VAR2->VAR18 = VAR19;
    VAR2->VAR20 = FUN6(sizeof(VAR21) * VAR22);
    VAR2->VAR23 = FUN7();
    for (VAR10 = 0; VAR10 < VAR22; VAR10++)
    {
        VAR2->VAR20[VAR10].VAR24 = VAR19;
        VAR2->VAR20[VAR10].VAR2 = VAR2;
        VAR2->VAR20[VAR10].VAR25 = VAR10;
    }
    VAR2->VAR3 = VAR3;
    VAR2->VAR26 = VAR5;
    if (VAR2->VAR26)
    {
        VAR2->VAR27 = FUN6(VAR5);
    }
    else
    {
        VAR2->VAR27 = NULL;
    }
    VAR2->VAR28 = FUN8(VAR29, VAR2);
    VAR2->VAR30 = FUN9();
    VAR2->VAR31 = true;