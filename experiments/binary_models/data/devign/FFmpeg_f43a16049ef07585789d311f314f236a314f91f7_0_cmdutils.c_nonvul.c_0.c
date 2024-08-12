int FUN1(const char *VAR1, const char *VAR2)
{
    static const AVOption VAR3[] = {
        {"", NULL, 0, VAR4, {0}, VAR5, VAR6, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR9}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR10}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR11}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR12}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR13}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR14}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR15}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR16}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR17}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR18}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR19}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR20}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR21}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR22}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR23}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR24}, .VAR7 = ""},
        {"", NULL, 0, VAR8, {VAR25}, .VAR7 = ""},
        {NULL},
    };
    static const AVClass class = {
        .VAR26 = "",
        .VAR27 = VAR28,
        .VAR29 = VAR3,
        .VAR30 = VAR31,
    };
    int VAR32 = FUN2();
    int VAR33;
    const VAR34 *VAR35 = &class;
    if ((VAR33 = FUN3(&VAR35, &VAR3[0], VAR2, &VAR32)) < 0)
        return VAR33;
    FUN4(VAR32);
    return 0;
}