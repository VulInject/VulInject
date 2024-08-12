static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4,
const int VAR5)
{
for (int VAR6 = 0; VAR6 <= VAR5; VAR6++) {
float *VAR7 = VAR4->VAR8[VAR6].VAR7;
for (int VAR9 = 0; VAR9 < VAR4->VAR10; VAR9++) {
const int VAR11 = VAR12[VAR9 + 0];
const int VAR13   = VAR12[VAR9 + 1];
const int VAR14 = VAR4->VAR8[VAR6].VAR15[VAR9];
const float VAR16 = VAR17[VAR14];
for (int VAR18 = VAR11; VAR18 < VAR13; VAR18++)
VAR7[VAR18] *= VAR16;
}
}
}