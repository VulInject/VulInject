static int FUN1(VAR1 *VAR2, char *VAR3)
{
    int VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = 0;
    for (VAR4 = 0; VAR4 < VAR6->VAR9; VAR4++)
    {
        VAR10 *VAR11 = &VAR6->VAR12[VAR4]->VAR11;
        switch (VAR3[VAR4])
        {
        case 0:
            VAR2->VAR13[VAR4] = VAR6->VAR14[VAR4];
            break;
        case 1:
            VAR2->VAR13[VAR4] = FUN2(VAR6->VAR15, VAR11, VAR11->VAR16 / 2);
            break;
        case 2:
            VAR2->VAR13[VAR4] = FUN2(VAR6->VAR15, VAR11, VAR11->VAR16 / 4);
            VAR2->VAR13[VAR4] = -2;
            VAR2->VAR14[VAR4] = -2;
            break;
        }
        if (VAR2->VAR13[VAR4] >= 0 && VAR2->VAR13[VAR4] != VAR2->VAR14[VAR4])
            VAR8 = 1;
    }
    return VAR8;