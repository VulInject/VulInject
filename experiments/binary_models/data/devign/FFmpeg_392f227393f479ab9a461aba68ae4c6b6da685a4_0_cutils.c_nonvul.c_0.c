struct VAR1 *FUN1(time_t VAR2, struct VAR1 *VAR1)
{
    int VAR3, VAR4, VAR5, VAR6;
    int VAR7[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    VAR3 = VAR2 / 86400;
    VAR2 %= 86400;
    VAR1->VAR8 = VAR2 / 3600;
    VAR1->VAR9 = (VAR2 % 3600) / 60;
    VAR1->VAR10 = VAR2 % 60;
    VAR4 = 1970;
    while (VAR3 > 365)
    {
        VAR5 = (VAR4 + VAR3 / 366);
        VAR3 -= (VAR5 - VAR4) * 365 + FUN2(VAR5 - 1) - FUN2(VAR4 - 1);
        VAR4 = VAR5;
    }
    if (VAR3 == 365 && !FUN3(VAR4))
    {
        VAR3 = 0;
        VAR4++;
    }
    VAR7[1] = FUN3(VAR4) ? 29 : 28;
    for (VAR6 = 0; VAR3 >= VAR7[VAR6]; VAR6++)
        VAR3 -= VAR7[VAR6];
    VAR1->VAR11 = VAR4;
    VAR1->VAR12 = VAR6 + 1;
    VAR1->VAR13 = VAR3 + 1;
    return VAR1;
}