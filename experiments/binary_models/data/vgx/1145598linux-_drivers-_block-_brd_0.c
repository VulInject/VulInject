static inline void FUN1(void)
{
if (FUN2(!VAR1))
VAR1 = 1;


if ((1U << VAR2) % VAR1 != 0)
VAR1 = 1UL << FUN3(VAR1);

if (VAR1 > VAR3) {
FUN4("",
VAR3, VAR3);
VAR1 = VAR3;
}
}