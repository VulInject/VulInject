static inline void FUN1(char VAR1 *VAR2, char *VAR3, int VAR4)
{
int VAR5;

do {
VAR5 = VAR4 > 256 ? 256 : VAR4;
FUN2(VAR2, VAR3, VAR5);
VAR2 += VAR5;
VAR3 += VAR5;
VAR4 -= VAR5;
FUN3(VAR2);
} while (VAR5);
}