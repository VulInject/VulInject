int FUN1(VAR1 *VAR2)
{
unsigned char VAR3[VAR4];

assert(VAR5 >= VAR4);


if (FUN2(VAR2, VAR3, sizeof(VAR3)) != sizeof(VAR3)) {
return -1;
}


uint_least32_t VAR6 = (FUN3(VAR7, VAR3[4]) << 24) |
(FUN3(VAR7, VAR3[5]) << 16) |
(FUN3(VAR7, VAR3[6]) << 8) |
FUN3(VAR7, VAR3[7]);
if (VAR6 != VAR8) {
return -1;
}


uint_least32_t VAR9 = (FUN3(VAR7, VAR3[8]) << 24) |
(FUN3(VAR7, VAR3[9]) << 16) |
(FUN3(VAR7, VAR3[10]) << 8) |
FUN3(VAR7, VAR3[11]);
if (VAR9 != VAR10 &&
VAR9 != VAR11 &&
VAR9 != VAR12 &&
VAR9 != VAR13 &&
VAR9 != VAR14 &&
VAR9 != VAR15) {
return -1;
}

return 0;
}