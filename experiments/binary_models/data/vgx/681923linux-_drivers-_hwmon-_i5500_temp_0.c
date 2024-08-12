static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
int VAR5;
struct VAR6 *VAR7;
u32 VAR8;
s8 VAR9;

VAR5 = FUN2(VAR2);
if (VAR5) {
FUN3(&VAR2->VAR10, "");
return VAR5;
}

FUN4(VAR2, VAR11, &VAR9);
FUN5(VAR2, VAR12, &VAR8);
if (VAR9 == 0x7F && VAR8 == 0x07D30D40) {
FUN6(&VAR2->VAR10, "");
return -VAR13;
}

VAR7 = FUN7(&VAR2->VAR10, "", NULL,
&VAR14, NULL);
return FUN8(VAR7);
}