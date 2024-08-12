static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;

if (VAR4->VAR6)
return;

FUN3(VAR4->VAR7, 1);

FUN3(VAR4->VAR8, 0);
FUN4(10, 20);
FUN3(VAR4->VAR8, 1);

if (FUN5(VAR4->VAR9)) {
FUN6("");
return;
}


FUN7(90);

VAR5 = FUN8(VAR4);
if (VAR5)
FUN6("", VAR5);

VAR4->VAR6 = true;
}