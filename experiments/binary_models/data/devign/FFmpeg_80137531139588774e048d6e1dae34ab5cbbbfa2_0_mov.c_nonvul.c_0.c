static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10;
    int64_t VAR11;
    if (VAR2->VAR12->VAR13 < 1 || VAR2->VAR14)
        return 0;
    VAR7 = VAR2->VAR12->VAR15[VAR2->VAR12->VAR13 - 1]->VAR16;
    VAR10 = FUN2(VAR4);
    FUN3(VAR4);
    VAR9 = FUN4(VAR4);
    VAR5.VAR17 -= 8;
    VAR11 = VAR10 == 1 ? 20 : 12;
    if (VAR5.VAR17 != VAR9 * VAR11)
    {
        if (VAR2->VAR12->VAR18 >= VAR19)
        {
            FUN5(VAR2->VAR12, VAR20, "" VAR21 "", VAR9, VAR5.VAR17 + 8);
            return VAR22;
        }
        else
        {
            VAR9 = VAR5.VAR17 / VAR11;
            if (VAR9 * VAR11 != VAR5.VAR17)
            {
                FUN5(VAR2->VAR12, VAR23, "" VAR21 "", VAR5.VAR17, VAR9);
            }
        }
    }
    if (!VAR9)
        return 0;
    if (VAR7->VAR24)
        FUN5(VAR2->VAR12, VAR23, "");
    FUN6(VAR7->VAR24);
    VAR7->VAR25 = 0;
    VAR7->VAR24 = FUN7(VAR9, sizeof(*VAR7->VAR24));
    if (!VAR7->VAR24)
        return FUN8(VAR26);
    FUN5(VAR2->VAR12, VAR27, "", VAR2->VAR12->VAR13 - 1, VAR9);
    for (VAR8 = 0; VAR8 < VAR9 && VAR5.VAR17 > 0 && !VAR4->VAR28; VAR8++)
    {
        VAR29 *VAR30 = &VAR7->VAR24[VAR8];
        if (VAR10 == 1)
        {
            VAR30->VAR31 = FUN9(VAR4);
            VAR30->VAR32 = FUN9(VAR4);
            VAR5.VAR17 -= 16;
        }
        else
        {
            VAR30->VAR31 = FUN4(VAR4);
            VAR30->VAR32 = (VAR33)FUN4(VAR4);
            VAR5.VAR17 -= 8;
        }
        VAR30->VAR34 = FUN4(VAR4) / 65536.0;
        VAR5.VAR17 -= 4;
        FUN5(VAR2->VAR12, VAR27, "" VAR21 "" VAR21 "", VAR30->VAR31, VAR30->VAR32, VAR30->VAR34);
        if (VAR30->VAR32 < 0 && VAR30->VAR32 != -1 && VAR2->VAR12->VAR18 >= VAR19)
        {
            FUN5(VAR2->VAR12, VAR20, "" VAR21 "", VAR2->VAR12->VAR13 - 1, VAR8, VAR30->VAR32);
            return VAR22;
        }
    }
    VAR7->VAR25 = VAR8;
    return 0;
}