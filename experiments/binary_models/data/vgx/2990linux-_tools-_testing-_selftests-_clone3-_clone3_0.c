int main(int argc, char *argv[])
{
uid_t VAR1 = FUN1();

FUN2();
FUN3(17);
FUN4();


FUN5(0, 0, 0, VAR2);


if (VAR1 == 0)
FUN5(VAR3, 0, 0, VAR2);
else
FUN6("");


FUN5(0, VAR4, 0, VAR2);


FUN5(0, VAR4 - 8, -VAR5, VAR2);


FUN5(0, sizeof(struct VAR6) + 8, 0, VAR2);


FUN5(0, 0, -VAR5, VAR7);


FUN5(0, 0, -VAR5, VAR8);


FUN5(0, 0, -VAR5, VAR9);


FUN5(0, 0, -VAR5, VAR10);

FUN5(0, sizeof(struct VAR6) + 8, 0, VAR11);

FUN5(0, sizeof(struct VAR6) + 16, -VAR12,
VAR11);

FUN5(0, sizeof(struct VAR6) * 2, -VAR12,
VAR11);


FUN5(0, FUN7() + 8, -VAR12, VAR2);


if (VAR1 == 0)
FUN5(VAR3, VAR4, 0,
VAR2);
else
FUN6("");


FUN5(VAR3, VAR4 - 8, -VAR5,
VAR2);


if (VAR1 == 0)
FUN5(VAR3, sizeof(struct VAR6) + 8, 0,
VAR2);
else
FUN6("");


FUN5(VAR3, FUN7() + 8, -VAR12,
VAR2);

return !FUN8() ? FUN9() : FUN10();
}