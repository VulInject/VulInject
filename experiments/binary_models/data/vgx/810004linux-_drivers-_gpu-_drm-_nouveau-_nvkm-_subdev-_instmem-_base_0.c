static int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6;

FUN3(VAR6, &VAR4->VAR7, VAR8) {
if (VAR6->VAR9)
FUN4(VAR6);
}

FUN5(VAR2->VAR10);

FUN3(VAR6, &VAR4->VAR11, VAR8) {
if (VAR6->VAR9)
FUN4(VAR6);
}

return 0;
}