void FUN1(const char *VAR1, size_t VAR2, unsigned char *VAR3) {
size_t VAR4;
for (VAR4 = 0; VAR4 < VAR2; VAR4 += 2) {
VAR3[VAR4 >> 1] = (unsigned char) FUN2(&VAR1[VAR4], 2);
}
}