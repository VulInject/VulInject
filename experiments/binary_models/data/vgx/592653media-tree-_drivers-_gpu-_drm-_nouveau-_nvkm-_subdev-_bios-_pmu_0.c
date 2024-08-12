VAR1
FUN1(struct VAR2 *VAR3, int VAR4, VAR5 *VAR6, VAR5 *VAR7,
struct VAR8 *VAR9)
{
u32 VAR10 = FUN2(VAR3, VAR4, VAR6, VAR7);
memset(VAR9, 0x00, sizeof(*VAR9));
switch (!!VAR10 * *VAR6) {
default:
VAR9->VAR11 = FUN3(VAR3, VAR10 + 0x00);
VAR9->VAR10 = FUN4(VAR3, VAR10 + 0x02);
break;
}
return VAR10;
}