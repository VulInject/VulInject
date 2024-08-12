static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = &VAR2->VAR7->VAR8;
struct VAR3 *VAR9;

FUN2(VAR9, &VAR2->VAR7->VAR8, VAR10) {
if (VAR9->VAR11 > VAR4->VAR11)
break;
VAR6 = &VAR9->VAR10;
}

FUN3(&VAR4->VAR10, VAR6);
}