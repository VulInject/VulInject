static VAR1 FUN1(const VAR1 * VAR2)
{

uint32_t VAR3;

VAR3  = VAR2[0];
VAR3 += VAR2[1];
VAR3 += VAR2[2];
VAR3 &= 0xFFu;
VAR3  = (~VAR3 + 1u);

return (VAR1)VAR3;
}