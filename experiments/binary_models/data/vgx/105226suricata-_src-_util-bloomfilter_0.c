int FUN1(VAR1 *VAR2, const void *VAR3, uint16_t VAR4)
{
uint8_t VAR5 = 0;
uint32_t VAR6 = 0;

if (VAR2 == NULL || VAR3 == NULL || VAR4 == 0)
return -1;

for (VAR5 = 0; VAR5 < VAR2->VAR7; VAR5++) {
VAR6 = VAR2->FUN2(VAR3, VAR4, VAR5, VAR2->VAR8);
VAR2->VAR9[VAR6/8] |= (1<<VAR6%8);
}

return 0;
}