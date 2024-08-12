static int
FUN1(int VAR1, const char *VAR2, char *VAR3)
{
struct ifreq	VAR4;

if (!VAR2)
return VAR5;

memset(&VAR4, 0, sizeof(VAR4));
FUN2(VAR4.VAR6, VAR2, sizeof(VAR4.VAR6));

if (FUN3(VAR1, VAR7, &VAR4) == -1) {
FUN4(VAR3, VAR8,
VAR9, "");
return -1;
}

return VAR4.VAR10;
}