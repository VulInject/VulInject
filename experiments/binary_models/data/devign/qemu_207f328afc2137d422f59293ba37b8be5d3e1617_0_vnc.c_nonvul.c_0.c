void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    VAR5 = (VAR3 + VAR5) / VAR9;
    VAR6 = (VAR4 + VAR6) / VAR9;
    VAR3 /= VAR9;
    VAR4 /= VAR9;
    for (VAR8 = VAR4; VAR8 <= VAR6; VAR8++)
    {
        for (VAR7 = VAR3; VAR7 <= VAR5; VAR7++)
        {
            VAR2->VAR10[VAR8][VAR7] = 1;
        }
    }
}