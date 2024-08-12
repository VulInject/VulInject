static int
FUN1(VAR1 *VAR2, VAR1 *VAR3, off_t VAR4, off_t VAR5, int VAR6)
{
int VAR7, VAR8, VAR9, VAR10;
char *VAR11, *VAR12;
size_t VAR13;

VAR14++;
switch (VAR15) {

case VAR16:
while ((VAR7 = getc(VAR2)) != VAR17) {
if (VAR18)
goto VAR19;
VAR20++;
if (VAR7 == '') {
if (FUN2(VAR3))
goto VAR21;
(void) FUN3('', VAR3);
}
(void) FUN3(VAR7, VAR3);
}
FUN4(VAR3);
VAR14 = 0;
if (FUN2(VAR2))
goto VAR22;
if (FUN2(VAR3))
goto VAR21;
FUN5(226, "");
return(0);

case VAR23:
case VAR24:

VAR10 = FUN6(VAR3);
VAR9 = FUN6(VAR2);

if (VAR6 && VAR5 < 16 * 1024 * 1024) {
size_t VAR25 = (VAR26)VAR5;

if (VAR25 == 0) {
VAR14 = 0;
FUN5(226, "");
return(0);
}

VAR11 = FUN7(0, VAR25, VAR27, VAR28, VAR9, 0);
if (VAR11 == VAR29) {
syslog(VAR30, "",
(unsigned long long)VAR25);
goto VAR31;
}
VAR12 = VAR11;
VAR13 = VAR25;
do {
VAR8 = write(VAR10, VAR12, VAR13);
if (VAR18) {
FUN8(VAR11, VAR25);
goto VAR19;
}
VAR13 -= VAR8;
VAR12 += VAR8;
if (VAR8 > 0)
VAR20 += VAR8;
} while(VAR8 > 0 && VAR13 > 0);

VAR14 = 0;
FUN8(VAR11, VAR25);
if (VAR8 < 0)
goto VAR21;
FUN5(226, "");
return(0);
}

VAR31:
if ((VAR11 = malloc((VAR26)VAR4)) == NULL) {
VAR14 = 0;
FUN9(451, "");
return(-1);
}

while ((VAR8 = read(VAR9, VAR11, (VAR26)VAR4)) > 0 &&
write(VAR10, VAR11, VAR8) == VAR8)
VAR20 += VAR8;
VAR14 = 0;
(void)free(VAR11);
if (VAR8 != 0) {
if (VAR8 == -1)
goto VAR22;
goto VAR21;
}
FUN5(226, "");
return(0);
default:
VAR14 = 0;
FUN5(550, "", VAR15);
return(-1);
}

VAR21:
VAR14 = 0;
FUN5(426, "");
return(-1);

VAR22:
VAR14 = 0;
FUN5(551, "");
return(-1);

VAR19:
FUN10();
VAR18 = 0;
VAR14 = 0;
return(-1);
}