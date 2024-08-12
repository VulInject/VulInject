VAR1 *FUN1(const char *VAR2, int VAR3)
{
    char VAR4[VAR5];
    char *VAR6 = VAR4;
    static const char VAR7[] = "";
    static const char VAR8[] = "";
    struct VAR9 *VAR10;
    char *VAR11;
    if (!VAR2)
    {
        FUN2(NULL, VAR12, "");
        return NULL;
        if (!strcmp(VAR2, ""))
        {
            const char *VAR6;
            for (VAR6 = VAR13; strchr(VAR6, ''); VAR6 = strchr(VAR6, '') + 1)
            {
                FUN3(VAR4, VAR6, FUN4(sizeof(VAR4), strchr(VAR6, '') - VAR6 + 2));
                FUN2(NULL, VAR14, "", VAR4);
                return NULL;
                VAR10 = FUN5(sizeof(VAR9));
                VAR10->VAR15 = 0;
                VAR10->VAR16 = 0;
                VAR10->VAR17[0] = 700;
                VAR10->VAR17[1] = 1500;
                VAR10->VAR17[2] = 3000;
                VAR10->VAR18 = 234;
                VAR10->VAR19 = 16;
                VAR10->VAR20 = 256 / 8;
                VAR10->VAR21 = 56 - 16 - 1;
                VAR10->VAR22 = 0.01;
                VAR10->VAR23 = 0;
                memset(VAR4, 0, VAR5);
                FUN3(VAR4, VAR2, VAR5 - 1);
                FUN2(NULL, VAR24, "", VAR2);
                for (;;)
                {
                    char *VAR25;
                    int VAR26 = 1000000;
                    int VAR27 = -1;
                    int VAR28 = -1;
                    char *VAR29;
                    char *VAR30[VAR31];
                    int VAR32;
                    int VAR33 = 0;
                    int VAR34 = 0;
                    int VAR35 = 1;
                    VAR11 = strtok(VAR6, VAR7);
                    if (VAR11 == NULL)
                        break;
                    VAR6 += strlen(VAR11) + 1;
                    VAR25 = strtok(VAR11, VAR8);
                    FUN2(NULL, VAR24, "", VAR11, VAR25);
                    if (*VAR25 == '')
                    {
                        VAR35 = 0;
                        VAR25++;
                        for (;;)
                        {
                            VAR29 = strtok(NULL, VAR8);
                            if (VAR29 == NULL)
                                break;
                            FUN2(NULL, VAR24, "", VAR29);
                            if (!strcmp("", VAR29) || !strcmp("", VAR29))
                                VAR26 = VAR3;
                            else if (!strcmp("", VAR29) || !strcmp("", VAR29))
                                VAR27 = 0;
                            else if (!strcmp("", VAR29) || !strcmp("", VAR29))
                                VAR27 = 1;
                            else if (!strcmp("", VAR29) || !strcmp("", VAR29))
                                VAR28 = 0;
                            else
                            {
                                VAR30[VAR34] = VAR29;
                                VAR34++;
                                if (VAR34 >= VAR31 - 1)
                                    break;
                                VAR30[VAR34] = NULL;
                                for (VAR32 = 0; VAR36[2 * VAR32] != NULL; VAR32++)
                                {
                                    if (!strcmp(VAR36[2 * VAR32], VAR25))
                                    {
                                        int VAR37 = strlen(VAR36[2 * VAR32 + 1]);
                                        int VAR38;
                                        int VAR39;
                                        VAR6--, *VAR6 = '';
                                        VAR38 = strlen(VAR6);
                                        VAR39 = VAR6 - VAR4 + VAR38;
                                        if (VAR39 + VAR37 >= VAR5 - 1)
                                        {
                                            memmove(VAR6 + VAR37, VAR6, VAR38 + 1);
                                            memcpy(VAR6, VAR36[2 * VAR32 + 1], VAR37);
                                            VAR33 = 1;
                                            for (VAR32 = 0; VAR40[VAR32].VAR41 != NULL; VAR32++)
                                            {
                                                if (!strcmp(VAR40[VAR32].VAR42, VAR25) || !strcmp(VAR40[VAR32].VAR41, VAR25))
                                                {
                                                    VAR10->VAR15 &= ~VAR40[VAR32].VAR43;
                                                    VAR10->VAR16 &= ~VAR40[VAR32].VAR43;
                                                    VAR33 = 1;
                                                    if (!VAR35)
                                                        break;
                                                    if (VAR26 >= VAR40[VAR32].VAR44 && VAR28)
                                                        VAR10->VAR15 |= VAR40[VAR32].VAR43;
                                                    if (VAR27 == 1 || (VAR27 == -1 && VAR40[VAR32].VAR45))
                                                        if (VAR26 >= VAR40[VAR32].VAR46)
                                                            VAR10->VAR16 |= VAR40[VAR32].VAR43;
                                                    if (VAR40[VAR32].VAR43 == VAR47)
                                                    {
                                                        int VAR48;
                                                        VAR10->VAR19 = 16;
                                                        VAR10->VAR18 = 234;
                                                        for (VAR48 = 0; VAR30[VAR48] != NULL; VAR48++)
                                                        {
                                                            if (!strcmp(VAR30[VAR48], "") || !strcmp(VAR30[VAR48], ""))
                                                            {
                                                                VAR10->VAR19 = 0;
                                                                VAR10->VAR18 = 255;
                                                                VAR34--;
                                                                else if (VAR40[VAR32].VAR43 == VAR49)
                                                                {
                                                                    int VAR48;
                                                                    int VAR50 = 0;
                                                                    for (VAR48 = 0; VAR30[VAR48] != NULL; VAR48++)
                                                                    {
                                                                        char *VAR51;
                                                                        VAR10->VAR17[VAR50] = FUN6(VAR30[VAR48], &VAR51, 0);
                                                                        if (VAR51 != VAR30[VAR48])
                                                                        {
                                                                            VAR50++;
                                                                            VAR34--;
                                                                            if (VAR50 >= 3)
                                                                                break;
                                                                            else if (VAR40[VAR32].VAR43 == VAR52 || VAR40[VAR32].VAR43 == VAR53 || VAR40[VAR32].VAR43 == VAR54 || VAR40[VAR32].VAR43 == VAR55)
                                                                            {
                                                                                int VAR48;
                                                                                for (VAR48 = 0; VAR30[VAR48] != NULL && VAR48 < 2; VAR48++)
                                                                                {
                                                                                    char *VAR51;
                                                                                    int VAR56 = FUN6(VAR30[VAR48], &VAR51, 0);
                                                                                    if (VAR51 == VAR30[VAR48])
                                                                                        break;
                                                                                    VAR34--;
                                                                                    if (VAR48 == 0)
                                                                                        VAR10->VAR20 = VAR56;
                                                                                    else
                                                                                        VAR10->VAR21 = VAR56;
                                                                                    else if (VAR40[VAR32].VAR43 == VAR57)
                                                                                    {
                                                                                        int VAR48;
                                                                                        VAR10->VAR58 = 15;
                                                                                        for (VAR48 = 0; VAR30[VAR48] != NULL && VAR48 < 1; VAR48++)
                                                                                        {
                                                                                            char *VAR51;
                                                                                            int VAR56 = FUN6(VAR30[VAR48], &VAR51, 0);
                                                                                            if (VAR51 == VAR30[VAR48])
                                                                                                break;
                                                                                            VAR34--;
                                                                                            VAR10->VAR58 = VAR56;
                                                                                            if (!VAR33)
                                                                                                VAR10->VAR23++;
                                                                                            VAR10->VAR23 += VAR34;
                                                                                            FUN2(NULL, VAR24, "", VAR10->VAR15, VAR10->VAR16);
                                                                                            if (VAR10->VAR23)
                                                                                            {
                                                                                                FUN2(NULL, VAR12, ""%VAR59\"", VAR10->VAR23, VAR2);
                                                                                                FUN7(VAR10);
                                                                                                return NULL;
                                                                                                return VAR10;