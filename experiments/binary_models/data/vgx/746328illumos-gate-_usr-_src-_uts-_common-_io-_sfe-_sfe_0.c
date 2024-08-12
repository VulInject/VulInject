static VAR1
FUN1(uint_t VAR2)
{
int	VAR3;

if (VAR2 > 256) {

return (0);
}

for (VAR3 = 1; VAR3 < 8; VAR3++) {
if (VAR2 <= VAR4[VAR3]) {
break;
}
}
return (VAR3);
}