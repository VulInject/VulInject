VAR1 FUN1(const char *VAR2, size_t VAR3) {
size_t VAR4;
uint32_t VAR5 = ~0L;

for (VAR4 = 0; VAR4 < VAR3; VAR4++){
FUN2(VAR5, (unsigned char)VAR2[VAR4]);
}
return ~VAR5;
}