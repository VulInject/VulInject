VAR1 FUN1(VAR2 *VAR3, int VAR4, unsigned char *VAR5, VAR6 *VAR7, int *VAR8, VAR9 *VAR10)
{
size_t         VAR11;
ssize_t        VAR12;
M_io_error_t   VAR13;

(void)VAR10;

if (VAR3 == NULL || VAR5 == NULL || VAR7 == NULL || *VAR7 == 0 || VAR8 == NULL)
return VAR14;

if (VAR4 == -1)
return VAR15;

*VAR8  = 0;
VAR16       = 0;
VAR11 = *VAR7;
VAR12      = read(VAR4, VAR5, *VAR7);
if (VAR12 == 0) {

VAR13        = VAR17;
} else if (VAR12 < 0) {
*VAR8 = VAR16;
VAR13        = FUN2(*VAR8);
} else {
*VAR7  = (VAR6)VAR12;
VAR13        = VAR18;
}

if (VAR13 == VAR19 || (VAR13 == VAR18 && VAR11 >= *VAR7)) { 

FUN3(FUN4(VAR3), VAR20, VAR3, VAR4, VAR21, VAR22, 0);
} else if (VAR13 == VAR18) {

FUN3(FUN4(VAR3), VAR23, VAR3, VAR4, VAR21, VAR22, 0);
}

return VAR13;
}