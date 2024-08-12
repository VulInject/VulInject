static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    unsigned int VAR9;
    int VAR10;
    FUN2(VAR2->VAR11, VAR12);
    VAR9 = VAR3 >> (VAR7->VAR13 - VAR14);
    if (VAR9 < VAR7->VAR15)
    {
        uint64_t VAR16 = VAR7->VAR17[VAR9] & VAR18;
        if (VAR16)
        {
            return FUN3(VAR2, VAR16, (void **)VAR5);
            *VAR5 = NULL;
            VAR10 = FUN4(VAR2, VAR7->VAR19);
            if (VAR10 < 0)
            {
                return VAR10;
                int64_t VAR20 = FUN5(VAR2, VAR7->VAR21);
                if (VAR20 < 0)
                {
                    return VAR20;
                    fprintf(VAR22, "" VAR23 "" VAR23 "", VAR9, VAR3 << VAR7->VAR13, VAR20);
                    if (FUN6(VAR7, VAR20, VAR3 << VAR7->VAR13))
                    {
                        VAR10 = FUN7(VAR2, VAR7->VAR24, VAR20, (void **)VAR5);
                        if (VAR10 < 0)
                        {
                            goto VAR25;
                            memset(*VAR5, 0, VAR7->VAR21);
                            int VAR26 = (VAR20 >> VAR7->VAR13) & ((1 << (VAR7->VAR13 - VAR14)) - 1);
                            (*VAR5)[VAR26] = FUN8(1);
                        }
                        else
                        {
                            VAR10 = FUN9(VAR2, VAR20, VAR7->VAR21, 1, VAR27);
                            if (VAR10 < 0)
                            {
                                goto VAR25;
                                VAR10 = FUN4(VAR2, VAR7->VAR24);
                                if (VAR10 < 0)
                                {
                                    goto VAR25;
                                    VAR10 = FUN7(VAR2, VAR7->VAR24, VAR20, (void **)VAR5);
                                    if (VAR10 < 0)
                                    {
                                        goto VAR25;
                                        memset(*VAR5, 0, VAR7->VAR21);
                                        FUN2(VAR2->VAR11, VAR28);
                                        FUN10(VAR7->VAR24, *VAR5);
                                        VAR10 = FUN4(VAR2, VAR7->VAR24);
                                        if (VAR10 < 0)
                                        {
                                            goto VAR25;
                                            if (VAR9 < VAR7->VAR15)
                                            {
                                                uint64_t VAR29 = FUN11(VAR20);
                                                FUN2(VAR2->VAR11, VAR30);
                                                VAR10 = FUN12(VAR2->VAR11, VAR7->VAR31 + VAR9 * sizeof(VAR32), &VAR29, sizeof(VAR29));
                                                if (VAR10 < 0)
                                                {
                                                    goto VAR25;
                                                    VAR7->VAR17[VAR9] = VAR20;
                                                    return -VAR33;
                                                    VAR10 = FUN13(VAR2, VAR7->VAR24, (void **)VAR5);
                                                    if (VAR10 < 0)
                                                    {
                                                        goto VAR25;
                                                        FUN2(VAR2->VAR11, VAR34);
                                                        uint64_t VAR35 = 1 << (VAR7->VAR13 - VAR14);
                                                        uint64_t VAR36 = FUN14(VAR3, VAR35);
                                                        uint64_t VAR37 = FUN15(VAR7, VAR36 + 1);
                                                        uint64_t VAR38;
                                                        uint64_t VAR39;
                                                        do
                                                        {
                                                            uint64_t VAR40 = FUN16(VAR7, VAR37 * sizeof(VAR32));
                                                            VAR39 = 1 + ((VAR40 + VAR35 - 1) / VAR35);
                                                            uint64_t VAR41 = VAR40 + VAR39;
                                                            VAR38 = VAR37;
                                                            VAR37 = FUN15(VAR7, VAR36 + ((VAR41 + VAR35 - 1) / VAR35));
                                                        } while (VAR38 != VAR37);
                                                        fprintf(VAR22, "" VAR42 "" VAR43 "", VAR7->VAR15, VAR37);
                                                        uint64_t VAR44 = (VAR36 * VAR35) * VAR7->VAR21;
                                                        uint64_t VAR45 = VAR44 + VAR39 * VAR7->VAR21;
                                                        VAR4 *VAR46 = FUN17(VAR39 * VAR7->VAR21);
                                                        VAR32 *VAR47 = FUN17(VAR37 * sizeof(VAR32));
                                                        memcpy(VAR47, VAR7->VAR17, VAR7->VAR15 * sizeof(VAR32));
                                                        VAR47[VAR9] = VAR20;
                                                        int VAR48;
                                                        for (VAR48 = 0; VAR48 < VAR39; VAR48++)
                                                        {
                                                            VAR47[VAR36 + VAR48] = VAR44 + (VAR48 * VAR7->VAR21);
                                                            uint64_t VAR40 = FUN16(VAR7, VAR37 * sizeof(VAR32));
                                                            int VAR49 = 0;
                                                            for (VAR48 = 0; VAR48 < VAR40 + VAR39; VAR48++)
                                                            {
                                                                VAR46[VAR49++] = FUN8(1);
                                                                FUN2(VAR2->VAR11, VAR50);
                                                                VAR10 = FUN12(VAR2->VAR11, VAR44, VAR46, VAR39 * VAR7->VAR21);
                                                                FUN18(VAR46);
                                                                if (VAR10 < 0)
                                                                {
                                                                    goto VAR51;
                                                                    for (VAR48 = 0; VAR48 < VAR37; VAR48++)
                                                                    {
                                                                        FUN19(&VAR47[VAR48]);
                                                                        FUN2(VAR2->VAR11, VAR52);
                                                                        VAR10 = FUN12(VAR2->VAR11, VAR45, VAR47, VAR37 * sizeof(VAR32));
                                                                        if (VAR10 < 0)
                                                                        {
                                                                            goto VAR51;
                                                                            for (VAR48 = 0; VAR48 < VAR37; VAR48++)
                                                                            {
                                                                                FUN20(&VAR47[VAR48]);
                                                                                uint8_t VAR53[12];
                                                                                FUN21((VAR32 *)VAR53, VAR45);
                                                                                FUN22((VAR54 *)(VAR53 + 8), VAR40);
                                                                                FUN2(VAR2->VAR11, VAR55);
                                                                                VAR10 = FUN12(VAR2->VAR11, FUN23(VAR56, VAR31), VAR53, sizeof(VAR53));
                                                                                if (VAR10 < 0)
                                                                                {
                                                                                    goto VAR51;
                                                                                    uint64_t VAR57 = VAR7->VAR31;
                                                                                    uint64_t VAR58 = VAR7->VAR15;
                                                                                    FUN18(VAR7->VAR17);
                                                                                    VAR7->VAR17 = VAR47;
                                                                                    VAR7->VAR15 = VAR37;
                                                                                    VAR7->VAR31 = VAR45;
                                                                                    FUN24(VAR2, VAR57, VAR58 * sizeof(VAR32), VAR59);
                                                                                    VAR10 = FUN3(VAR2, VAR20, (void **)VAR5);
                                                                                    if (VAR10 < 0)
                                                                                    {
                                                                                        return VAR10;
                                                                                        return -VAR33;
                                                                                    VAR51:
                                                                                        FUN18(VAR47);
                                                                                    VAR25:
                                                                                        if (*VAR5 != NULL)
                                                                                        {
                                                                                            FUN13(VAR2, VAR7->VAR24, (void **)VAR5);
                                                                                            return VAR10