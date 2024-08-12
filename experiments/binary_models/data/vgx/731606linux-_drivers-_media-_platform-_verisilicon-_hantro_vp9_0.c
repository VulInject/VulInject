static VAR1 FUN1(unsigned int VAR2, unsigned int VAR3)
{
u32 VAR4, VAR5;
int VAR6;

VAR4 = FUN2(VAR2, 8);
VAR5 = FUN2(VAR3, 8);
VAR6 = ((VAR4 + 63) / 64) * ((VAR5 + 63) / 64);

return VAR6 * 32;
}