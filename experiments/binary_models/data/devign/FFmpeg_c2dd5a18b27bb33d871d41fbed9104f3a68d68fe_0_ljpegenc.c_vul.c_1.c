static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *const VAR9 = VAR2->VAR10;
    VAR11 *const VAR12 = VAR9->VAR13;
    const int VAR14 = VAR9->VAR14;
    const int VAR15 = VAR9->VAR15;
    VAR5 *const VAR16 = &VAR9->VAR17.VAR18;
    const int VAR19 = VAR2->VAR20 + 1;
    const int VAR21 = (VAR14 + VAR9->VAR22[0] - 1) / VAR9->VAR22[0];
    const int VAR23 = (VAR15 + VAR9->VAR24[0] - 1) / VAR9->VAR24[0];
    int VAR25, VAR26 = VAR27;
    if (VAR2->VAR28 == VAR29)
        VAR26 += VAR14 * VAR15 * 3 * 4;
    else
    {
        VAR26 += VAR21 * VAR23 * 3 * 4 * VAR9->VAR22[0] * VAR9->VAR24[0];
        if ((VAR25 = FUN2(VAR2, VAR4, VAR26)) < 0)
            FUN3(&VAR9->VAR30, VAR4->VAR31, VAR4->VAR32);
        *VAR16 = *VAR6;
        VAR16->VAR33 = VAR34;
        VAR16->VAR35 = 1;
        FUN4(VAR9);
        VAR9->VAR36 = FUN5(&VAR9->VAR30);
        if (VAR2->VAR28 == VAR37 || VAR2->VAR28 == VAR29 || VAR2->VAR28 == VAR38)
        {
            int VAR39, VAR40, VAR41;
            const int VAR42 = VAR16->VAR42[0];
            FUN6(*VAR43)[4] = (void *)VAR9->VAR44;
            int VAR45[3], VAR46[3], VAR47[3];
            for (VAR41 = 0; VAR41 < 3; VAR41++)
            {
                VAR43[0][VAR41] = 1 << (9 - 1);
                for (VAR40 = 0; VAR40 < VAR15; VAR40++)
                {
                    const int VAR48 = VAR40 ? VAR19 : 1;
                    VAR49 *VAR50 = VAR16->VAR31[0] + (VAR42 * VAR40);
                    if (VAR9->VAR30.VAR51 - VAR9->VAR30.VAR52 - (FUN5(&VAR9->VAR30) >> 3) < VAR14 * 3 * 4)
                    {
                        FUN7(VAR9->VAR2, VAR53, "");
                        return -1;
                        for (VAR41 = 0; VAR41 < 3; VAR41++)
                        {
                            VAR46[VAR41] = VAR45[VAR41] = VAR47[VAR41] = VAR43[0][VAR41];
                            for (VAR39 = 0; VAR39 < VAR14; VAR39++)
                            {
                                if (VAR2->VAR28 == VAR38)
                                {
                                    VAR43[VAR39][1] = VAR50[3 * VAR39 + 0] - VAR50[3 * VAR39 + 1] + 0x100;
                                    VAR43[VAR39][2] = VAR50[3 * VAR39 + 2] - VAR50[3 * VAR39 + 1] + 0x100;
                                    VAR43[VAR39][0] = (VAR50[3 * VAR39 + 0] + 2 * VAR50[3 * VAR39 + 1] + VAR50[3 * VAR39 + 2]) >> 2;
                                }
                                else
                                {
                                    VAR43[VAR39][1] = VAR50[4 * VAR39 + 0] - VAR50[4 * VAR39 + 1] + 0x100;
                                    VAR43[VAR39][2] = VAR50[4 * VAR39 + 2] - VAR50[4 * VAR39 + 1] + 0x100;
                                    VAR43[VAR39][0] = (VAR50[4 * VAR39 + 0] + 2 * VAR50[4 * VAR39 + 1] + VAR50[4 * VAR39 + 2]) >> 2;
                                    for (VAR41 = 0; VAR41 < 3; VAR41++)
                                    {
                                        int VAR54, VAR55;
                                        FUN8(VAR54, VAR47[VAR41], VAR46[VAR41], VAR45[VAR41], VAR48);
                                        VAR47[VAR41] = VAR46[VAR41];
                                        VAR46[VAR41] = VAR43[VAR39 + 1][VAR41];
                                        VAR45[VAR41] = VAR43[VAR39][VAR41];
                                        VAR55 = ((VAR45[VAR41] - VAR54 + 0x100) & 0x1FF) - 0x100;
                                        if (VAR41 == 0)
                                            FUN9(VAR9, VAR55, VAR12->VAR56, VAR12->VAR57);
                                        else
                                            FUN9(VAR9, VAR55, VAR12->VAR58, VAR12->VAR59);
                                    }
                                    else
                                    {
                                        int VAR60, VAR61, VAR41;
                                        for (VAR61 = 0; VAR61 < VAR23; VAR61++)
                                        {
                                            if (VAR9->VAR30.VAR51 - VAR9->VAR30.VAR52 - (FUN5(&VAR9->VAR30) >> 3) < VAR21 * 4 * 3 * VAR9->VAR22[0] * VAR9->VAR24[0])
                                            {
                                                FUN7(VAR9->VAR2, VAR53, "");
                                                return -1;
                                                for (VAR60 = 0; VAR60 < VAR21; VAR60++)
                                                {
                                                    if (VAR60 == 0 || VAR61 == 0)
                                                    {
                                                        for (VAR41 = 0; VAR41 < 3; VAR41++)
                                                        {
                                                            VAR49 *VAR50;
                                                            int VAR39, VAR40, VAR62, VAR63, VAR42;
                                                            VAR62 = VAR9->VAR22[VAR41];
                                                            VAR63 = VAR9->VAR24[VAR41];
                                                            VAR42 = VAR16->VAR42[VAR41];
                                                            for (VAR40 = 0; VAR40 < VAR63; VAR40++)
                                                            {
                                                                for (VAR39 = 0; VAR39 < VAR62; VAR39++)
                                                                {
                                                                    int VAR54;
                                                                    VAR50 = VAR16->VAR31[VAR41] + (VAR42 * (VAR63 * VAR61 + VAR40)) + (VAR62 * VAR60 + VAR39);
                                                                    if (VAR40 == 0 && VAR61 == 0)
                                                                    {
                                                                        if (VAR39 == 0 && VAR60 == 0)
                                                                        {
                                                                            VAR54 = 128;
                                                                        }
                                                                        else
                                                                        {
                                                                            VAR54 = VAR50[-1];
                                                                        }
                                                                        else
                                                                        {
                                                                            if (VAR39 == 0 && VAR60 == 0)
                                                                            {
                                                                                VAR54 = VAR50[-VAR42];
                                                                            }
                                                                            else
                                                                            {
                                                                                FUN8(VAR54, VAR50[-VAR42 - 1], VAR50[-VAR42], VAR50[-1], VAR19);
                                                                                if (VAR41 == 0)
                                                                                    FUN9(VAR9, *VAR50 - VAR54, VAR12->VAR56, VAR12->VAR57);
                                                                                else
                                                                                    FUN9(VAR9, *VAR50 - VAR54, VAR12->VAR58, VAR12->VAR59);
                                                                            }
                                                                            else
                                                                            {
                                                                                for (VAR41 = 0; VAR41 < 3; VAR41++)
                                                                                {
                                                                                    VAR49 *VAR50;
                                                                                    int VAR39, VAR40, VAR62, VAR63, VAR42;
                                                                                    VAR62 = VAR9->VAR22[VAR41];
                                                                                    VAR63 = VAR9->VAR24[VAR41];
                                                                                    VAR42 = VAR16->VAR42[VAR41];
                                                                                    for (VAR40 = 0; VAR40 < VAR63; VAR40++)
                                                                                    {
                                                                                        for (VAR39 = 0; VAR39 < VAR62; VAR39++)
                                                                                        {
                                                                                            int VAR54;
                                                                                            VAR50 = VAR16->VAR31[VAR41] + (VAR42 * (VAR63 * VAR61 + VAR40)) + (VAR62 * VAR60 + VAR39);
                                                                                            FUN8(VAR54, VAR50[-VAR42 - 1], VAR50[-VAR42], VAR50[-1], VAR19);
                                                                                            if (VAR41 == 0)
                                                                                                FUN9(VAR9, *VAR50 - VAR54, VAR12->VAR56, VAR12->VAR57);
                                                                                            else
                                                                                                FUN9(VAR9, *VAR50 - VAR54, VAR12->VAR58, VAR12->VAR59);
                                                                                            FUN10();
                                                                                            FUN11(VAR9->VAR64 == VAR9->VAR36 >> 3);
                                                                                            FUN12(VAR9);
                                                                                            FUN13(VAR9);
                                                                                            VAR9->VAR65++;
                                                                                            FUN14(&VAR9->VAR30);
                                                                                            VAR4->VAR32 = FUN15(&VAR9->VAR30) - VAR9->VAR30.VAR52;
                                                                                            VAR4->VAR66 |= VAR67;
                                                                                            *VAR7 = 1;
                                                                                            return 0;