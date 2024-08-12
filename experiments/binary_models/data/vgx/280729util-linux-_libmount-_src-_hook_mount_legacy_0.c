static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
int VAR7;

assert(VAR2);

FUN2(VAR8, FUN3(VAR4, ""));

VAR6 = FUN4();
if (!VAR6)
return -VAR9;

FUN5(VAR2, &VAR6->VAR10);
assert(VAR2->VAR10 & VAR11);
assert(!(VAR2->VAR10 & VAR12));

VAR6->VAR10 |= (VAR12 | VAR11);

VAR7 = FUN6(VAR2, VAR4,
VAR13, VAR6, VAR14);
return VAR7;
}