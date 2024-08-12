static bool FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4, *VAR5;
    size_t VAR6;
    size_t VAR7;
    uint16_t VAR8;
    assert(VAR2);
    VAR4 = &VAR2->VAR9[VAR10];
    VAR5 = &VAR2->VAR9[VAR11];
    VAR6 = FUN2(VAR2->VAR12, VAR2->VAR13, 0, VAR4->VAR14, VAR15);
    if (VAR6 < VAR15)
    {
        VAR4->VAR16 = 0;
        return false;
    }
    else
    {
        VAR4->VAR16 = FUN3(VAR4->VAR14);
    }
    VAR8 = FUN4(VAR4->VAR14, VAR4->VAR16);
    switch (VAR8)
    {
    case VAR17:
        VAR5->VAR14 = FUN5(VAR18);
        VAR6 = FUN2(VAR2->VAR12, VAR2->VAR13, VAR4->VAR16, VAR5->VAR14, sizeof(struct VAR19));
        if (VAR6 < sizeof(struct VAR19))
        {
            VAR5->VAR16 = 0;
            return false;
        }
        VAR5->VAR16 = FUN6(VAR5->VAR14);
        VAR2->VAR20 = ((struct VAR19 *)VAR5->VAR14)->VAR21;
        VAR6 = FUN2(VAR2->VAR12, VAR2->VAR13, VAR4->VAR16 + sizeof(struct VAR19), VAR5->VAR14 + sizeof(struct VAR19), VAR5->VAR16 - sizeof(struct VAR19));
        if (VAR6 < VAR5->VAR16 - sizeof(struct VAR19))
        {
            VAR5->VAR16 = 0;
            return false;
        }
        break;
    case VAR22:
        if (!FUN7(VAR2->VAR12, VAR2->VAR13, VAR4->VAR16, &VAR2->VAR20, &VAR7))
        {
            VAR5->VAR16 = 0;
            return false;
        }
        VAR5->VAR14 = FUN5(VAR7);
        VAR6 = FUN2(VAR2->VAR12, VAR2->VAR13, VAR4->VAR16, VAR5->VAR14, VAR7);
        if (VAR6 < VAR7)
        {
            VAR5->VAR16 = 0;
            return false;
        }
        else
        {
            VAR5->VAR16 = VAR7;
        }
        break;
    default:
        VAR5->VAR16 = 0;
        break;
    }
    FUN8(VAR2);
    VAR2->VAR23 = FUN9(VAR4->VAR14);
    return true;
}