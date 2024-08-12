static int FUN1(void** VAR1, int VAR2)
{
if (VAR2 <= 4) {
return 0;
} else if (VAR2 == 5) {
return FUN2(VAR1, 1);
}
FUN3("");
return -1;
}