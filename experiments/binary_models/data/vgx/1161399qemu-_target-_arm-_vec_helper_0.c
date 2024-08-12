void FUN1(VAR1)(void *VAR2, void *VAR3, void *VAR4, void *VAR5, uint32_t VAR6)   \
{                                                                          \
intptr_t VAR7, VAR8 = FUN2(VAR6);                                  \
VAR9 *VAR10 = VAR2, *VAR11 = VAR4; VAR12 *VAR13 = VAR5;                                 \
bool VAR14 = false;                                                        \
for (VAR7 = 0; VAR7 < VAR8 / sizeof(VAR9); VAR7++) {                          \
WTYPE VAR15 = (VAR16)VAR11[VAR7] OP VAR13[VAR7];                                    \
if (VAR15 < VAR17) {                                                    \
VAR15 = VAR17;                                                      \
VAR14 = true;                                                      \
} else if (VAR15 > VAR18) {                                             \
VAR15 = VAR18;                                                      \
VAR14 = true;                                                      \
}                                                                  \
VAR10[VAR7] = VAR15;                                                         \
}                                                                      \
if (VAR14) {                                                               \
VAR19 *VAR20 = VAR3;                                                 \
VAR20[0] = 1;                                                         \
}                                                                      \
FUN3(VAR10, VAR8, FUN4(VAR6));                                \
}