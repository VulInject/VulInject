static int FUN1(void)
{
struct l_wait_info VAR1 = { 0 };
struct VAR2 *VAR3;

if (VAR4)
return -VAR5;

VAR4 = FUN2(sizeof(*VAR4), VAR6);
if (!VAR4)
return -VAR7;

FUN3(&VAR8);
FUN4(&VAR4->VAR9);

VAR3 = FUN5(VAR10, VAR4,
"");
if (FUN6(VAR3)) {
FUN7("", FUN8(VAR3));
FUN9(VAR4);
VAR4 = NULL;
return FUN8(VAR3);
}
FUN10(VAR4->VAR9,
FUN11(VAR4), &VAR1);
return 0;
}