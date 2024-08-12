static VAR1 *FUN1(VAR2 *VAR3, VAR1 *main, const VAR1 *VAR4)
{
    VAR5 *VAR6 = VAR3->VAR7;
    double VAR8[4], VAR9 = 0;
    int VAR10, VAR11;
    VAR12 **VAR13 = FUN2(main);
    VAR6->FUN3(VAR6, (const VAR14 **)main->VAR15, main->VAR16, (const VAR14 **)VAR4->VAR15, VAR4->VAR16, main->VAR17, main->VAR18, VAR8);
    for (VAR10 = 0; VAR10 < VAR6->VAR19; VAR10++)
        VAR9 += VAR8[VAR10] * VAR6->VAR20[VAR10];
    VAR6->VAR21 = FUN4(VAR6->VAR21, VAR9);
    VAR6->VAR22 = FUN5(VAR6->VAR22, VAR9);
    VAR6->VAR9 += VAR9;
    for (VAR10 = 0; VAR10 < VAR6->VAR19; VAR10++)
        VAR6->VAR23[VAR10] += VAR8[VAR10];
    VAR6->VAR24++;
    for (VAR10 = 0; VAR10 < VAR6->VAR19; VAR10++)
    {
        VAR11 = VAR6->VAR25 ? VAR6->VAR26[VAR10] : VAR10;
        FUN6(VAR13, "", VAR6->VAR27[VAR10], VAR8[VAR11]);
        FUN6(VAR13, "", VAR6->VAR27[VAR10], FUN7(VAR8[VAR11], 1, VAR6->VAR28[VAR11]));
    }
    FUN6(VAR13, "", 0, VAR9);
    FUN6(VAR13, "", 0, FUN7(VAR9, 1, VAR6->VAR29));
    if (VAR6->VAR30)
    {
        fprintf(VAR6->VAR30, "" VAR31 "", VAR6->VAR24, VAR9);
        for (VAR10 = 0; VAR10 < VAR6->VAR19; VAR10++)
        {
            VAR11 = VAR6->VAR25 ? VAR6->VAR26[VAR10] : VAR10;
            fprintf(VAR6->VAR30, "", VAR6->VAR27[VAR10], VAR8[VAR11]);
        }
        for (VAR10 = 0; VAR10 < VAR6->VAR19; VAR10++)
        {
            VAR11 = VAR6->VAR25 ? VAR6->VAR26[VAR10] : VAR10;
            fprintf(VAR6->VAR30, "", VAR6->VAR27[VAR10], FUN7(VAR8[VAR11], 1, VAR6->VAR28[VAR11]));
        }
        fprintf(VAR6->VAR30, "");
    }
    return main;
}