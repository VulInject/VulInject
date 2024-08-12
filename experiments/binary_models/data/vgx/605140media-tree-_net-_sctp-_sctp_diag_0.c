static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
int VAR7 = sizeof(struct VAR8);
int VAR9 = 0;
struct VAR10 *VAR11;
void *VAR12 = NULL;

FUN2(VAR6, VAR4, VAR13)
VAR9++;

VAR11 = FUN3(VAR2, VAR14, VAR7 * VAR9);
if (!VAR11)
return -VAR15;

VAR12 = FUN4(VAR11);
FUN2(VAR6, VAR4, VAR13) {
memcpy(VAR12, &VAR6->VAR16, VAR7);
VAR12 += VAR7;
}

return 0;
}