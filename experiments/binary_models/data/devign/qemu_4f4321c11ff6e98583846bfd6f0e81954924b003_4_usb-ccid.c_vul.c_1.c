static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    if (VAR4->VAR7 + VAR2->VAR8 > VAR9)
    {
        return VAR10;
    }
    VAR6 = (VAR5 *)VAR2->VAR11;
    memcpy(VAR2->VAR11 + VAR2->VAR8, VAR4->VAR12, VAR4->VAR7);
    VAR2->VAR8 += VAR4->VAR7;
    if (VAR4->VAR7 == VAR13)
    {
        FUN2(VAR2, VAR14, "", VAR4->VAR7, VAR6->VAR15);
        return 0;
    }
    if (VAR2->VAR8 < 10)
    {
        FUN2(VAR2, 1, "", VAR16);
    }
    else
    {
        FUN2(VAR2, VAR17, "", VAR16, VAR6->VAR18);
        switch (VAR6->VAR18)
        {
        case VAR19:
            FUN3(VAR2, VAR6);
            break;
        case VAR20:
            FUN2(VAR2, 1, "", ((VAR21 *)(VAR6))->VAR22);
            VAR2->VAR23 = true;
            if (!FUN4(VAR2))
            {
                FUN5(VAR2, VAR24);
            }
            FUN6(VAR2, VAR6);
            break;
        case VAR25:
            FUN2(VAR2, 1, "");
            FUN7(VAR2);
            VAR2->VAR23 = false;
            FUN3(VAR2, VAR6);
            break;
        case VAR26:
            FUN8(VAR2, (VAR27 *)VAR2->VAR11);
            break;
        case VAR28:
            FUN7(VAR2);
            FUN9(VAR2, VAR6);
            FUN10(VAR2, VAR6);
            break;
        case VAR29:
            FUN7(VAR2);
            FUN11(VAR2);
            FUN10(VAR2, VAR6);
            break;
        case VAR30:
            FUN7(VAR2);
            FUN10(VAR2, VAR6);
            break;
        default:
            FUN2(VAR2, 1, "", VAR6->VAR18);
            FUN5(VAR2, VAR31);
            FUN3(VAR2, VAR6);
            break;
        }
    }
    VAR2->VAR8 = 0;
    return 0;
}