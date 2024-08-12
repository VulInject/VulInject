int FUN1(void *VAR1,
unsigned char *VAR2, size_t VAR3,
const unsigned char *VAR4, size_t VAR5)
{
int VAR6 = VAR7;
VAR8 *VAR9 = (VAR8 *) VAR1;
size_t VAR10 = FUN2(VAR9->VAR11.VAR12);
size_t VAR13 = VAR3;
unsigned char *VAR14 = VAR2;


if (VAR3 > VAR15) {
return VAR16;
}


if (VAR5 > VAR17) {
return VAR18;
}


if (VAR9->VAR19 != NULL && 
(VAR9->VAR20 == VAR21 ||
VAR9->VAR22 > VAR9->VAR23)) {
if ((VAR6 = FUN3(VAR9, VAR4, VAR5)) != 0) {
return VAR6;
}

VAR5 = 0; 
}


if (VAR4 != NULL && VAR5 != 0) {
if ((VAR6 = FUN4(VAR9,
VAR4, VAR5)) != 0) {
goto VAR24;
}
}


while (VAR13 != 0) {
size_t VAR25 = VAR13 > VAR10 ? VAR10 : VAR13;

if ((VAR6 = FUN5(&VAR9->VAR11)) != 0) {
goto VAR24;
}
if ((VAR6 = FUN6(&VAR9->VAR11,
VAR9->VAR26, VAR10)) != 0) {
goto VAR24;
}
if ((VAR6 = FUN7(&VAR9->VAR11, VAR9->VAR26)) != 0) {
goto VAR24;
}

memcpy(VAR14, VAR9->VAR26, VAR25);
VAR14 += VAR25;
VAR13 -= VAR25;
}


if ((VAR6 = FUN4(VAR9,
VAR4, VAR5)) != 0) {
goto VAR24;
}


VAR9->VAR22++;

VAR24:

return VAR6;
}