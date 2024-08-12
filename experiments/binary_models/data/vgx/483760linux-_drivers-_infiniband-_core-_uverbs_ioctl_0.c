static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
u32 VAR5 = FUN2(VAR4->VAR6);
u32 VAR7 = FUN3(VAR5);
const struct VAR8 *VAR9;
void VAR10 **VAR11;
int VAR12;

VAR11 = FUN4(VAR2, VAR5);
if (!VAR11) {

if (VAR4->VAR13 & VAR14)
return -VAR15;
return 0;
}
VAR9 = FUN5(*VAR11, true);


if (FUN6(VAR7, VAR2->VAR16.VAR17))
return -VAR18;

VAR12 = FUN7(VAR2, VAR9, VAR4, VAR7);
if (VAR12)
return VAR12;

FUN8(VAR7, VAR2->VAR16.VAR17);

return 0;
}