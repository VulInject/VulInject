void
FUN1(u_int32_t VAR1[], u_int16_t VAR2)
{
u_int16_t VAR3;
for (VAR3 = 0; VAR3 < VAR2; VAR3 += 2)
FUN2("",
VAR3 / 2, VAR1[VAR3], VAR1[VAR3 + 1]);
}