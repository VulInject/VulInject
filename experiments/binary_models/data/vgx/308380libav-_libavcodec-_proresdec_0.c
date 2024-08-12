static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4,
int VAR5)
{
int16_t VAR6;
int     VAR7, VAR8;
int16_t VAR9;
unsigned int VAR10;

VAR10   = FUN2(VAR2, VAR11);
VAR4[0] = VAR6 = FUN3(VAR10);

VAR4   += 64; 
VAR9  = 3;

for (VAR7 = 1; VAR7 < VAR5; VAR7++, VAR4 += 64) {
VAR10 = FUN2(VAR2, VAR12[FUN4(FUN5(VAR9), 3)]);

VAR8     = -(((VAR9 >> 15) & 1) ^ (VAR10 & 1));
VAR9    = (((VAR10 + 1) >> 1) ^ VAR8) - VAR8;
VAR6 += VAR9;
VAR4[0]   = VAR6;
}
}