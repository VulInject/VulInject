static int FUN1(struct VAR1 *VAR1)
{
const struct VAR2 *VAR3 = NULL;
int VAR4;

VAR1->VAR5->VAR6 = VAR7;

VAR4 = FUN2(&VAR3, VAR8, VAR1->VAR5->VAR9);
if ((VAR4 < 0) || (!VAR3)) {
FUN3(VAR1->VAR5->VAR9, "", VAR8);
return VAR4;
}

FUN4(VAR1->VAR5->VAR9, "",
VAR8, VAR3 ? VAR3->VAR10 : 0);

VAR1->VAR11 = FUN5(VAR1->VAR5->VAR9, VAR3->VAR10 + sizeof(int), VAR12);
if (!VAR1->VAR11) {
FUN6(VAR3);
return -VAR13;
}
VAR1->VAR11->VAR14 = (int)VAR3->VAR10;
memcpy(VAR1->VAR11->VAR15, VAR3->VAR15, VAR3->VAR10);
FUN6(VAR3);

VAR4 = FUN7(VAR1->VAR5, VAR1->VAR11);
if (VAR4 < 0) {
FUN3(VAR1->VAR5->VAR9, "", VAR8);
return VAR4;
}

FUN8(VAR1->VAR5->VAR9, "", VAR16);

FUN9(&VAR1->VAR17);

VAR4 = FUN10(VAR1->VAR5, VAR1->VAR11);
if (VAR4 < 0)
FUN3(VAR1->VAR5->VAR9, "");
FUN11(&VAR1->VAR17);

return VAR4;
}