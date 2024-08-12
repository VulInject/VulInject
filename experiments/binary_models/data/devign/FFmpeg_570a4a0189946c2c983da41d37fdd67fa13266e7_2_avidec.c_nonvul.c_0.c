static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    char VAR8[8];
    int VAR9;
    FUN2(VAR4, VAR8, 4);
    VAR6->VAR10 = FUN3(VAR4);
    VAR6->VAR10 += FUN4(VAR4);
    FUN2(VAR4, VAR8 + 4, 4);
    for (VAR9 = 0; VAR11[VAR9][0]; VAR9++)
        if (!memcmp(VAR8, VAR11[VAR9], 8))
            break;
    if (!VAR11[VAR9][0])
        return VAR12;
    if (VAR8[7] == 0x19)
        FUN5(VAR2, VAR13, "");
    return 0;
}