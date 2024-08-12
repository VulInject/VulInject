static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR4->VAR5->VAR6 == VAR7 && VAR4->VAR5->VAR8 == VAR9 && VAR4->VAR5->VAR10 == VAR11)
    {
        if ((VAR4->VAR5->VAR12 >= 1920 && VAR4->VAR5->VAR13 >= 1080) || (VAR4->VAR5->VAR12 == 1280 && VAR4->VAR5->VAR13 == 720))
        {
            FUN2(NULL, VAR14, "");
            VAR4->VAR5->VAR6 = VAR15;
        }
        else if (VAR4->VAR5->VAR12 == 720 && VAR4->VAR13 == 576)
        {
            FUN2(NULL, VAR14, "");
            VAR4->VAR5->VAR6 = VAR16;
        }
        else if (VAR4->VAR5->VAR12 == 720 && (VAR4->VAR13 == 486 || VAR4->VAR13 == 480))
        {
            FUN2(NULL, VAR14, "");
            VAR4->VAR5->VAR6 = VAR17;
        }
        else
        {
            FUN2(NULL, VAR14, "");
        }
        switch (VAR4->VAR5->VAR6)
        {
        case VAR15:
            VAR4->VAR5->VAR8 = VAR18;
            VAR4->VAR5->VAR10 = VAR19;
            break;
        case VAR17:
        case VAR16:
            VAR4->VAR5->VAR8 = VAR18;
            VAR4->VAR5->VAR10 = VAR20;
            break;
        }
    }
    FUN3(VAR4->VAR21 == VAR22 || VAR4->VAR21 == VAR23);
    FUN4(VAR2, 18 + (VAR4->VAR21 == VAR23));
    FUN5(VAR2, "");
    if (VAR4->VAR21 == VAR23)
        FUN5(VAR2, "");
    else
        FUN5(VAR2, "");
    switch (VAR4->VAR5->VAR6)
    {
    case VAR15:
        FUN6(VAR2, 1);
        break;
    case VAR17:
    case VAR24:
        FUN6(VAR2, 6);
        break;
    case VAR16:
        FUN6(VAR2, 5);
        break;
    default:
        FUN6(VAR2, 2);
    }
    switch (VAR4->VAR5->VAR8)
    {
    case VAR18:
        FUN6(VAR2, 1);
        break;
    case VAR25:
        FUN6(VAR2, 1);
        break;
    case VAR26:
        FUN6(VAR2, 7);
        break;
    default:
        FUN6(VAR2, 2);
    }
    switch (VAR4->VAR5->VAR10)
    {
    case VAR19:
        FUN6(VAR2, 1);
        break;
    case VAR27:
    case VAR20:
        FUN6(VAR2, 6);
        break;
    case VAR28:
        FUN6(VAR2, 7);
        break;
    default:
        FUN6(VAR2, 2);
    }
    if (VAR4->VAR21 == VAR23)
    {
        int VAR29 = VAR4->VAR5->VAR30 == VAR31;
        FUN7(VAR2, VAR29 << 7);
        return 19;
    }
    else
    {
        return 18;
    }
}