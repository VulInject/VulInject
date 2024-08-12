static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR1 *VAR4;
struct VAR5 *VAR6 = FUN2(VAR3);

FUN3(VAR3, "");

if (VAR6->VAR7 <= 0) {
return NULL;
}
VAR6->VAR8++;
VAR6->VAR7--;
VAR4 = VAR6->VAR9;
if (!VAR4) {
return VAR4;
}
if (VAR4->VAR10) {
VAR4->VAR10->VAR11 = NULL;
}
VAR6->VAR9 = VAR4->VAR10;
memset(VAR4, 0, sizeof(struct VAR1));
return VAR4;
}