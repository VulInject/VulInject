}
FUN1(VAR1);

void FUN2(struct VAR2 *VAR3)
{
FUN3(&VAR3->mutex);

FUN4(&VAR3->VAR4);
if (VAR3->VAR5 != VAR6) {
FUN5(&VAR3->VAR4);
goto VAR7;
}
VAR3->VAR5 = VAR8;
FUN6(VAR3, -VAR9);
FUN5(&VAR3->VAR4);

FUN7(VAR3);

VAR7:
FUN8(&VAR3->mutex);
}