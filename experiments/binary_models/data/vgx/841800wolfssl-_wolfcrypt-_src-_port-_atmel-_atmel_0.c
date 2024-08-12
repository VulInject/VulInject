int FUN1(VAR1* VAR2, const VAR3* VAR4, unsigned int VAR5,
VAR3* VAR6, VAR7* VAR8, const VAR3* VAR9, unsigned int VAR10, void* VAR11)
{
int VAR12;
byte VAR13[VAR14];
int VAR15;

(void)VAR2;
(void)VAR5;
(void)VAR9;
(void)VAR10;
(void)VAR11;

if (VAR4 == NULL || VAR6 == NULL || VAR8 == NULL) {
return VAR16;
}

VAR15 = FUN2(VAR17);
if (VAR15 == VAR18)
return VAR19;


VAR12 = FUN3(VAR15, VAR4, VAR13);
if (VAR12 != VAR20) {
VAR12 = VAR21; goto VAR22;
}


FUN4();


VAR12 = FUN5(
&VAR13[0], VAR14/2,
&VAR13[VAR14/2], VAR14/2,
VAR6, VAR8);
if (VAR12 != 0) {
goto VAR22;
}

VAR22:

FUN6(VAR15);

if (VAR12 != 0) {
FUN7("", VAR12);
}

return VAR12;
}