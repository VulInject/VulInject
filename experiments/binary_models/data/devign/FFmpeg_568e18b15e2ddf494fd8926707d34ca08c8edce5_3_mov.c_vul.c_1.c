static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9[VAR2->VAR8->VAR10 - 1];
    int VAR11, VAR12;
    int64_t VAR13 = 0;
    int64_t VAR14 = 0;
    FUN2("", VAR5);
    FUN3(VAR4);
    FUN3(VAR4);
    FUN3(VAR4);
    FUN3(VAR4);
    VAR11 = FUN4(VAR4);
    VAR2->VAR9[VAR2->VAR8->VAR10 - 1]->VAR15 = VAR11;
    VAR2->VAR9[VAR2->VAR8->VAR10 - 1]->VAR16 = (VAR17 *)FUN5(VAR11 * sizeof(VAR17));
    FUN6(NULL, VAR18, "", VAR2->VAR8->VAR10 - 1, VAR11);
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        int32_t VAR19;
        int32_t VAR20;
        VAR20 = FUN4(VAR4);
        VAR19 = FUN4(VAR4);
        VAR2->VAR9[VAR2->VAR8->VAR10 - 1]->VAR16[VAR12] = (VAR17)VAR20 << 32 | (VAR17)VAR19;
        FUN6(NULL, VAR18, "", VAR20, VAR19);
        VAR13 += VAR19 * VAR20;
        VAR14 += VAR20;
        if (!VAR12 && VAR7->VAR21.VAR22 == VAR23)
        {
            VAR7->VAR21.VAR24 = VAR19 ? VAR19 : 1;
            VAR7->VAR21.VAR25 = VAR2->VAR9[VAR2->VAR8->VAR10 - 1]->VAR26;
            FUN6(NULL, VAR18, "", VAR7->VAR21.VAR25, VAR19);
        }
    }
    if (VAR13 > 0)
    {
        FUN7(&VAR7->VAR21.VAR25, &VAR7->VAR21.VAR24, VAR2->VAR9[VAR2->VAR8->VAR10 - 1]->VAR26 * VAR14, VAR13, VAR27);
        FUN6(NULL, VAR18, "", (float)VAR7->VAR21.VAR25 / VAR7->VAR21.VAR24, VAR14, VAR13, VAR2->VAR9[VAR2->VAR8->VAR10 - 1]->VAR26);
    }
    else
    {
        VAR7->VAR21.VAR24 = 1;
        VAR7->VAR21.VAR25 = VAR2->VAR9[VAR2->VAR8->VAR10 - 1]->VAR26;
    }
    return 0;
}