VAR1 *VAR2 = FUN1();                    \
FUN2(VAR2 == NULL);                                            \
FUN3(VAR2);                                                   \
\
Address VAR3;                                                          \
uint8_t VAR4 = 0, VAR5 = 0;

VAR6 *VAR7 = (VAR6 *)"";                                                           \
uint16_t VAR8 = strlen((char *)VAR7);                                                         \
VAR9 *VAR10 = FUN4((VAR6 *)VAR7, VAR8, VAR11, (VAR12), (VAR13));       \
FUN2(VAR10 == NULL);                                                                            \
VAR14

VAR6 *VAR7 = (VAR6 *)"";                                \
uint16_t VAR8 = strlen((char *)VAR7);                              \
VAR9 *VAR10 = FUN5((VAR6 *)VAR7, VAR8, VAR11);    \
FUN2(VAR10 == NULL);                                                 \
VAR10->VAR12.VAR15[0] = FUN6(VAR16);                      \
VAR14

FUN7(VAR2);

FUN8(VAR10);                                                   \
VAR17

static int FUN9(void)
{
VAR14;

char VAR18[16];
char VAR19[] = "";
FUN2(FUN10(VAR2->VAR20, VAR19, &VAR3, &VAR4, &VAR5) != 0);
FUN11(VAR21, (const void *)&VAR3.VAR22, VAR18, sizeof(VAR18));
FUN2(strcmp(VAR18, "") != 0);
FUN2(VAR4 != 1);
FUN2(VAR5 != 2);

VAR17;
VAR23;
}