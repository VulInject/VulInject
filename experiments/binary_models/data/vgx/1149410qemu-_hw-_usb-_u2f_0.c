static void FUN1(VAR1 *VAR2,
const uint8_t VAR3[VAR4])
{
uint8_t VAR5;

if (VAR2->VAR6 >= VAR7) {
return;
}

VAR5 = VAR2->VAR8;
VAR2->VAR8 = (VAR5 + 1) % VAR7;
++VAR2->VAR6;

memcpy(VAR2->VAR9[VAR5], VAR3, VAR4);
}