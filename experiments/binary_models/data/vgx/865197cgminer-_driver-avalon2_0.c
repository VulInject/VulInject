static void FUN1(const unsigned char *VAR1, unsigned int VAR2, unsigned char *VAR3)
{
sha256_ctx VAR4;
int VAR5;
FUN2(&VAR4);
FUN3(&VAR4, VAR1, VAR2);

for (VAR5 = 0; VAR5 < 8; VAR5++) {
FUN4(VAR4.VAR6[VAR5], &VAR3[VAR5 << 2]);
}
}