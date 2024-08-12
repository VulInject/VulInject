static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8;
    size_t VAR9;
    int VAR10, VAR11, FUN2(VAR12), VAR13;
    AVBPrint VAR14;
    static const int VAR15[] = {3, 0, 1, 2};
    FUN3(&VAR14, 0, VAR16);
    VAR11 = FUN4(VAR3, &VAR8, &VAR9, 0, NULL);
    if (VAR11 < 0)
        return VAR11;
    if (VAR9 < 2)
        return VAR17;
    VAR18 = FUN5(VAR8);
    VAR8 += 2;
    VAR9 -= 2;
}
while (0)
    FUN6(VAR12);
FUN6(VAR13);
for (VAR10 = 0; VAR10 < FUN7(VAR13, FUN8(VAR15)); VAR10++)
{
    int VAR19, VAR20;
    FUN9(&VAR14);
    FUN6(VAR19);
    for (VAR20 = 0; VAR20 < VAR19; VAR20++)
    {
        int VAR21, VAR22;
        FUN6(VAR21);
        FUN6(VAR22);
        FUN10(&VAR14, "", VAR22 / 255., VAR21 / 255.);
    }
    if (*VAR14.VAR23)
    {
        char **VAR24 = &VAR5->VAR25[VAR15[VAR10]];
        if (!*VAR24)
        {
            *VAR24 = FUN11(VAR14.VAR23);
            FUN12(VAR2, VAR26, "", VAR10, VAR15[VAR10], VAR19, *VAR24);
            if (!*VAR24)
            {
                VAR11 = FUN13(VAR27);
                goto VAR28;
            }
        }
    }
}
VAR28 : FUN14(&VAR14, NULL);
FUN15(VAR8, VAR9);
return VAR11;
}