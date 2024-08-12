static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    char VAR8[5];
    char VAR9[] = "";
    int VAR10, VAR11;
    assert(VAR4->VAR12 & VAR13);
    if (VAR6->VAR14 > VAR15)
        return -1;
    for (VAR10 = 0; VAR10 < VAR2->VAR16; VAR10++)
    {
        VAR17 *VAR18 = VAR2->VAR19[VAR10]->VAR7;
        int64_t VAR20, VAR21;
        FUN2(VAR8, VAR10, VAR2->VAR19[VAR10]->VAR22->VAR23);
        VAR9[3] = '' + VAR10;
        VAR20 = FUN3(VAR4);
        FUN4(VAR4, VAR9);
        FUN5(VAR4, VAR18->VAR24.VAR25 * 8 + 24);
        FUN6(VAR4, 2);
        FUN7(VAR4, 0);
        FUN7(VAR4, 1);
        FUN5(VAR4, VAR18->VAR24.VAR25);
        FUN4(VAR4, VAR8);
        FUN8(VAR4, VAR6->VAR26);
        FUN5(VAR4, 0);
        for (VAR11 = 0; VAR11 < VAR18->VAR24.VAR25; VAR11++)
        {
            VAR27 *VAR28 = FUN9(&VAR18->VAR24, VAR11);
            FUN5(VAR4, VAR28->VAR21 + 8);
            FUN5(VAR4, ((VAR29)VAR28->VAR30 & ~0x80000000) | (VAR28->VAR31 & 0x10 ? 0 : 0x80000000));
        }
        FUN10(VAR4);
        VAR21 = FUN3(VAR4);
        FUN11(VAR4, VAR18->VAR24.VAR32 - 8, VAR33);
        FUN4(VAR4, "");
        FUN12(VAR4, 8);
        FUN5(VAR4, VAR6->VAR14);
        FUN12(VAR4, 16 * VAR6->VAR14);
        FUN8(VAR4, VAR20);
        FUN5(VAR4, VAR21 - VAR20);
        FUN5(VAR4, VAR18->VAR24.VAR25);
        FUN11(VAR4, VAR21, VAR33);
    }
    return 0;
}