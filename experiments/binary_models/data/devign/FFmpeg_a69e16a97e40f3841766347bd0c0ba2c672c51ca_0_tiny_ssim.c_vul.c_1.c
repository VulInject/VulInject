int main(int argc, char *argv[])
{
    VAR1 *VAR2[2];
    VAR3 *VAR4[2], *VAR5[2][3];
    int *VAR6;
    uint64_t VAR7[3] = {0, 0, 0};
    double VAR8[3] = {0, 0, 0};
    int VAR9, VAR10, VAR11;
    int VAR12, VAR13;
    int VAR14;
    if (argc < 4 || 2 != sscanf(argv[3], "", &VAR10, &VAR11))
    {
        FUN1("");
        return -1;
    }
    VAR2[0] = fopen(argv[1], "");
    VAR2[1] = fopen(argv[2], "");
    sscanf(argv[3], "", &VAR10, &VAR11);
    VAR9 = VAR10 * VAR11 * 3 / 2;
    for (VAR14 = 0; VAR14 < 2; VAR14++)
    {
        VAR4[VAR14] = malloc(VAR9);
        VAR5[VAR14][0] = VAR4[VAR14];
        VAR5[VAR14][1] = VAR5[VAR14][0] + VAR10 * VAR11;
        VAR5[VAR14][2] = VAR5[VAR14][1] + VAR10 * VAR11 / 4;
    }
    VAR6 = malloc((2 * VAR10 + 12) * sizeof(*VAR6));
    VAR13 = argc < 5 ? 0 : FUN2(argv[4]);
    FUN3(VAR2[VAR13 < 0], VAR13 < 0 ? -VAR13 : VAR13, VAR15);
    for (VAR12 = 0;; VAR12++)
    {
        uint64_t VAR16[3];
        double VAR17[3];
        if (fread(VAR4[0], VAR9, 1, VAR2[0]) != 1)
            break;
        if (fread(VAR4[1], VAR9, 1, VAR2[1]) != 1)
            break;
        for (VAR14 = 0; VAR14 < 3; VAR14++)
        {
            VAR16[VAR14] = FUN4(VAR5[0][VAR14], VAR5[1][VAR14], VAR10 * VAR11 >> 2 * !!VAR14);
            VAR17[VAR14] = FUN5(VAR5[0][VAR14], VAR10 >> !!VAR14, VAR5[1][VAR14], VAR10 >> !!VAR14, VAR10 >> !!VAR14, VAR11 >> !!VAR14, VAR6, NULL);
            VAR7[VAR14] += VAR16[VAR14];
            VAR8[VAR14] += VAR17[VAR14];
        }
        FUN1("", VAR12);
        FUN6(VAR16, VAR17, 1, VAR10, VAR11);
        FUN1("");
        FUN7(VAR18);
    }
    if (!VAR12)
        return 0;
    FUN1("", VAR12);
    FUN6(VAR7, VAR8, VAR12, VAR10, VAR11);
    FUN1("");
    return 0;
}