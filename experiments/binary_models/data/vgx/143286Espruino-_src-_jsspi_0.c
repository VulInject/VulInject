void FUN1(
unsigned char *VAR1, unsigned char *VAR2, unsigned int VAR3,
VAR4 *VAR5
) {
VAR6 *VAR7 = (VAR6*)VAR5;

for (unsigned int VAR8=0;VAR8<VAR3;VAR8++) {
int VAR9 = VAR1[VAR8];
int VAR10;
for (VAR10=VAR7->VAR11 - 1;VAR10>=0;VAR10--) {
FUN2(VAR7->VAR12, (VAR9>>VAR10)&1 );
FUN2(VAR7->VAR13, 1 );
FUN2(VAR7->VAR13, 0 );
}
}
}