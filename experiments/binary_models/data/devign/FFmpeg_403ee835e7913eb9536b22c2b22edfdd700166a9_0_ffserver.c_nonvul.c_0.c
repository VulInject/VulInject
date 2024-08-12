static int FUN1(VAR1 *VAR2, int VAR3, struct VAR4 *VAR5, VAR1 *VAR6);
static const char *VAR7;
static const char *VAR8;
static const char *VAR9 = "";
static int VAR10;
static int VAR11;
static int VAR12;
static int VAR13;
static unsigned int VAR14 = 2000;
static unsigned int VAR15 = 5;
static unsigned int VAR16;
static uint64_t VAR17 = 1000;
static uint64_t VAR18;
static int64_t VAR19;
static AVLFG VAR20;
static VAR21 *VAR22 = NULL;
static int FUN2(struct VAR23 *VAR24, const char *VAR25)
{
    if (!FUN3(VAR25, VAR24))
    {
        struct VAR26 *VAR27, *VAR28;
        struct addrinfo VAR29;
        memset(&VAR29, 0, sizeof(VAR29));
        VAR29.VAR30 = VAR31;
        if (getaddrinfo(VAR25, NULL, &VAR29, &VAR27))
            return -1;
        for (VAR28 = VAR27; VAR28; VAR28 = VAR28->VAR32)
        {
            if (VAR28->VAR30 == VAR31)
            {
                *VAR24 = ((struct VAR4 *)VAR28->VAR33)->VAR24;
                FUN4(VAR27);
                return 0;
            }
        }
        FUN4(VAR27);
        return -1;
        struct VAR34 *VAR35;
        VAR35 = FUN5(VAR25);
        if (!VAR35)
            return -1;
        memcpy(VAR24, VAR35->VAR36[0], sizeof(struct VAR23));
    }
    return 0;
}