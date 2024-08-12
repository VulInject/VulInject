int FUN1(int VAR1, unsigned int VAR2, void *VAR3)
{
const struct VAR4 *VAR5;
struct VAR6 *VAR7;

VAR7 = FUN2(VAR1);
if (VAR7 == NULL)
return -VAR8;

for (VAR5 = VAR9; VAR5->VAR2 > 0; ++VAR5) {
if (VAR5->VAR2 == VAR2)
return VAR5->FUN3(VAR7, VAR3);
}

FUN4("",
VAR2, FUN5(VAR2), FUN6(VAR2));
return -VAR10;
}