void (*VAR1)(VAR2 * VAR3,
const VAR4 * VAR5)
= NULL;
int (*VAR6)(VAR2 * VAR3,
int VAR7)
= NULL;
void (*VAR8)(VAR2 * VAR3,
int VAR7)
= NULL;
int (*VAR9)(void) = NULL;
int (*VAR10)(
VAR2 * VAR3,
const wpapsk_password VAR11[VAR12],
const uint8_t VAR13[256],
uint32_t VAR14,
uint8_t VAR15[VAR12][20],
uint8_t VAR16,
const uint8_t VAR17[20],
int VAR18,
int VAR7)
= NULL;
void (*VAR19)(VAR2 * VAR3,
const uint8_t VAR20[6],
const uint8_t VAR21[6],
const uint8_t VAR22[32],
const uint8_t VAR23[32],
int VAR7)
= NULL;
int (*VAR24)(
VAR2 * VAR3,
const wpapsk_password VAR11[VAR12],
const uint8_t VAR25[32],
int VAR18,
int VAR7)
= NULL;
void (*VAR26)(VAR2 * VAR3,
const uint8_t VAR20[6],
const uint8_t VAR21[6],
int VAR7)
= NULL;
int (*VAR27)(void) = NULL;
VAR4 * (*VAR28)(VAR2 * VAR3,
int VAR7,
int VAR29)
= NULL;
VAR4 * (*VAR30)(VAR2 * VAR3,
int VAR7,
int VAR29)
= NULL;
void (*VAR31)(const VAR4 * VAR11,
const VAR4 * VAR5,
uint32_t VAR32,
uint8_t VAR33[40])
= NULL;
void (*VAR34)(
VAR2 * VAR3,
const wpapsk_password VAR11[VAR12],
int VAR18,
int VAR7)
= NULL;
void (*VAR35)(VAR2 * VAR3,
const uint8_t VAR13[256],
const uint32_t VAR14,
uint8_t VAR15[VAR12]
[20],
const uint8_t VAR16,
const int VAR36,
const int VAR7)
= NULL;




static char * FUN1(void)
{
HMODULE VAR37 = FUN2(NULL);
CHAR VAR38[VAR39];

FUN3(VAR37, VAR38, VAR39);
FUN4(VAR38);

cygwin_conv_path_t VAR40 = VAR41;
char * VAR42 = (char *) FUN5(VAR40, VAR38);

return VAR42;
}