static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    int VAR7 = VAR6->VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    GetBitContext VAR18;
    if (VAR7 == 0)
        return 0;
    if (VAR7 < 4)
        return -1;
    FUN2(&VAR18, VAR6->VAR3, VAR7 * 8);
    VAR10->VAR19 = 16 * (FUN3(&VAR18, 4) + 1);
    VAR10->VAR20 = FUN3(&VAR18, 12);
    VAR10->VAR21 = 16 * (FUN3(&VAR18, 4) + 1);
    VAR10->VAR22 = FUN3(&VAR18, 12);
    if (VAR10->VAR23 == 2)
    {
        FUN4(&VAR18, 6);
        if (FUN5(&VAR18))
        {
            FUN6(VAR2, "", 1);
            return VAR24;
            if (FUN5(&VAR18))
            {
                FUN6(VAR2, "", 1);
                return VAR24;
                VAR12 = VAR10->VAR20 / VAR10->VAR19;
                VAR14 = VAR10->VAR20 % VAR10->VAR19;
                VAR13 = VAR10->VAR22 / VAR10->VAR21;
                VAR15 = VAR10->VAR22 % VAR10->VAR21;
                if (VAR10->VAR25 < VAR10->VAR19 * VAR10->VAR21)
                {
                    int VAR26 = 3 * VAR10->VAR19 * VAR10->VAR21;
                    VAR10->VAR27 = FUN7(VAR10->VAR27, VAR26);
                    if (!VAR10->VAR27)
                    {
                        FUN8(VAR2, VAR28, "");
                        return FUN9(VAR29);
                        if (VAR10->VAR23 == 2)
                        {
                            VAR10->VAR30 = FUN10(VAR26);
                            if (VAR10->VAR30 <= 0)
                            {
                                FUN8(VAR2, VAR28, "");
                                return -1;
                                VAR10->VAR31 = FUN7(VAR10->VAR31, VAR10->VAR30);
                                if (!VAR10->VAR31)
                                {
                                    FUN8(VAR2, VAR28, "");
                                    return FUN9(VAR29);
                                    VAR10->VAR25 = VAR10->VAR19 * VAR10->VAR21;
                                    if (VAR2->VAR32 == 0 && VAR2->VAR33 == 0)
                                    {
                                        VAR2->VAR32 = VAR10->VAR20;
                                        VAR2->VAR33 = VAR10->VAR22;
                                        if (VAR2->VAR32 != VAR10->VAR20 || VAR2->VAR33 != VAR10->VAR22)
                                        { "" ) ;
                                            FUN8(VAR2, VAR28, "", VAR2->VAR33, VAR2->VAR32, VAR10->VAR22, VAR10->VAR20);
                                            VAR10->VAR34 = (VAR6->VAR35 & VAR36) && (VAR10->VAR23 == 2);
                                            if (VAR10->VAR34)
                                            {
                                                VAR10->VAR37 = FUN7(VAR10->VAR37, VAR6->VAR8);
                                                memcpy(VAR10->VAR37, VAR6->VAR3, VAR6->VAR8);
                                                VAR10->VAR38 = FUN7(VAR10->VAR38, (VAR13 + !!VAR15) * (VAR12 + !!VAR14) * sizeof(VAR10->VAR38[0]));
                                                FUN11(VAR2, "", VAR10->VAR20, VAR10->VAR22, VAR10->VAR19, VAR10->VAR21, VAR12, VAR13, VAR14, VAR15);
                                                VAR10->VAR39.VAR40 = 3;
                                                VAR10->VAR39.VAR41 = VAR42 | VAR43 | VAR44;
                                                if (VAR2->FUN12(VAR2, &VAR10->VAR39) < 0)
                                                {
                                                    FUN8(VAR2, VAR28, "");
                                                    return -1;
                                                    for (VAR17 = 0; VAR17 < VAR13 + (VAR15 ? 1 : 0); VAR17++)
                                                    {
                                                        int VAR45 = VAR17 * VAR10->VAR21;
                                                        int VAR46 = (VAR17 < VAR13) ? VAR10->VAR21 : VAR15;
                                                        for (VAR16 = 0; VAR16 < VAR12 + (VAR14 ? 1 : 0); VAR16++)
                                                        {
                                                            int VAR47 = VAR16 * VAR10->VAR19;
                                                            int VAR48 = (VAR16 < VAR12) ? VAR10->VAR19 : VAR14;
                                                            int VAR49 = 0;
                                                            int VAR8 = FUN3(&VAR18, 16);
                                                            VAR10->VAR50 = 0;
                                                            VAR10->VAR51 = 0;
                                                            VAR10->VAR52 = 0;
                                                            VAR10->VAR53 = 0;
                                                            VAR10->VAR54 = VAR46;
                                                            if (8 * VAR8 > FUN13(&VAR18))
                                                            {
                                                                VAR2->FUN14(VAR2, &VAR10->VAR39);
                                                                VAR10->VAR39.VAR3[0] = NULL;
                                                                if (VAR10->VAR23 == 2 && VAR8)
                                                                {
                                                                    FUN4(&VAR18, 3);
                                                                    VAR10->VAR50 = FUN3(&VAR18, 2);
                                                                    VAR49 = FUN5(&VAR18);
                                                                    VAR10->VAR51 = FUN5(&VAR18);
                                                                    VAR10->VAR52 = FUN5(&VAR18);
                                                                    if (VAR10->VAR50 != 0 && VAR10->VAR50 != 2)
                                                                    { "" , VAR16 , VAR17 , VAR10 -> VAR50 ) ;
                                                                        if (VAR49)
                                                                        {
                                                                            VAR10->VAR53 = FUN3(&VAR18, 8);
                                                                            VAR10->VAR54 = FUN3(&VAR18, 8);
                                                                            FUN8(VAR2, VAR55, "", VAR16, VAR17, VAR10->VAR53, VAR10->VAR54);
                                                                            VAR8 -= 2;
                                                                            if (VAR10->VAR52)
                                                                                FUN8(VAR2, VAR55, "", VAR16, VAR17);
                                                                            if (VAR10->VAR51)
                                                                            {
                                                                                int VAR56 = FUN3(&VAR18, 8);
                                                                                int VAR57 = FUN3(&VAR18, 8);
                                                                                FUN8(VAR2, VAR55, "", VAR16, VAR17, VAR56, VAR57);
                                                                                VAR8 -= 2;
                                                                                FUN6(VAR2, "", 1);
                                                                                return VAR24;
                                                                                VAR8--;
                                                                                if (VAR49)
                                                                                {
                                                                                    int VAR58;
                                                                                    int VAR59 = (VAR10->VAR22 - VAR45 - 1) * VAR10->VAR39.VAR60[0];
                                                                                    for (VAR58 = 0; VAR58 < VAR46; VAR58++)
                                                                                        memcpy(VAR10->VAR39.VAR3[0] + VAR59 - VAR58 * VAR10->VAR39.VAR60[0] + VAR47 * 3, VAR10->VAR61 + VAR59 - VAR58 * VAR10->VAR39.VAR60[0] + VAR47 * 3, VAR48 * 3);
                                                                                    if (VAR8)
                                                                                    {
                                                                                        if (FUN15(VAR2, VAR6, &VAR18, VAR8, VAR48, VAR46, VAR47, VAR45, VAR16 + VAR17 * (VAR12 + !!VAR14))) "" , VAR16 , VAR17 ) ;
                                                                                        if (VAR10->VAR34 && VAR10->VAR23 == 2)
                                                                                        {
                                                                                            VAR10->VAR61 = FUN16(VAR10->VAR39.VAR60[0] * VAR2->VAR33);
                                                                                            FUN8(VAR2, VAR28, "");
                                                                                            return FUN9(VAR29);
                                                                                            memcpy(VAR10->VAR61, VAR10->VAR39.VAR3[0], VAR10->VAR39.VAR60[0] * VAR2->VAR33);
                                                                                            *VAR4 = sizeof(VAR62);
                                                                                            *(VAR62 *)VAR3 = VAR10->VAR39;
                                                                                            if ((FUN17(&VAR18) / 8) != VAR7)
                                                                                                FUN8(VAR2, VAR28, "", VAR7, (FUN17(&VAR18) / 8));
                                                                                            return VAR7;