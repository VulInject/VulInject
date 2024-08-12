static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5)
{
struct VAR6 *VAR6 = FUN2(VAR3->VAR7);
size_t VAR8 = 0;
ssize_t read = 0;
ssize_t VAR9;

if (FUN3(VAR6))
return 0;

if (FUN4(FUN5(VAR6->VAR10), VAR5, VAR3->VAR11))
return 0;

FUN6(FUN7(VAR6), VAR12);
VAR13:

FUN8();
VAR5->VAR14 = true;
VAR9 = FUN9(VAR3, VAR5, read);
VAR5->VAR14 = false;
FUN10();


if (VAR9 > 0)
read = VAR9;

if (FUN11(VAR5) > 0 && (VAR9 == -VAR15 || VAR9 > 0)) {
const size_t VAR16 = FUN11(VAR5);

if (VAR16 == VAR8) {

VAR9 = read;
} else {

FUN12(VAR5, VAR16);
VAR8 = VAR16;
goto VAR13;
}
}
FUN13(FUN7(VAR6), VAR12);
return VAR9 < 0 ? VAR9 : read;
}