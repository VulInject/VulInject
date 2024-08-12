static void FUN1(struct VAR1 *VAR2)
{
    uint32_t VAR3, VAR4;
    int VAR5, VAR6;
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    struct vmsvga_cursor_definition_s VAR13;
    uint32_t VAR14;
    VAR6 = FUN2(VAR2);
    while (VAR6 > 0)
    {
        VAR14 = VAR2->VAR3->VAR15;
        switch (VAR3 = FUN3(VAR2))
        {
        case VAR16:
        case VAR17:
            VAR6 -= 5;
            if (VAR6 < 0)
            {
                goto VAR18;
            }
            VAR7 = FUN3(VAR2);
            VAR8 = FUN3(VAR2);
            VAR11 = FUN3(VAR2);
            VAR12 = FUN3(VAR2);
            FUN4(VAR2, VAR7, VAR8, VAR11, VAR12);
            break;
        case VAR19:
            VAR6 -= 6;
            if (VAR6 < 0)
            {
                goto VAR18;
            }
            VAR4 = FUN3(VAR2);
            VAR7 = FUN3(VAR2);
            VAR8 = FUN3(VAR2);
            VAR11 = FUN3(VAR2);
            VAR12 = FUN3(VAR2);
            if (FUN5(VAR2, VAR4, VAR7, VAR8, VAR11, VAR12) == 0)
            {
                break;
            }
            VAR5 = 0;
            goto VAR20;
        case VAR21:
            VAR6 -= 7;
            if (VAR6 < 0)
            {
                goto VAR18;
            }
            VAR7 = FUN3(VAR2);
            VAR8 = FUN3(VAR2);
            VAR9 = FUN3(VAR2);
            VAR10 = FUN3(VAR2);
            VAR11 = FUN3(VAR2);
            VAR12 = FUN3(VAR2);
            if (FUN6(VAR2, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12) == 0)
            {
                break;
            }
            VAR5 = 0;
            goto VAR20;
        case VAR22:
            VAR6 -= 8;
            if (VAR6 < 0)
            {
                goto VAR18;
            }
            VAR13.VAR23 = FUN3(VAR2);
            VAR13.VAR24 = FUN3(VAR2);
            VAR13.VAR25 = FUN3(VAR2);
            VAR13.VAR11 = VAR7 = FUN3(VAR2);
            VAR13.VAR12 = VAR8 = FUN3(VAR2);
            FUN3(VAR2);
            VAR13.VAR26 = FUN3(VAR2);
            VAR5 = FUN7(VAR7, VAR8) + FUN8(VAR7, VAR8, VAR13.VAR26);
            if (VAR13.VAR11 > 256 || VAR13.VAR12 > 256 || VAR13.VAR26 > 32 || FUN7(VAR7, VAR8) > sizeof VAR13.VAR27 || FUN8(VAR7, VAR8, VAR13.VAR26) > sizeof VAR13.VAR28)
            {
                goto VAR20;
            }
            VAR6 -= VAR5;
            if (VAR6 < 0)
            {
                goto VAR18;
            }
            for (VAR5 = 0; VAR5 < FUN7(VAR7, VAR8); VAR5++)
            {
                VAR13.VAR27[VAR5] = FUN9(VAR2);
            }
            for (VAR5 = 0; VAR5 < FUN8(VAR7, VAR8, VAR13.VAR26); VAR5++)
            {
                VAR13.VAR28[VAR5] = FUN9(VAR2);
            }
            FUN10(VAR2, &VAR13);
            break;
            VAR5 = 0;
            goto VAR20;
        case VAR29:
            VAR6 -= 6;
            if (VAR6 < 0)
            {
                goto VAR18;
            }
            FUN3(VAR2);
            FUN3(VAR2);
            FUN3(VAR2);
            VAR7 = FUN3(VAR2);
            VAR8 = FUN3(VAR2);
            VAR5 = VAR7 * VAR8;
            goto VAR20;
        case VAR30:
            VAR5 = 6;
            goto VAR20;
        case VAR31:
            VAR5 = 7;
            goto VAR20;
        case VAR32:
            VAR6 -= 4;
            if (VAR6 < 0)
            {
                goto VAR18;
            }
            FUN3(VAR2);
            FUN3(VAR2);
            VAR5 = 7 + (FUN3(VAR2) >> 2);
            goto VAR20;
        case VAR33:
            VAR5 = 12;
            goto VAR20;
        case VAR34:
        case VAR35:
        case VAR36:
        case VAR37:
        case VAR38:
            break;
        default:
            VAR5 = 0;
        VAR20:
            VAR6 -= VAR5;
            if (VAR6 < 0)
            {
                goto VAR18;
            }
            while (VAR5--)
            {
                FUN3(VAR2);
            }
            FUN11("", VAR39, VAR3);
            break;
        VAR18:
            VAR2->VAR3->VAR15 = VAR14;
            break;
        }
    }
    VAR2->VAR40 = 0;
}