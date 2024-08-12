static inline void FUN1(struct VAR1 *VAR1, VAR2 *VAR3, VAR2 *VAR4)
{
unsigned long VAR5 = 0, VAR6 = 0;
unsigned long VAR7;

for ( ; VAR3 < VAR4 ; VAR3++) {
VAR7 = FUN2(*VAR3);
if (VAR7) {
*VAR3 = 0;

if (VAR6 == 0)
goto VAR8;
else if (VAR5 == VAR7 - VAR6)
VAR6++;
else {
FUN3 (VAR1, VAR5, VAR6);
FUN4(VAR1);
VAR8:
VAR5 = VAR7;
VAR6 = 1;
}
}
}
if (VAR6 > 0) {
FUN3 (VAR1, VAR5, VAR6);
FUN4(VAR1);
}
}