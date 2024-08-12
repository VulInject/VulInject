static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR5->VAR4;

if (!FUN2(VAR2))
return -VAR6;

if (VAR4->VAR7) {
FUN3(VAR2->VAR8);
FUN4(5);
FUN5(VAR2->VAR8);
FUN4(5);
FUN3(VAR2->VAR8);
FUN4(5);
} else {
if (FUN6(FUN7(&VAR2->VAR5->VAR4), "")) {
FUN8(FUN7(&VAR2->VAR5->VAR4),
"", NULL, NULL);
} else if (FUN6(FUN7(&VAR2->VAR5->VAR4),
"")) {
FUN8(FUN7(&VAR2->VAR5->VAR4),
"", NULL, NULL);
}
}

FUN9(VAR2);
FUN10(VAR2);

return 0;
}