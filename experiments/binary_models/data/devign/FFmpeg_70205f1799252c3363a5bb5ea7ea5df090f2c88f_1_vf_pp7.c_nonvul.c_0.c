static int FUN1(VAR1 *VAR2, char *VAR3)
{
    VAR2->VAR4 = VAR4;
    VAR2->VAR5 = VAR5;
    VAR2->VAR6 = VAR6;
    VAR2->VAR7 = VAR7;
    VAR2->VAR8 = VAR8;
    VAR2->VAR9 = VAR9;
    VAR2->VAR10 = malloc(sizeof(struct VAR11));
    memset(VAR2->VAR10, 0, sizeof(struct VAR11));
    if (VAR3)
        sscanf(VAR3, "", &VAR2->VAR10->VAR12, &VAR2->VAR10->VAR13);
    if (VAR2->VAR10->VAR12 < 0)
        VAR2->VAR10->VAR12 = 0;
    FUN2();
    switch (VAR2->VAR10->VAR13)
    {
    case 0:
        VAR14 = VAR15;
        break;
    case 1:
        VAR14 = VAR16;
        break;
    default:
    case 2:
        VAR14 = VAR17;
        break;
    }
    if (VAR18.VAR19)
    {
        VAR20 = VAR21;
    }
    if (VAR18.VAR19)
    {
        switch (VAR2->VAR10->VAR13)
        {
        case 0:
            VAR14 = VAR22;
            break;
        case 1:
            VAR14 = VAR23;
            break;
        }
    }
    return 1;
}