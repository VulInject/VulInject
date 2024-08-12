struct VAR1 *
FUN1(const struct VAR1 *VAR2)
{
const struct VAR3 *VAR4 = VAR2->VAR4;
const struct VAR5 *VAR6;
struct VAR1 *new;

new = FUN2(VAR4);
FUN3 (VAR6, &VAR4->VAR7->VAR8) {
const struct VAR9 *VAR10 = VAR6->VAR11;
FUN4(&new->VAR12[VAR10->VAR13],
&VAR2->VAR12[VAR10->VAR13]);
}

struct VAR14 *VAR15, *VAR16;
FUN5 (VAR15, VAR17, &VAR2->VAR18) {
VAR16 = FUN6(VAR15);
FUN7(&new->VAR18, &VAR16->VAR17,
FUN8(VAR16));
}
return new;
}