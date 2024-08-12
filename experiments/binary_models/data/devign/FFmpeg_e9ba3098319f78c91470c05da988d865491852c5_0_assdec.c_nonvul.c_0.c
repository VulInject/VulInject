static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9, *VAR10;
    int VAR11;
    if (VAR6->VAR12 >= VAR6->VAR13)
        return FUN2(VAR14);
    VAR9 = VAR6->VAR15[VAR6->VAR12];
    VAR10 = strchr(VAR9, '');
    VAR11 = FUN3(VAR4, VAR10 ? VAR10 - VAR9 + 1 : strlen(VAR9));
    if (VAR11 < 0)
        return VAR11;
    VAR4->VAR16 |= VAR17;
    VAR4->VAR18 = VAR9 - VAR6->VAR19 + VAR2->VAR20[0]->VAR21->VAR22;
    VAR4->VAR23 = VAR4->VAR24 = FUN4(VAR9);
    memcpy(VAR4->VAR25, VAR9, VAR4->VAR26);
    VAR6->VAR12++;
    return 0;
}