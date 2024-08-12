static int
FUN1(const char * VAR1, size_t VAR2,
VAR3 * VAR4, char ** VAR5);

static int
FUN2(const char * VAR1, size_t VAR2,
VAR3 * VAR4, char ** VAR5);

static int
FUN3(const char * VAR1, size_t VAR2,
VAR3 * VAR4, char ** VAR5);

static int
FUN4(const char * VAR1, size_t VAR2,
VAR3 * VAR4, char ** VAR5);

static int
FUN5(const char * VAR1, size_t VAR2,
VAR3 * VAR4, VAR3 * VAR5);

static int
FUN6(const char * VAR1, size_t VAR2,
VAR3 * VAR4, char ** VAR5);




int FUN7(const char * VAR1, size_t VAR2,
VAR3 * VAR4,
struct VAR6 ** VAR5)
{
size_t VAR7;
size_t VAR8;
struct VAR9 * VAR10;
VAR11 * VAR12;
struct VAR6 * VAR13;
int VAR14;
int VAR15;

VAR8 = * VAR4;

VAR14 = FUN8(VAR1, VAR2, &VAR8,
&VAR10);
if (VAR14 != VAR16) {
VAR15 = VAR14;
goto VAR17;
}

VAR12 = FUN9();
if (VAR12 == NULL) {
VAR15 = VAR18;
goto VAR19;
}

while (1) {
struct VAR20 * VAR21;

VAR7 = VAR8;
VAR14 = FUN10(VAR1, VAR2, &VAR8, '');
if (VAR14 == VAR16) {

}
else if (VAR14 == VAR22) {
break;
}
else {
VAR15 = VAR14;
goto VAR23;
}

VAR21 = NULL;
VAR14 = FUN11(VAR1, VAR2, &VAR8, &VAR21);
if (VAR14 == VAR16) {

}
else if (VAR14 == VAR22) {
VAR8 = VAR7;
break;
}
else {
VAR15 = VAR14;
goto VAR23;
}

VAR14 = FUN12(VAR12, VAR21);
if (VAR14 < 0) {
VAR15 = VAR18;
goto VAR23;
}
}

VAR13 = FUN13(VAR10, VAR12);
if (VAR13 == NULL) {
VAR15 = VAR18;
goto VAR23;
}

* VAR5 = VAR13;
* VAR4 = VAR8;

return VAR16;

VAR23:
FUN14(VAR12, (VAR24) VAR25, NULL);
FUN15(VAR12);
VAR19:
FUN16(VAR10);
VAR17:
return VAR15;
}