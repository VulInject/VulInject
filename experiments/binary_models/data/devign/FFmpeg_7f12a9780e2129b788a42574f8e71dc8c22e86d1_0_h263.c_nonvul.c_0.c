static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8);
static int FUN2(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR9, VAR10 *VAR11);
static int FUN3(VAR1 *VAR2, int VAR5, VAR12 **VAR13);
static void FUN4(VAR1 *VAR2);
static void FUN5(VAR1 *VAR2, int VAR14, int VAR15);
static void FUN6(VAR1 *VAR2, VAR16 *VAR17);
static inline int FUN7(VAR1 *VAR2, int VAR5, int VAR18, int *VAR19, int VAR20);
static uint8_t VAR21[512];
static uint8_t VAR22[512];
static uint16_t VAR23[512];
static uint16_t VAR24[512];
static FUN8 (*VAR25)[VAR26 * 2 + 1] = NULL;
static uint8_t VAR27[VAR26 * 2 + 1];
static uint8_t VAR28[VAR26 * 2 + 1];
static uint32_t VAR29[64 * 64 * 2 * 2];
static uint8_t VAR30[64 * 64 * 2 * 2];
static uint32_t VAR31[64 * 64 * 2 * 2];
static uint8_t VAR32[64 * 64 * 2 * 2];
static uint8_t VAR33[64 * 64 * 2 * 2];
static uint8_t VAR34[64 * 64 * 2 * 2];
int FUN9(int VAR35, int VAR36)
{
    int VAR37;
    if (VAR35 == 128 && VAR36 == 96)
        VAR37 = 1;
    else if (VAR35 == 176 && VAR36 == 144)
        VAR37 = 2;
    else if (VAR35 == 352 && VAR36 == 288)
        VAR37 = 3;
    else if (VAR35 == 704 && VAR36 == 576)
        VAR37 = 4;
    else if (VAR35 == 1408 && VAR36 == 1152)
        VAR37 = 5;
    else
        VAR37 = 7;
    return VAR37;
}