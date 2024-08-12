static int FUN1(void *VAR1)
{
struct VAR2 *VAR3 = (struct VAR2 *)VAR1;

if (!memcmp(VAR3, &VAR4, sizeof(VAR4))) {
VAR5++;
return VAR6;
}

return 0;
}