static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    if (VAR4->VAR7.VAR8 + VAR2->VAR9 > VAR10)
    {
        goto VAR11;
    }
    FUN2(VAR4, VAR2->VAR12 + VAR2->VAR9, VAR4->VAR7.VAR8);
    VAR2->VAR9 += VAR4->VAR7.VAR8;
    if (VAR2->VAR9 < 10)
    {
        FUN3(VAR2, 1, "", VAR13);
        goto VAR11;
    }
    VAR6 = (VAR5 *)VAR2->VAR12;
    if (VAR4->VAR7.VAR8 == VAR14)
    {
        FUN3(VAR2, VAR15, "", VAR4->VAR7.VAR8, VAR6->VAR16);
        return;
    }
    FUN3(VAR2, VAR17, "", VAR13, VAR6->VAR18, FUN4(VAR6->VAR18));
    switch (VAR6->VAR18)
    {
    case VAR19:
        FUN5(VAR2, VAR6);
        break;
    case VAR20:
        FUN3(VAR2, 1, "", VAR13, ((VAR21 *)(VAR6))->VAR22);
        VAR2->VAR23 = true;
        if (!FUN6(VAR2))
        {
            FUN7(VAR2, VAR24);
        }
        FUN8(VAR2, VAR6);
        break;
    case VAR25:
        FUN9(VAR2);
        VAR2->VAR23 = false;
        FUN5(VAR2, VAR6);
        break;
    case VAR26:
        FUN10(VAR2, (VAR27 *)VAR2->VAR12);
        break;
    case VAR28:
        FUN9(VAR2);
        FUN11(VAR2, VAR6);
        FUN12(VAR2, VAR6);
        break;
    case VAR29:
        FUN9(VAR2);
        FUN13(VAR2);
        FUN12(VAR2, VAR6);
        break;
    case VAR30:
        FUN9(VAR2);
        FUN12(VAR2, VAR6);
        break;
    case VAR31:
        FUN7(VAR2, 0);
        FUN5(VAR2, VAR6);
        break;
    default:
        FUN3(VAR2, 1, "", VAR6->VAR18);
        FUN7(VAR2, VAR32);
        FUN5(VAR2, VAR6);
        break;
    }
    VAR2->VAR9 = 0;
    return;
VAR11:
    VAR4->VAR33 = VAR34;
    VAR2->VAR9 = 0;
    return;
}