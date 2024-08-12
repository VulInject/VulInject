VAR1 FUN1(uint64_t VAR2) {
if (VAR2 < 10) return 1;
if (VAR2 < 100) return 2;
if (VAR2 < 1000) return 3;
if (VAR2 < 1000000000000UL) {
if (VAR2 < 100000000UL) {
if (VAR2 < 1000000) {
if (VAR2 < 10000) return 4;
return 5 + (VAR2 >= 100000);
}
return 7 + (VAR2 >= 10000000UL);
}
if (VAR2 < 10000000000UL) {
return 9 + (VAR2 >= 1000000000UL);
}
return 11 + (VAR2 >= 100000000000UL);
}
return 12 + FUN1(VAR2 / 1000000000000UL);
}