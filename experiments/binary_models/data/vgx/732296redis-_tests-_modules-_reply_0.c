int FUN1(VAR1 *VAR2, VAR3 **argv, int argc) {
if (argc != 2) return FUN2(VAR2);

size_t VAR4;
const char *VAR5 = FUN3(argv[1], &VAR4);

return FUN4(VAR2, VAR5, VAR4);
}