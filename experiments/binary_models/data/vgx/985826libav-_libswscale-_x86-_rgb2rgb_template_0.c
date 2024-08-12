static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, int VAR5)
{
const VAR2 *VAR6 = VAR3;
const VAR2 *VAR7;
const VAR2 *VAR8;
VAR9 *VAR10 = (VAR9 *)VAR4;
VAR7 = VAR6 + VAR5;
VAR8 = VAR7 - 15;
VAR11 volatile(
""
""
""
""
""
""
VAR12""
""
""
""
""
""
""
""
""
""
""
""
""
""
""
""
""
""
VAR13""
""
""
""
""
""
: "" (VAR10), ""(VAR6)
: "" (VAR8), "" (VAR14), "" (VAR15), "" (VAR16)
);
VAR11 volatile(VAR17:::"");
VAR11 volatile(VAR18:::"");
while (VAR6 < VAR7) {
register int VAR19 = *(const VAR20*)VAR6; VAR6 += 4;
*VAR10++ = ((VAR19&0xFF)>>3) + ((VAR19&0xFC00)>>5) + ((VAR19&0xF80000)>>8);
}
}