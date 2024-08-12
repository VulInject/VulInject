static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7 = VAR2;
    qxl_async_io VAR8 = VAR9;
    uint32_t VAR10 = VAR7;
    switch (VAR7)
    {
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
    case VAR18:
    case VAR19:
        break;
    default:
        if (VAR6->VAR20 != VAR21)
        {
            break;
        }
        FUN2(VAR6, 1, "", VAR22, VAR7, FUN3(VAR7));
        if (VAR7 >= VAR23 && VAR7 <= VAR24)
        {
            FUN4(VAR6, VAR25);
        }
        return;
    }
    VAR10 = VAR7;
    switch (VAR7)
    {
    case VAR23:
        VAR7 = VAR26;
        goto VAR27;
    case VAR18:
        VAR7 = VAR13;
        goto VAR27;
    case VAR19:
        VAR7 = VAR15;
        goto VAR27;
    case VAR28:
        VAR7 = VAR29;
        goto VAR27;
    case VAR30:
        VAR7 = VAR31;
        goto VAR27;
    case VAR24:
        VAR7 = VAR32;
        goto VAR27;
    case VAR33:
    VAR27:
        VAR8 = VAR34;
        FUN5(&VAR6->VAR35);
        if (VAR6->VAR36 != VAR37)
        {
            FUN6(VAR6, "", VAR7, VAR6->VAR36);
            FUN7(&VAR6->VAR35);
            return;
        }
        VAR6->VAR36 = VAR10;
        FUN7(&VAR6->VAR35);
        FUN2(VAR6, 2, "" VAR38 "", VAR7, VAR3);
        break;
    default:
        break;
    }
    switch (VAR7)
    {
    case VAR26:
    {
        QXLRect update = VAR6->VAR39->VAR40;
        FUN8(VAR6, VAR6->VAR39->VAR41, &update, NULL, 0, 0, VAR8);
        break;
    }
    case VAR42:
        FUN9(&VAR6->VAR43);
        break;
    case VAR44:
        FUN9(&VAR6->VAR43);
        break;
    case VAR16:
        FUN10(VAR6);
        break;
    case VAR45:
        if (!FUN11(&VAR6->VAR39->VAR46))
        {
            break;
        }
        VAR6->VAR47 = 1;
        FUN12(VAR6);
        VAR6->VAR47 = 0;
        break;
    case VAR12:
        FUN2(VAR6, 1, "", (int)VAR3);
        FUN13(VAR6, VAR3, 0);
        break;
    case VAR17:
        if (VAR6->VAR48)
        {
            fprintf(VAR49, "" VAR38 "", VAR6->VAR50, FUN14(VAR51), VAR6->VAR39->VAR52);
        }
        break;
    case VAR11:
        FUN2(VAR6, 1, "");
        FUN15(VAR6, 0);
        break;
    case VAR13:
        if (VAR3 >= VAR53)
        {
            FUN6(VAR6, "");
            break;
        }
        if (VAR6->VAR54[VAR3].VAR55)
        {
            FUN6(VAR6, "");
            break;
        }
        VAR6->VAR54[VAR3].VAR56 = VAR6->VAR39->VAR57;
        FUN16(VAR6, VAR3, 0, VAR8);
        break;
    case VAR14:
        if (VAR3 >= VAR53)
        {
            FUN6(VAR6, "");
            break;
        }
        FUN17(VAR6, VAR3);
        break;
    case VAR15:
        if (VAR3 != 0)
        {
            FUN6(VAR6, "", VAR8);
            goto VAR58;
        }
        FUN2(VAR6, 1, "", VAR8);
        VAR6->VAR59.VAR60 = VAR6->VAR39->VAR61;
        FUN18(VAR6, 0, VAR8);
        break;
    case VAR29:
        if (VAR3 != 0)
        {
            FUN6(VAR6, "", VAR8);
            goto VAR58;
        }
        FUN2(VAR6, 1, "", VAR8, FUN19(VAR6->VAR20));
        if (!FUN20(VAR6, VAR8))
        {
            FUN2(VAR6, 1, "", FUN19(VAR6->VAR20));
            goto VAR58;
        }
        break;
    case VAR31:
        if (VAR3 >= VAR62)
        {
            FUN6(VAR6, ""
                             "",
                          VAR8, VAR3);
            goto VAR58;
        }
        FUN21(VAR6, VAR3, VAR8);
        break;
    case VAR63:
    {
        VAR64 *VAR65 = &VAR6->VAR39->VAR46;
        if (VAR65->VAR66 - VAR65->VAR67 + 1 == VAR65->VAR68)
        {
            fprintf(VAR49, "", VAR65->VAR66, VAR65->VAR67);
        }
        FUN22(VAR6, 1);
        FUN2(VAR6, 1, "", FUN19(VAR6->VAR20), VAR6->VAR69.VAR70, VAR6->VAR71, VAR6->VAR72);
        break;
    }
    case VAR33:
        FUN2(VAR6, 1, ""
                     "" VAR38 "",
               VAR3, FUN19(VAR6->VAR20), VAR6->VAR69.VAR70, VAR6->VAR71);
        FUN23(VAR6);
        break;
    case VAR32:
        VAR6->VAR20 = VAR73;
        FUN24(VAR6, VAR8);
        break;
    default:
        fprintf(VAR49, "", VAR74, VAR7);
        FUN25();
    }
    return;
VAR58:
    if (VAR8)
    {
        FUN4(VAR6, VAR25);
        FUN5(&VAR6->VAR35);
        VAR6->VAR36 = VAR37;
        FUN7(&VAR6->VAR35);
    }
}