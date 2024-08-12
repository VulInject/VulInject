int FUN1(struct VAR1 *VAR2, uint64_t VAR3) {
char VAR4[sizeof(VAR5)+1];
int VAR6 = snprintf(VAR4, sizeof(VAR5)+1, "", (unsigned long long) VAR3);
if (VAR6 <= 0 || VAR6 >= (int) (sizeof(VAR5)+1)) {
VAR2->VAR7++;
return -1;
}
return FUN2(VAR2, "", 14, VAR4, VAR6); 
}