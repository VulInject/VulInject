static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
struct VAR5 *VAR5 = (struct VAR5 *) VAR2->VAR6;
int VAR7;

if (VAR3 != 0)
return -VAR8;

FUN2(VAR5->VAR9.VAR10, 1, VAR11);
FUN3(1);

VAR7 = FUN4(&VAR5->VAR9, VAR12, VAR4 & 0xfff, 1, 0, 1);
if (VAR7 == -VAR13) {
FUN5(VAR2, VAR3);
FUN6("");
}
return VAR7;
}