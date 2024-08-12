static void FUN1(void *VAR1, int VAR2)
{
    struct VAR3 *VAR3 = VAR1;
    if (VAR2 != 0)
    {
        FUN2(&VAR3->VAR4->VAR5, 0, "", VAR3->VAR6.VAR7 == VAR8 ? "" : "");
        VAR3->VAR9++;
    }
    VAR3->VAR10--;
    if (VAR3->VAR11)
    {
        VAR3->VAR11 = 0;
        FUN3(VAR3);
        return;
    }
    if (VAR3->VAR10 > 0)
    {
        return;
    }
    if (VAR3->VAR12)
    {
        VAR3->VAR12 = 0;
        VAR3->VAR10++;
        FUN4(VAR3->VAR4->VAR13, VAR14, VAR3);
        return;
    }
    VAR3->VAR15 = VAR3->VAR9 ? VAR16 : VAR17;
    FUN5(VAR3);
    FUN6(VAR3);
    switch (VAR3->VAR6.VAR7)
    {
    case VAR18:
    case VAR19:
        if (!VAR3->VAR6.VAR20)
        {
            break;
        }
    case VAR8:
        FUN7(FUN8(VAR3->VAR4->VAR13), &VAR3->VAR21);
        break;
    case VAR22:
    default:
        break;
    }
    FUN9(VAR3->VAR4->VAR23);
}