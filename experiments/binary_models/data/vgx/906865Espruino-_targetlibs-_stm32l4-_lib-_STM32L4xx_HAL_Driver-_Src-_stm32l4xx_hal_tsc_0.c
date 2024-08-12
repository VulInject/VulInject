static VAR1 FUN1(uint32_t VAR2)
{
uint32_t VAR3 = 0;
uint32_t VAR4;

for (VAR4 = 0; VAR4 < VAR5; VAR4++)
{
if ((VAR2 & ((VAR1)0x0F << (VAR4 * 4))) != VAR6)
{
VAR3 |= ((VAR1)1 << VAR4);
}
}

return VAR3;
}