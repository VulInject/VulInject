static int FUN1(size_t VAR1)
{
int VAR2;
struct VAR3 *VAR4;
u32 VAR5;


VAR4 = FUN2(VAR6,
VAR7,
VAR8,
VAR9);
if (!VAR4) {
FUN3("");
return -VAR10;
}

VAR5 = VAR1 +
(VAR4->VAR11 - VAR1 % VAR4->VAR11);
FUN3("",
VAR5, VAR5 / VAR4->VAR11);
VAR2 = FUN4(VAR4, 0, VAR5);
if (VAR2)
FUN3("");
else
FUN3("");

FUN3("",
(int)VAR1, FUN5());
VAR2 = FUN6(VAR4, 0, VAR1, (void *)FUN5());
if (VAR2)
FUN3("");
else
FUN3("");

return VAR2;
}