static int FUN1(BufferOp VAR1, int VAR2, const char *VAR3, ut32 VAR4) {
ut32 VAR5;
while (VAR4 > 0) {
VAR5 = FUN2 (VAR2, VAR3, VAR4);
if (VAR5 != VAR4) {
return 0;
}
VAR3 += VAR5;
VAR4 -= VAR5;
}
return 1;
}