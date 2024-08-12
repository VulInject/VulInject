static VAR1 *FUN1(int VAR2, int VAR3, const char *VAR4)
{
    VAR1 *VAR5 = FUN2(VAR2, VAR3);
    pixman_color_t VAR6 = VAR7[0][VAR8];
    pixman_color_t VAR9 = VAR7[0][VAR10];
    VAR11 *VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    VAR13 = strlen(VAR4);
    VAR14 = (VAR2 / VAR17 - VAR13) / 2;
    VAR15 = (VAR3 / VAR18 - 1) / 2;
    for (VAR16 = 0; VAR16 < VAR13; VAR16++)
    {
        VAR12 = FUN3(VAR18, VAR19, VAR4[VAR16]);
        FUN4(VAR12, VAR5->VAR20, &VAR9, &VAR6, VAR14 + VAR16, VAR15, VAR17, VAR18);
        FUN5(VAR12);
    }
    return VAR5;
}