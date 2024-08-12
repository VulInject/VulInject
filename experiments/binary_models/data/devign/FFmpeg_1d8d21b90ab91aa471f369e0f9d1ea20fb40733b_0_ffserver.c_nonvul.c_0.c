static int FUN1(VAR1 *VAR2, VAR3 **VAR4, struct in_addr VAR5);
static VAR6 *FUN2(struct VAR7 *VAR8, VAR1 *VAR2, const char *VAR9, enum RTSPLowerTransport VAR10);
static int FUN3(VAR6 *VAR11, int VAR12, struct VAR7 *VAR13, VAR6 *VAR14);
static const char *VAR15;
static const char *VAR16;
static int VAR17;
static int VAR18;
static int VAR19;
static unsigned int VAR20 = 2000;
static unsigned int VAR21 = 5;
static unsigned int VAR22;
static uint64_t VAR23 = 1000;
static uint64_t VAR24;
static int64_t VAR25;
static AVLFG VAR26;
static VAR27 *VAR28 = NULL;
static void FUN4(char *VAR29)
{
    while (VAR29 && *VAR29)
    {
        VAR29 += strspn(VAR29, "");
        if (*VAR29)
            *VAR29++ = '';
    }
}