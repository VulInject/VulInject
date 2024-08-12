static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    char VAR5[5];
    int VAR6;
    if (!(VAR4[0] == '' && VAR4[1] == '' && VAR4[2] == ''))
        return -1;
    FUN2(VAR2, "", VAR4 + 3, 30);
    FUN2(VAR2, "", VAR4 + 33, 30);
    FUN2(VAR2, "", VAR4 + 63, 30);
    FUN2(VAR2, "", VAR4 + 93, 4);
    FUN2(VAR2, "", VAR4 + 97, 30);
    if (VAR4[125] == 0 && VAR4[126] != 0)
    {
        snprintf(VAR5, sizeof(VAR5), "", VAR4[126]);
        FUN3(&VAR2->VAR7, "", VAR5, 0);
    }
    VAR6 = VAR4[127];
    if (VAR6 <= VAR8)
        FUN3(&VAR2->VAR7, "", VAR9[VAR6], 0);
    return 0;
}