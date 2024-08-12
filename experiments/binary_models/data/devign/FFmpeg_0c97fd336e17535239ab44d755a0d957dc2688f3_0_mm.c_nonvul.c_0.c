static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    unsigned char VAR10[VAR11];
    unsigned int VAR12, VAR13;
    while (1)
    {
        if (FUN2(VAR9, VAR10, VAR11) != VAR11)
        {
            return FUN3(VAR14);
        }
        VAR12 = FUN4(&VAR10[0]);
        VAR13 = FUN4(&VAR10[2]);
        switch (VAR12)
        {
        case VAR15:
        case VAR16:
        case VAR17:
        case VAR18:
        case VAR19:
        case VAR20:
        case VAR21:
            if (FUN5(VAR4, VAR13 + VAR11))
                return FUN3(VAR22);
            memcpy(VAR4->VAR23, VAR10, VAR11);
            if (FUN2(VAR9, VAR4->VAR23 + VAR11, VAR13) != VAR13)
                return FUN3(VAR14);
            VAR4->VAR24 = VAR13 + VAR11;
            VAR4->VAR25 = 0;
            VAR4->VAR26 = VAR6->VAR27;
            if (VAR12 != VAR15)
                VAR6->VAR27++;
            return 0;
        case VAR28:
            if (FUN6(VAR2->VAR9, VAR4, VAR13) < 0)
                return FUN3(VAR22);
            VAR4->VAR25 = 1;
            VAR4->VAR26 = VAR6->VAR29++;
            return 0;
        default:
            FUN7(VAR2, VAR30, "", VAR12);
            FUN8(VAR9, VAR13);
        }
    }
}