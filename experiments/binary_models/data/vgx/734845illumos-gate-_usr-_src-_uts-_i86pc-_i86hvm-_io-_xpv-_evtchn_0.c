void
FUN1(uint_t VAR1)
{
int VAR2 = VAR1 >> VAR3;
ulong_t VAR4 = 1UL << (VAR1 & ((1UL << VAR3) - 1));
volatile VAR5 *VAR6;

VAR6 = &VAR7[VAR2];
FUN2(VAR6, ~VAR4);
}