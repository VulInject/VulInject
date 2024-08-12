static void FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6.VAR7;
struct VAR8 *VAR9 = FUN2(VAR2);
long VAR10;

FUN3(VAR5->VAR11, 0);
FUN4(&VAR9->VAR12);
FUN5(VAR3);
FUN3(VAR5->VAR11, 1);
VAR9->VAR13 = false;


VAR10 = FUN6(
&VAR9->VAR12,
FUN7(VAR14)
);
if (VAR10 == 0) {
FUN8(
&VAR2->VAR6,
""
);
}

FUN9(&VAR2->VAR6, "");
}