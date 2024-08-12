static struct VAR1 *FUN1(
VAR2 *VAR3,
bool VAR4,
time_t VAR5,
time_t VAR6,
STREAM_CAPABILITIES VAR7
) {
time_t VAR8 = FUN2();

if(VAR5 > VAR6) {

time_t VAR9 = VAR6;
VAR6 = VAR5;
VAR5 = VAR9;
}

if(VAR5 > VAR8) {
VAR5 = 0;
VAR6 = 0;
VAR4 = true;
}

if(VAR6 > VAR8) {
VAR6 = VAR8;
VAR4 = true;
}

time_t VAR10 = VAR5;
time_t VAR11 = VAR6;
bool VAR12 = VAR4;

time_t VAR13 = 0, VAR14 = 0;
FUN3(
VAR3, &VAR13, &VAR14, VAR8, 0);

if(VAR5 == 0 && VAR6 == 0 && VAR4 == true) {

;
}
else {
if (VAR10 < VAR13)
VAR10 = VAR13;

if (VAR11 > VAR14)
VAR11 = VAR14;


if (VAR4)
VAR11 = VAR14;

if (VAR10 > VAR11) {
time_t VAR15 = VAR11;
VAR11 = VAR10;
VAR10 = VAR15;
}

VAR12 = (VAR4 ||
VAR11 == VAR14 ||
!VAR5 ||
!VAR6) ? true : false;
}

return FUN4(
VAR3,
VAR13, VAR14,
VAR5, VAR6, VAR4,
VAR10, VAR11, VAR12,
VAR8, VAR7);
}