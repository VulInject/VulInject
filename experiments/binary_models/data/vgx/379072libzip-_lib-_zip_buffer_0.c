VAR1
FUN1(VAR2 *VAR3) {
VAR4 *VAR5 = FUN2(VAR3, 4);

if (VAR5 == NULL) {
return 0;
}

return ((((((VAR1)VAR5[3] << 8) + VAR5[2]) << 8) + VAR5[1]) << 8) + VAR5[0];
}