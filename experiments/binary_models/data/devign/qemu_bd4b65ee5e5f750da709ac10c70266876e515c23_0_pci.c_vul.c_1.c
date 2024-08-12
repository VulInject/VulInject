int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5;
    int VAR6;
    VAR5 = FUN2(VAR4);
    if (VAR5 > 2)
        return -VAR7;
    FUN3(VAR4, VAR2->VAR8, 256);
    FUN4(VAR2);
    if (VAR5 >= 2)
        for (VAR6 = 0; VAR6 < 4; VAR6++)
            VAR2->VAR9[VAR6] = FUN2(VAR4);
    return 0;
}