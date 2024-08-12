static int
FUN1(VAR1 * VAR2,
unsigned char **VAR3,
VAR4 *VAR5,
int VAR6,
const struct iovec VAR7[],
void **VAR8)
{
VAR9 *VAR10 = (VAR9 *) (*VAR8);

return FUN2(VAR2, VAR3, VAR5,
VAR6, VAR7, VAR10);
int VAR11;
int VAR12;
unsigned char VAR13[VAR14];
libssh2_sha1_ctx VAR15;

FUN3(&VAR15);
for(VAR12 = 0; VAR12 < VAR6; VAR12++) {
FUN4(VAR15, VAR7[VAR12].VAR16, VAR7[VAR12].VAR17);
}
FUN5(VAR15, VAR13);

VAR11 = FUN6(VAR2, VAR10, VAR13, VAR14,
VAR3, VAR5);
if(VAR11) {
return -1;
}

return 0;
}