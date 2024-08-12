static bool FUN1(int VAR1)
{
unsigned int VAR2 = VAR3 - 1 + VAR1;

if (VAR2 == 0) {
FUN2();
return true;
} else if (VAR2 < VAR3) {
memcpy(&VAR4, &VAR5[VAR2], sizeof(VAR4));
VAR3 = VAR2;
return true;
} else {
FUN3("");
return false;
}
}