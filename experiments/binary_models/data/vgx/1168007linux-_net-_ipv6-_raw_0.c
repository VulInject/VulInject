static inline int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
enum skb_drop_reason VAR5;

if ((FUN2(VAR2)->VAR6 || FUN3(VAR2->VAR7)) &&
FUN4(VAR4)) {
FUN5(&VAR2->VAR8);
FUN6(VAR4, VAR9);
return VAR10;
}


FUN7(VAR4);
if (FUN8(VAR2, VAR4, &VAR5) < 0) {
FUN6(VAR4, VAR5);
return VAR10;
}

return 0;
}