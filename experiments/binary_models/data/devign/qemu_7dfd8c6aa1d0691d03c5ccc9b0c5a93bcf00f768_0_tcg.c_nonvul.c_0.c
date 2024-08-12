static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    for (VAR3 = 0; VAR3 < VAR2->VAR6; VAR3++)
    {
        VAR5 = &VAR2->VAR7[VAR3];
        if (VAR5->VAR8)
        {
            VAR5->VAR9 = VAR10;
        }
        else
        {
            VAR5->VAR9 = VAR11;
        }
    }
    for (VAR3 = VAR2->VAR6; VAR3 < VAR2->VAR12; VAR3++)
    {
        VAR5 = &VAR2->VAR7[VAR3];
        if (VAR5->VAR13)
        {
            VAR5->VAR9 = VAR11;
        }
        else
        {
            VAR5->VAR9 = VAR14;
        }
        VAR5->VAR15 = 0;
        VAR5->VAR8 = 0;
    }
    for (VAR3 = 0; VAR3 < VAR16; VAR3++)
    {
        VAR2->VAR17[VAR3] = -1;
    }
}