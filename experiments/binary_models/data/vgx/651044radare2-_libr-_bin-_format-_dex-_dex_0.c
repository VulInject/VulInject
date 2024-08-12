static const char *FUN1(VAR1 *VAR2, int VAR3) {
if (VAR3 < 0 || VAR3 >= VAR2->VAR4.VAR5) {
return NULL;
}
DexType VAR6 = VAR2->VAR7[VAR3];
return FUN2 (VAR2, VAR6.VAR8);
}