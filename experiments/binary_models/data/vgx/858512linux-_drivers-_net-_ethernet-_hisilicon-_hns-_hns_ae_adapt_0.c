static int FUN1(struct VAR1 *VAR2, const VAR3 *VAR4,
const VAR5 *VAR6, const u8 VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR2);


if (VAR6) {
memcpy(VAR9->VAR10, VAR6, VAR11);
FUN3(VAR9, VAR9->VAR10);
}

if (VAR4) {

memcpy(VAR9->VAR12, VAR4,
VAR13  * sizeof(*VAR4));


FUN4(VAR9, VAR9->VAR12);
}

return 0;
}