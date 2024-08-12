int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VABufferID VAR5, VAR6;
    if (VAR2->VAR7 == 0)
        return 0;
    VAR4 = FUN2(VAR2->VAR4, &VAR2->VAR8, (VAR2->VAR9 + 2) * sizeof(VAR4[0]));
    if (!VAR4)
        return -1;
    VAR2->VAR4 = VAR4;
    VAR5 = VAR10;
    if (FUN3(VAR2->VAR11, VAR2->VAR12, VAR13, VAR2->VAR14, VAR2->VAR7, VAR2->VAR15, &VAR5) != VAR16)
        return -1;
    VAR2->VAR7 = 0;
    VAR6 = VAR10;
    if (FUN3(VAR2->VAR11, VAR2->VAR12, VAR17, VAR2->VAR18, 1, (void *)VAR2->VAR19, &VAR6) != VAR16)
        return -1;
    VAR2->VAR19 = NULL;
    VAR2->VAR18 = 0;
    VAR4[VAR2->VAR9++] = VAR5;
    VAR4[VAR2->VAR9++] = VAR6;
    return 0;
}