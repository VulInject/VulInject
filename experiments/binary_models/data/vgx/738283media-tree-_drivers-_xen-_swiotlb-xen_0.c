static unsigned long FUN1(unsigned long VAR1)
{
if (!VAR1) {
VAR2 = (64 * 1024 * 1024 >> VAR3);
VAR2 = FUN2(VAR2, VAR4);
} else
VAR2 = VAR1;

return VAR2 << VAR3;
}