static int FUN1(VAR1 *VAR2)
{
    struct
    {
        struct kvm_msrs VAR3;
        struct kvm_msr_entry VAR4[100];
    } VAR5;
    struct VAR6 *VAR7 = VAR5.VAR4;
    int VAR8, VAR9, VAR10;
    VAR10 = 0;
    VAR7[VAR10++].VAR11 = VAR12;
    VAR7[VAR10++].VAR11 = VAR13;
    VAR7[VAR10++].VAR11 = VAR14;
    if (VAR15)
    {
        VAR7[VAR10++].VAR11 = VAR16;
    }
    if (VAR17)
    {
        VAR7[VAR10++].VAR11 = VAR18;
    }
    VAR7[VAR10++].VAR11 = VAR19;
    if (VAR20)
    {
        VAR7[VAR10++].VAR11 = VAR21;
        VAR7[VAR10++].VAR11 = VAR22;
        VAR7[VAR10++].VAR11 = VAR23;
        VAR7[VAR10++].VAR11 = VAR24;
    }
    VAR7[VAR10++].VAR11 = VAR25;
    VAR7[VAR10++].VAR11 = VAR26;
    VAR7[VAR10++].VAR11 = VAR27;
    if (VAR2->VAR28)
    {
        VAR7[VAR10++].VAR11 = VAR29;
        VAR7[VAR10++].VAR11 = VAR30;
        for (VAR9 = 0; VAR9 < (VAR2->VAR28 & 0xff) * 4; VAR9++)
        {
            VAR7[VAR10++].VAR11 = VAR31 + VAR9;
        }
    }
    VAR5.VAR3.VAR32 = VAR10;
    VAR8 = FUN2(VAR2, VAR33, &VAR5);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    for (VAR9 = 0; VAR9 < VAR8; VAR9++)
    {
        switch (VAR7[VAR9].VAR11)
        {
        case VAR12:
            VAR2->VAR34 = VAR7[VAR9].VAR35;
            break;
        case VAR13:
            VAR2->VAR36 = VAR7[VAR9].VAR35;
            break;
        case VAR14:
            VAR2->VAR37 = VAR7[VAR9].VAR35;
            break;
        case VAR16:
            VAR2->VAR38 = VAR7[VAR9].VAR35;
            break;
        case VAR21:
            VAR2->VAR39 = VAR7[VAR9].VAR35;
            break;
        case VAR22:
            VAR2->VAR40 = VAR7[VAR9].VAR35;
            break;
        case VAR23:
            VAR2->VAR41 = VAR7[VAR9].VAR35;
            break;
        case VAR24:
            VAR2->VAR42 = VAR7[VAR9].VAR35;
            break;
        case VAR19:
            VAR2->VAR43 = VAR7[VAR9].VAR35;
            break;
        case VAR18:
            VAR2->VAR44 = VAR7[VAR9].VAR35;
            break;
        case VAR25:
            VAR2->VAR45 = VAR7[VAR9].VAR35;
            break;
        case VAR26:
            VAR2->VAR46 = VAR7[VAR9].VAR35;
            break;
        case VAR29:
            VAR2->VAR47 = VAR7[VAR9].VAR35;
            break;
        case VAR30:
            VAR2->VAR48 = VAR7[VAR9].VAR35;
            break;
        default:
            if (VAR7[VAR9].VAR11 >= VAR31 && VAR7[VAR9].VAR11 < VAR31 + (VAR2->VAR28 & 0xff) * 4)
            {
                VAR2->VAR49[VAR7[VAR9].VAR11 - VAR31] = VAR7[VAR9].VAR35;
            }
            break;
        case VAR27:
            VAR2->VAR50 = VAR7[VAR9].VAR35;
            break;
        }
    }
    return 0;
}