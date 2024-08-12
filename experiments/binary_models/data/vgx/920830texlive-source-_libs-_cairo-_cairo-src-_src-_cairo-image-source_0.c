FUN1 (uint16_t VAR1, uint32_t VAR2)
{
int VAR3 = 16 - VAR2;
while (VAR3 > 0) {
VAR1 |= VAR1 >> VAR2;
VAR3 -= VAR2;
VAR2 += VAR2;
}
return VAR1;
}