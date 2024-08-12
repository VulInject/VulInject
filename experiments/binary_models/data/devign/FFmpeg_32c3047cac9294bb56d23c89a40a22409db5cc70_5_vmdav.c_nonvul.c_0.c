static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    unsigned int *VAR7;
    int VAR8 = 0;
    unsigned char VAR9, VAR10, VAR11;
    unsigned char *VAR12;
    unsigned char *VAR13;
    VAR4->VAR2 = VAR2;
    VAR2->VAR14 = VAR15;
    if (VAR4->VAR2->VAR16 != VAR17)
    {
        FUN2(VAR4->VAR2, VAR18, "", VAR17);
        return -1;
    }
    VAR12 = (unsigned char *)VAR2->VAR19;
    VAR4->VAR20 = FUN3(&VAR12[800]);
    VAR4->VAR21 = FUN4(VAR4->VAR20);
    if (!VAR4->VAR21)
        return -1;
    VAR13 = &VAR12[28];
    VAR7 = (unsigned int *)VAR4->VAR22;
    for (VAR6 = 0; VAR6 < VAR23; VAR6++)
    {
        VAR9 = VAR13[VAR8++] * 4;
        VAR10 = VAR13[VAR8++] * 4;
        VAR11 = VAR13[VAR8++] * 4;
        VAR7[VAR6] = (VAR9 << 16) | (VAR10 << 8) | (VAR11);
    }
    VAR4->VAR24.VAR25[0] = VAR4->VAR26.VAR25[0] = NULL;
    return 0;
}