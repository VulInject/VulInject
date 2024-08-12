static int FUN1(struct VAR1 *VAR2, unsigned int *VAR3,
unsigned long VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR6;
void VAR7 *VAR8 = VAR6->VAR9.VAR10;
int VAR11;
u8 VAR12;

FUN2("");
FUN3(VAR6->VAR13, VAR8 + 0xe);
FUN4(20);
FUN3(VAR6->VAR13 | VAR14, VAR8 + 0xe);
FUN4(20);
FUN3(VAR6->VAR13, VAR8 + 0xe);

VAR11 = FUN5(VAR2, 1, VAR4);
if (VAR11) {
FUN6(VAR2, "", VAR11);
return VAR11;
}


VAR3[0] = FUN7(&VAR2->VAR15[0], 1, &VAR12);
FUN2("", VAR3[0], VAR3[1]);
return 0;
}