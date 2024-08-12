VAR1 FUN1(size_t VAR2) {
size_t VAR3 = 0;
while (VAR2 != 0) {
VAR3++;
VAR2 >>= 1;
}

return VAR3;
}