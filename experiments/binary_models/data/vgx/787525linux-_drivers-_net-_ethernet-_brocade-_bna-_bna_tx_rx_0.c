static void
FUN1(struct VAR1 *VAR2, enum bna_rx_event VAR3)
{
switch (VAR3) {
case VAR4:
FUN2(VAR2, VAR5);
FUN3(&VAR2->VAR6->VAR7);
FUN4(&VAR2->VAR8);
break;

case VAR9:
FUN2(VAR2, VAR10);
FUN3(&VAR2->VAR6->VAR7);
FUN5(&VAR2->VAR8);
FUN6(VAR2);
VAR2->FUN7(VAR2->VAR6->VAR11, VAR2);
break;

default:
FUN8(VAR3);
break;
}
}