static int FUN1(struct VAR1 *VAR2)
{
VAR2->VAR3 = FUN2(sizeof(*VAR2->VAR3), VAR4);
if (!VAR2->VAR3)
return -VAR5;
FUN3(&VAR2->VAR3->VAR6, 0);
FUN3(&VAR2->VAR3->VAR7, 0);
FUN4(&VAR2->VAR3->VAR8);
FUN5(&VAR2->VAR3->VAR9);
return 0;
}