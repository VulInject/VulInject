int
FUN1(const VAR1 *VAR2, char *VAR3, int VAR4)
{
int	VAR5, VAR6, VAR7, VAR8;
static t_string	VAR9 = { 0 };
static t_wide_io	VAR10 = { 0 };

if (VAR4 < 0) {

return (VAR9.VAR11);
} else if (0 < VAR4) {

VAR9.VAR12 = VAR4;
VAR9.VAR11 = 0;
VAR9.VAR3 = VAR3;

VAR10.VAR13 = VAR10.VAR14 = 0;
VAR10.VAR15 = (void *) &VAR9;
VAR10.VAR16 = (int (*)(int, void *)) VAR17;
} 


VAR8 = VAR9.VAR11;

if (VAR2 == NULL) {

if ((VAR7 = FUN2('', &VAR10)) < 0) {
VAR9.VAR11 = VAR8;
return (-1);
}

if (VAR9.VAR11 < VAR9.VAR12)
VAR9.VAR3[VAR9.VAR11++] = '';
} else {
for (VAR7 = VAR5 = 0; VAR5 < VAR2->VAR18; ++VAR5, VAR7 += VAR6)
if ((VAR6 = FUN2(VAR2->VAR19[VAR5], &VAR10)) < 0) {
VAR9.VAR11 = VAR8;
return (-1);
}
}

return (VAR7);
}