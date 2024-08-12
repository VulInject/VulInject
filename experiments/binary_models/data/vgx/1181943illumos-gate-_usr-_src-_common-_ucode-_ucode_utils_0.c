VAR1
FUN1(uint32_t VAR2, uint32_t VAR3, VAR4 *VAR5)
{
int VAR6;
VAR1 *VAR7 = (VAR1 *)(VAR8)VAR5;

VAR6 = VAR3 >> 2;
while (VAR6--)
VAR2 += VAR7[VAR6];

return (VAR2);
}