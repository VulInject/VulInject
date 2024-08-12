static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(&VAR2->VAR7);

FUN3(&VAR2->VAR7,
"", VAR8, VAR4->VAR9);

FUN4(&VAR6->VAR10);
if (VAR4->VAR9 & 0x4 && !VAR6->VAR11) {
FUN5(VAR12,
&VAR6->VAR13, FUN6(250));
}
FUN7(&VAR6->VAR10);

return 0;
}