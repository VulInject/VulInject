int
FUN1 (const VAR1 *VAR2, const VAR1 *VAR3, size_t VAR4)
{

for (; VAR4 > 0;)
{
uint16_t VAR5 = *VAR2++;
uint16_t VAR6 = *VAR3++;
if (VAR5 != 0 && VAR5 == VAR6)
{
VAR4--;
continue;
}
if (VAR5 < 0xd800 || VAR5 >= 0xe000)
{
if (!(VAR6 < 0xd800 || VAR6 >= 0xe000))

return -1;
}
else
{
if (VAR6 < 0xd800 || VAR6 >= 0xe000)

return 1;
}
return (int)VAR5 - (int)VAR6;

}
return 0;
}