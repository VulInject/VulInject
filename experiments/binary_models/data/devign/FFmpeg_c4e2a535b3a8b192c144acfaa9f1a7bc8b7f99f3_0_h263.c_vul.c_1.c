static void FUN1(VAR1 *VAR2)
{
    static const int VAR3 = sizeof(VAR2->VAR4[0]) / sizeof(VAR5);
    static const int VAR6 = (VAR3 / 2);
    int VAR7;
    for (VAR7 = 0; VAR7 < VAR3; VAR7++)
    {
        VAR2->VAR4[0][VAR7] = (VAR7 - VAR6) * VAR2->VAR8 / VAR2->VAR9;
        VAR2->VAR4[1][VAR7] = (VAR7 - VAR6) * (VAR2->VAR8 - VAR2->VAR9) / VAR2->VAR9;
    }
}