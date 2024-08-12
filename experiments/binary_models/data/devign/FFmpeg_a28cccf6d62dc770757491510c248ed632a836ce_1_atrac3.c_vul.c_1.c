static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, float *VAR7, int VAR8, int VAR9)
{
    int VAR10, VAR11 = 0, VAR12, VAR13, VAR14;
    if (VAR9 == VAR15 && VAR8 == 1)
    {
        if (FUN2(VAR4, 2) != 3)
        {
            FUN3(NULL, VAR16, "");
            return -1;
        }
    }
    else
    {
        if (FUN2(VAR4, 6) != 0x28)
        {
            FUN3(NULL, VAR16, "");
            return -1;
        }
    }
    VAR6->VAR17 = FUN2(VAR4, 2);
    VAR11 = FUN4(VAR4, &(VAR6->VAR18[VAR6->VAR19]), VAR6->VAR17);
    if (VAR11)
        return VAR11;
    VAR6->VAR20 = FUN5(VAR4, VAR6->VAR21, VAR6->VAR17);
    if (VAR6->VAR20 == -1)
        return -1;
    VAR12 = FUN6(VAR4, VAR6->VAR22);
    VAR13 = FUN7(VAR6->VAR22, VAR6->VAR20, VAR6->VAR21);
    VAR14 = (VAR23[VAR12] - 1) >> 8;
    if (VAR13 >= 0)
        VAR14 = FUN8((VAR13 + 256) >> 8, VAR14);
    for (VAR10 = 0; VAR10 < 4; VAR10++)
    {
        if (VAR10 <= VAR14)
        {
            FUN9(&(VAR6->VAR22[VAR10 * 256]), VAR6->VAR24, VAR10 & 1);
        }
        else
            memset(VAR6->VAR24, 0, 512 * sizeof(float));
        FUN10(VAR6->VAR24, &(VAR6->VAR25[VAR10 * 256]), &(VAR7[VAR10 * 256]), &((VAR6->VAR18[1 - (VAR6->VAR19)]).VAR26[VAR10]), &((VAR6->VAR18[VAR6->VAR19]).VAR26[VAR10]));
    }
    VAR6->VAR19 ^= 1;
    return 0;
}