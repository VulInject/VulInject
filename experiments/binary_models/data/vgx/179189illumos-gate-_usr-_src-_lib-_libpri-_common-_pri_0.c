VAR1
FUN1(uint8_t VAR2, VAR3 *VAR4, VAR3 **VAR5,
void *(*VAR6)(VAR7), void (*VAR8)(void *, VAR7))
{
VAR3		*VAR9;		
size_t			VAR10;		
struct dspri_info	VAR11;	
struct dspri_info	VAR12;	

if (VAR13 < 0) {
VAR14 = VAR15;
return (-1);
}

if (VAR2 == VAR16) {

if (FUN2(VAR13, VAR17, VAR4) < 0) {
return (-1);
}
}

do {

if (FUN2(VAR13, VAR18, &VAR11) < 0) {
return (-1);
}

VAR10 = (VAR7)VAR11.VAR10;


if (VAR10 == 0) {
*VAR4 = VAR11.VAR4;
return (0);
}


if ((VAR9 = (VAR3 *)FUN3(VAR10)) == NULL) {
if (VAR14 == 0)
VAR14 = VAR19;
return (-1);
}
if (read(VAR13, VAR9, VAR10) < 0) {
FUN4(VAR9, VAR10);
return (-1);
}


if (FUN2(VAR13, VAR18, &VAR12) < 0) {
FUN4(VAR9, VAR10);
return (-1);
}
if (VAR12.VAR4 != VAR11.VAR4)
FUN4(VAR9, VAR10);

} while (VAR12.VAR4 != VAR11.VAR4);


*VAR5 = VAR9;
*VAR4 = VAR11.VAR4;
return ((VAR1)VAR10);
}