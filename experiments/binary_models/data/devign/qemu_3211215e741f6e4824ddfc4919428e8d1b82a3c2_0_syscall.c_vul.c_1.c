static VAR1 FUN1(const VAR2 *VAR3, VAR4 *VAR5, int VAR6, int VAR7, abi_long VAR8)
{
    void *VAR9;
    struct VAR10 *VAR11;
    abi_long VAR12;
    uint32_t VAR13;
    int VAR14;
    const VAR15 *VAR16 = VAR3->VAR16;
    abi_long VAR17;
    void *VAR18 = NULL;
    char *VAR19;
    VAR16++;
    VAR14 = FUN2(VAR16, 0);
    VAR9 = FUN3(VAR20, VAR8, VAR14, 1);
    FUN4(VAR5, VAR9, VAR16, VAR21);
    FUN5(VAR9, VAR8, 0);
    VAR18 = FUN6(((struct VAR10 *)VAR5)->VAR22 * 2);
    memcpy(VAR18, VAR5, VAR14);
    VAR5 = VAR18;
    VAR11 = VAR18;
    VAR12 = VAR8 + VAR11->VAR23;
    if ((VAR12 - VAR8) < 0)
    {
        VAR17 = -VAR24;
        VAR13 = VAR11->VAR22 - VAR11->VAR23;
        VAR19 = (char *)VAR11 + VAR11->VAR23;
        VAR9 = FUN3(VAR20, VAR12, VAR13, 1);
        switch (VAR3->VAR25)
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
        case VAR36:
            break;
        case VAR37:
        case VAR38:
            memcpy(VAR19, VAR9, VAR13);
            break;
        case VAR39:
            memcpy(VAR19, VAR9, VAR13);
            *(VAR40 *)VAR19 = FUN7(*(VAR40 *)VAR9);
            break;
        case VAR41:
        {
            void *VAR42 = VAR9;
            void *VAR43 = VAR19;
            const argtype VAR16[] = {FUN8(VAR44)};
            int VAR45 = FUN2(VAR16, 0);
            int VAR46;
            for (VAR46 = 0; VAR46 < VAR11->VAR47; VAR46++)
            {
                struct VAR48 *VAR49 = VAR43;
                uint32_t VAR50;
                int VAR51;
                FUN4(VAR49, VAR42, VAR16, VAR21);
                VAR51 = strlen((char *)VAR42 + VAR45) + 1;
                VAR50 = VAR49->VAR50;
                VAR49->VAR50 = sizeof(*VAR49) + VAR51;
                strcpy((char *)&VAR49[1], VAR42 + VAR45);
                VAR42 += VAR50;
                VAR43 += VAR49->VAR50;
                break;
            default:
                VAR17 = -VAR52;
                FUN5(VAR9, VAR12, 0);
                FUN5(VAR9, VAR12, 0);
                VAR17 = FUN9(FUN10(VAR6, VAR3->VAR25, VAR5));
                if (!FUN11(VAR17))
                {
                    VAR12 = VAR8 + VAR11->VAR23;
                    VAR13 = VAR11->VAR22 - VAR11->VAR23;
                    VAR9 = FUN3(VAR53, VAR12, VAR13, 0);
                    switch (VAR3->VAR25)
                    {
                    case VAR26:
                    case VAR28:
                    case VAR29:
                    case VAR37:
                    case VAR30:
                    case VAR31:
                    case VAR41:
                    case VAR34:
                    case VAR39:
                    case VAR38:
                        break;
                    case VAR27:
                    {
                        struct VAR54 *VAR55 = (void *)VAR11 + VAR11->VAR23;
                        uint32_t VAR56 = VAR13;
                        void *VAR43 = VAR9;
                        const argtype VAR16[] = {FUN8(VAR57)};
                        int VAR58 = 12;
                        while (1)
                        {
                            uint32_t VAR50 = VAR55->VAR50;
                            if (VAR50)
                            {
                                VAR55->VAR50 = VAR58 + (strlen(VAR55->VAR59) + 1);
                                if (VAR56 < VAR55->VAR50)
                                {
                                    VAR11->VAR60 |= VAR61;
                                    break;
                                    FUN4(VAR43, VAR55, VAR16, VAR62);
                                    strcpy(VAR43 + VAR58, VAR55->VAR59);
                                    VAR43 += VAR55->VAR50;
                                    VAR56 -= VAR55->VAR50;
                                    if (!VAR50)
                                    {
                                        break;
                                        VAR55 = (void *)VAR55 + VAR50;
                                        break;
                                    case VAR32:
                                    case VAR33:
                                    {
                                        struct VAR48 *VAR49 = (void *)VAR11 + VAR11->VAR23;
                                        void *VAR43 = VAR9;
                                        const argtype VAR16[] = {FUN8(VAR44)};
                                        int VAR45 = FUN2(VAR16, 0);
                                        int VAR46;
                                        for (VAR46 = 0; VAR46 < VAR11->VAR47; VAR46++)
                                        {
                                            uint32_t VAR50 = VAR49->VAR50;
                                            int VAR51 = strlen((char *)&VAR49[1]) + 1;
                                            VAR49->VAR50 = (VAR43 - VAR9) + VAR45 + VAR51;
                                            if (VAR13 < VAR49->VAR50)
                                            {
                                                VAR11->VAR60 |= VAR61;
                                                break;
                                                FUN4(VAR43, VAR49, VAR16, VAR62);
                                                strcpy(VAR43 + VAR45, (char *)&VAR49[1]);
                                                VAR43 = VAR9 + VAR49->VAR50;
                                                VAR49 = (void *)VAR11 + VAR11->VAR23 + VAR50;
                                                break;
                                            case VAR35:
                                            {
                                                void *VAR63 = (void *)VAR11 + VAR11->VAR23;
                                                int VAR64 = *(VAR65 *)VAR63;
                                                VAR40 *VAR66 = VAR63 + 8;
                                                VAR40 *VAR67 = VAR9 + 8;
                                                int VAR46;
                                                *(VAR65 *)VAR9 = FUN12(VAR64);
                                                for (VAR46 = 0; VAR46 < VAR64; VAR46++)
                                                {
                                                    *VAR67 = FUN7(*VAR66);
                                                    VAR67++;
                                                    VAR66++;
                                                    break;
                                                case VAR36:
                                                {
                                                    struct VAR68 *VAR69 = (void *)VAR11 + VAR11->VAR23;
                                                    uint32_t VAR56 = VAR13;
                                                    void *VAR43 = VAR9;
                                                    const argtype VAR16[] = {FUN8(VAR70)};
                                                    int VAR71 = FUN2(VAR16, 0);
                                                    while (1)
                                                    {
                                                        uint32_t VAR50 = VAR69->VAR50;
                                                        if (VAR50)
                                                        {
                                                            VAR69->VAR50 = VAR71 + (strlen(VAR69->VAR59) + 1);
                                                            if (VAR56 < VAR69->VAR50)
                                                            {
                                                                VAR11->VAR60 |= VAR61;
                                                                break;
                                                                FUN4(VAR43, VAR69, VAR16, VAR62);
                                                                strcpy(VAR43 + VAR71, VAR69->VAR59);
                                                                VAR43 += VAR69->VAR50;
                                                                VAR56 -= VAR69->VAR50;
                                                                if (!VAR50)
                                                                {
                                                                    break;
                                                                    VAR69 = (void *)VAR69 + VAR50;
                                                                    break;
                                                                default:
                                                                    FUN5(VAR9, VAR12, 0);
                                                                    VAR17 = -VAR52;
                                                                    FUN5(VAR9, VAR12, VAR13);
                                                                    VAR9 = FUN3(VAR53, VAR8, VAR14, 0);
                                                                    FUN4(VAR9, VAR5, VAR16, VAR62);
                                                                    FUN5(VAR9, VAR8, VAR14);
                                                                VAR72:
                                                                    FUN13(VAR18);
                                                                    return VAR17