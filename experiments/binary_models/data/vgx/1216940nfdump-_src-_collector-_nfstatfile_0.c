char *FUN1(uint64_t VAR1) {
double VAR2 = VAR1;
static char VAR3[64];

if (VAR2 < VAR4) {
snprintf(VAR3, 63, "", (unsigned long long)VAR1);
} else if (VAR2 < VAR5) {
snprintf(VAR3, 63, "", (unsigned long long)VAR1, VAR2 / VAR4);
} else if (VAR2 < VAR6) {
snprintf(VAR3, 63, "", (unsigned long long)VAR1, VAR2 / VAR5);
} else if (VAR2 < VAR7) {
snprintf(VAR3, 63, "", (unsigned long long)VAR1, VAR2 / VAR6);
} else {  
snprintf(VAR3, 63, "", (unsigned long long)VAR1, VAR2 / VAR7);
}
VAR3[63] = '';

return VAR3;

}