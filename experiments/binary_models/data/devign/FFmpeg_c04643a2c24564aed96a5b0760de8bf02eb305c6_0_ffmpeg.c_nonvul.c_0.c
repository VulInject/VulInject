void FUN1(int *VAR1, int *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    VAR7 *VAR8;
    VAR3 = 0;
    VAR4 = 0;
    for (VAR6 = 0; VAR6 < VAR9; VAR6++)
    {
        VAR8 = VAR10[VAR6];
        for (VAR5 = 0; VAR5 < VAR8->VAR11; VAR5++)
        {
            VAR12 *VAR13 = &VAR8->VAR14[VAR5]->VAR15;
            switch (VAR13->VAR16)
            {
            case VAR17:
                VAR4 = 1;
                break;
            case VAR18:
                VAR3 = 1;
                break;
            default:
                FUN2();
            }
        }
    }
    *VAR1 = VAR3;
    *VAR2 = VAR4;
}