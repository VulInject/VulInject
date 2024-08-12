static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, double VAR5)
{
    VAR3 *VAR6;
    if (VAR2->VAR7->VAR8.VAR9 == VAR2->VAR7->VAR10.VAR9)
    {
        VAR6 = VAR4;
    }
    else
    {
        int VAR11, VAR12;
        int VAR13 = VAR2->VAR7->VAR8.VAR14 * VAR4->VAR15[0] + VAR2->VAR7->VAR8.VAR16;
        int VAR17 = VAR2->VAR7->VAR8.VAR18 * VAR4->VAR15[0] + VAR2->VAR7->VAR8.VAR19;
        VAR6 = FUN2(VAR2->VAR20, VAR21, VAR22, VAR23, VAR2->VAR7->VAR10.VAR24, VAR2->VAR7->VAR10.VAR25);
        VAR11 = VAR2->VAR7->VAR10.VAR14 * VAR6->VAR15[0] + VAR2->VAR7->VAR10.VAR16;
        VAR12 = VAR2->VAR7->VAR10.VAR18 * VAR6->VAR15[0] + VAR2->VAR7->VAR10.VAR19;
        switch (VAR2->VAR7->VAR10.VAR9)
        {
        case VAR26:
        case VAR27:
        case VAR28:
        case VAR29:
        case VAR30:
        case VAR31:
        case VAR32:
        case VAR33:
        case VAR34:
        case VAR35:
            FUN3(VAR6->VAR36[0] + VAR11, VAR4->VAR36[0] + VAR13, 3 * VAR2->VAR7->VAR24, VAR2->VAR7->VAR25, VAR6->VAR15[0] * VAR2->VAR7->VAR37, VAR4->VAR15[0] * VAR2->VAR7->VAR37, VAR2->VAR7->VAR37 != 1);
            FUN3(VAR6->VAR36[0] + VAR12, VAR4->VAR36[0] + VAR17, 3 * VAR2->VAR7->VAR24, VAR2->VAR7->VAR25, VAR6->VAR15[0] * VAR2->VAR7->VAR37, VAR4->VAR15[0] * VAR2->VAR7->VAR37, VAR2->VAR7->VAR37 != 1);
            break;
        case VAR38:
        case VAR39:
            FUN4(VAR6->VAR36[0], VAR4->VAR36[0] + VAR13, 3 * VAR2->VAR7->VAR24, VAR2->VAR7->VAR25, VAR6->VAR15[0], VAR4->VAR15[0]);
            break;
        case VAR40:
        case VAR41:
        case VAR42:
        case VAR43:
        case VAR44:
        case VAR45:
        case VAR46:
        case VAR47:
        case VAR48:
        case VAR49:
        case VAR50:
        case VAR51:
        {
            int VAR52, VAR53, VAR54, VAR55, VAR56, VAR57;
            unsigned char *VAR58 = VAR4->VAR36[0];
            unsigned char *VAR59 = VAR6->VAR36[0];
            unsigned int VAR60 = VAR2->VAR7->VAR10.VAR24;
            int *VAR61[3];
            for (VAR52 = 0; VAR52 < 3; VAR52++)
                VAR61[VAR52] = VAR2->VAR7->VAR61[VAR52];
            for (VAR54 = 0; VAR54 < VAR2->VAR7->VAR10.VAR25; VAR54++)
            {
                VAR57 = VAR6->VAR15[0] * VAR54;
                VAR55 = VAR13 + VAR54 * VAR4->VAR15[0];
                VAR56 = VAR17 + VAR54 * VAR4->VAR15[0];
                for (VAR53 = 0; VAR53 < VAR60; VAR53++)
                {
                    VAR59[VAR57] = FUN5(VAR61[0], VAR58 + VAR55, VAR58 + VAR56);
                    VAR59[VAR57 + 1] = FUN5(VAR61[1], VAR58 + VAR55, VAR58 + VAR56);
                    VAR59[VAR57 + 2] = FUN5(VAR61[2], VAR58 + VAR55, VAR58 + VAR56);
                    VAR55 += 3;
                    VAR56 += 3;
                    VAR57 += 3;
                }
            }
            break;
        }
        default:
            FUN6(VAR62, VAR63, "");
            return 0;
            break;
        }
    }
    return FUN7(VAR2, VAR6, VAR5);
}