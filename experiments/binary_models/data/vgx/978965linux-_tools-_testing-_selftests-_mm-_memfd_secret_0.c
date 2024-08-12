static void FUN1(int VAR1)
{
char VAR2[64];

if ((read(VAR1, VAR2, sizeof(VAR2)) >= 0) ||
(write(VAR1, VAR2, sizeof(VAR2)) >= 0) ||
(pread(VAR1, VAR2, sizeof(VAR2), 0) >= 0) ||
(FUN2(VAR1, VAR2, sizeof(VAR2), 0) >= 0))
FUN3("");
else
FUN4("");
}