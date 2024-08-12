static void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    switch (VAR2->VAR4)
    {
    case 1:
    case 2:
        VAR2->VAR5 = VAR2->VAR6 = VAR7;
        break;
    case 3:
        if (VAR2->VAR8)
        {
            VAR2->VAR5 = VAR9;
            VAR2->VAR6 = VAR10;
        }
        else
        {
            VAR2->VAR5 = VAR11;
            VAR2->VAR6 = VAR12;
        }
        break;
    case 4:
    case 5:
        VAR2->VAR5 = VAR13;
        VAR2->VAR6 = VAR14;
        break;
    case 6:
        VAR2->VAR5 = VAR15;
        VAR2->VAR6 = VAR15;
        break;
    }
    if (VAR2->VAR4 >= 4)
    {
        FUN2(VAR2->VAR16.VAR17, &VAR2->VAR18, VAR19[1]);
        FUN2(VAR2->VAR16.VAR17, &VAR2->VAR20, VAR19[2]);
        FUN2(VAR2->VAR16.VAR17, &VAR2->VAR21, VAR19[3]);
        FUN2(VAR2->VAR16.VAR17, &VAR2->VAR22, VAR19[0]);
    }
    if (!VAR3)
    {
        VAR3 = 1;
        FUN3();
    }
}