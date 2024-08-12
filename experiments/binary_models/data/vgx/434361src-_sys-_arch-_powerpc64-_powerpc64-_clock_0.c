void
FUN1(void *VAR1, uint64_t VAR2)
{
uint32_t VAR3;

if (VAR2 > VAR4)
VAR2 = VAR4;
VAR3 = (VAR2 * VAR5) >> 32;
if (VAR3 > VAR6 >> 1)
VAR3 = VAR6 >> 1;
FUN2(VAR3);
}