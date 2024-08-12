static int
FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4,
VAR5 *VAR6, uint_t VAR7, void *VAR8, size_t VAR9,
unsigned int VAR10)
{
int	VAR11;
int	VAR12;

VAR12 = 0;
(void) FUN2(&VAR13);
if (VAR14 == 0) {
(void) FUN3(&VAR13);	
return (VAR15);
}

while ((VAR11 = FUN4(VAR2, VAR3, VAR4, VAR6, VAR7,
VAR8, VAR9)) == VAR16) {
if (VAR10 == 0)	
break;

if (VAR12 == 1) {	
(void) close(VAR17);
if ((VAR17 = open(VAR18, VAR19)) < 0) {
VAR11 = VAR16;
break;
}
--VAR10;
continue;
}

(void) FUN3(&VAR13);
(void) FUN5(&VAR13);


if (VAR14 == 0) {
VAR11 =  VAR15;
break;
}
VAR12 = 1;
continue;
}
(void) FUN3(&VAR13);	
return (VAR11);
}