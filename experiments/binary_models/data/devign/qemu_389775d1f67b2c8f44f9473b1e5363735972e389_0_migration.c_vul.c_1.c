VAR1 *FUN1(const VAR2 *VAR3)
{
    VAR1 *VAR4 = FUN2();
    int64_t VAR5 = VAR4->VAR5;
    bool VAR6[VAR7];
    int64_t VAR8 = VAR4->VAR8;
    int VAR9 = VAR4->VAR10[VAR11];
    int VAR12 = VAR4->VAR10[VAR13];
    int VAR14 = VAR4->VAR10[VAR15];
    int VAR16 = VAR4->VAR10[VAR17];
    int VAR18 = VAR4->VAR10[VAR19];
    memcpy(VAR6, VAR4->VAR6, sizeof(VAR6));
    memset(VAR4, 0, sizeof(*VAR4));
    VAR4->VAR3 = *VAR3;
    memcpy(VAR4->VAR6, VAR6, sizeof(VAR6));
    VAR4->VAR8 = VAR8;
    VAR4->VAR10[VAR11] = VAR9;
    VAR4->VAR10[VAR13] = VAR12;
    VAR4->VAR10[VAR15] = VAR14;
    VAR4->VAR10[VAR17] = VAR16;
    VAR4->VAR10[VAR19] = VAR18;
    VAR4->VAR5 = VAR5;
    FUN3(VAR4, VAR20, VAR21);
    FUN4(&VAR4->VAR22);
    VAR4->VAR23 = FUN5(VAR24);
    return VAR4;
}