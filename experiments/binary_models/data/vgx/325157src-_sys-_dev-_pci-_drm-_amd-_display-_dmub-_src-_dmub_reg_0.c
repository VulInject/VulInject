static void FUN1(struct VAR1 *VAR2,
uint32_t VAR3, int VAR4, uint8_t VAR5,
uint32_t VAR6, uint32_t VAR7,
va_list VAR8)
{
uint32_t VAR9, VAR10, VAR11;
int VAR12 = 1;


FUN2(VAR2, VAR7, VAR6,
VAR5);

while (VAR12 < VAR4) {
VAR9 = FUN3(VAR8, VAR13);
VAR10 = FUN3(VAR8, VAR13);
VAR11 = FUN3(VAR8, VAR13);

FUN2(VAR2, VAR11, VAR10,
VAR9);
VAR12++;
}
}