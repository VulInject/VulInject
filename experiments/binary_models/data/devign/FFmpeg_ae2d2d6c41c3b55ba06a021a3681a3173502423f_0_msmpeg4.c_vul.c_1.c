int FUN1(VAR1 *VAR2)
{
    int VAR3;
    {
        int VAR4;
        for (VAR4 = 0; VAR4 < VAR2->VAR5.VAR6; VAR4++)
            FUN2("", FUN3(&VAR2->VAR5));
        FUN2("");
        if (VAR2->VAR7 == 1)
        {
            int VAR8, VAR9;
            VAR8 = (FUN4(&VAR2->VAR5, 16) << 16) | FUN4(&VAR2->VAR5, 16);
            if (VAR8 != 0x00000100)
            {
                fprintf(VAR10, "");
                VAR9 = FUN4(&VAR2->VAR5, 5);
                VAR2->VAR11 = FUN4(&VAR2->VAR5, 2) + 1;
                if (VAR2->VAR11 != VAR12 && VAR2->VAR11 != VAR13)
                {
                    fprintf(VAR10, "");
                    {
                        static int VAR14 = 0;
                        if (VAR2->VAR11 == VAR12)
                            VAR14 = 1;
                        if (!VAR14)
                            return -1;
                        VAR2->VAR15 = FUN4(&VAR2->VAR5, 5);
                        if (VAR2->VAR11 == VAR12)
                        {
                            VAR3 = FUN4(&VAR2->VAR5, 5);
                            if (VAR2->VAR7 == 1)
                            {
                                if (VAR3 == 0 || VAR3 > VAR2->VAR16)
                                {
                                    fprintf(VAR10, "", VAR3);
                                    VAR2->VAR17 = VAR3;
                                }
                                else
                                {
                                    if (VAR3 < 0x17)
                                    {
                                        fprintf(VAR10, "", VAR3);
                                        VAR2->VAR17 = VAR2->VAR16 / (VAR3 - 0x16);
                                        switch (VAR2->VAR7)
                                        {
                                        case 1:
                                        case 2:
                                            VAR2->VAR18 = 2;
                                            VAR2->VAR19 = 2;
                                            VAR2->VAR20 = 0;
                                            break;
                                        case 3:
                                            VAR2->VAR18 = FUN5(&VAR2->VAR5);
                                            VAR2->VAR19 = FUN5(&VAR2->VAR5);
                                            VAR2->VAR20 = FUN3(&VAR2->VAR5);
                                            break;
                                        case 4:
                                            FUN6(VAR2, (2 + 5 + 5 + 17 + 7) / 8);
                                            if (VAR2->VAR21 > VAR22)
                                                VAR2->VAR23 = FUN3(&VAR2->VAR5);
                                            else
                                                VAR2->VAR23 = 0;
                                            if (!VAR2->VAR23)
                                            {
                                                VAR2->VAR18 = FUN5(&VAR2->VAR5);
                                                VAR2->VAR19 = FUN5(&VAR2->VAR5);
                                                VAR2->VAR20 = FUN3(&VAR2->VAR5);
                                                VAR2->VAR24 = 0;
                                                break;
                                                VAR2->VAR25 = 1;
                                            }
                                            else
                                            {
                                                switch (VAR2->VAR7)
                                                {
                                                case 1:
                                                case 2:
                                                    if (VAR2->VAR7 == 1)
                                                        VAR2->VAR26 = 1;
                                                    else
                                                        VAR2->VAR26 = FUN3(&VAR2->VAR5);
                                                    VAR2->VAR19 = 2;
                                                    VAR2->VAR18 = VAR2->VAR19;
                                                    VAR2->VAR20 = 0;
                                                    VAR2->VAR27 = 0;
                                                    break;
                                                case 3:
                                                    VAR2->VAR26 = FUN3(&VAR2->VAR5);
                                                    VAR2->VAR19 = FUN5(&VAR2->VAR5);
                                                    VAR2->VAR18 = VAR2->VAR19;
                                                    VAR2->VAR20 = FUN3(&VAR2->VAR5);
                                                    VAR2->VAR27 = FUN3(&VAR2->VAR5);
                                                    break;
                                                case 4:
                                                    VAR2->VAR26 = FUN3(&VAR2->VAR5);
                                                    if (VAR2->VAR21 > VAR22)
                                                        VAR2->VAR23 = FUN3(&VAR2->VAR5);
                                                    else
                                                        VAR2->VAR23 = 0;
                                                    if (!VAR2->VAR23)
                                                    {
                                                        VAR2->VAR19 = FUN5(&VAR2->VAR5);
                                                        VAR2->VAR18 = VAR2->VAR19;
                                                        VAR2->VAR20 = FUN3(&VAR2->VAR5);
                                                        VAR2->VAR27 = FUN3(&VAR2->VAR5);
                                                        VAR2->VAR24 = (VAR2->VAR28 * VAR2->VAR29 < 320 * 240 && VAR2->VAR21 <= VAR30);
                                                        break;
                                                        if (VAR2->VAR31)
                                                        {
                                                            VAR2->VAR25 ^= 1;
                                                        }
                                                        else
                                                        {
                                                            VAR2->VAR25 = 0;
                                                            VAR2->VAR32 = 0;
                                                            VAR2->VAR33 = 0;
                                                            FUN2("", VAR34++);
                                                            return 0;