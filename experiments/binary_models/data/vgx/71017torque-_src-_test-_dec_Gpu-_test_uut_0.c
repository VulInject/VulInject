VAR1 *FUN1(void)
{
VAR1 *VAR2 = FUN2("");
VAR3 *VAR4 = FUN3("");
FUN4(VAR4, VAR5);
FUN5(VAR2, VAR4);

VAR4 = FUN3("");
FUN4(VAR4, VAR6);
FUN5(VAR2, VAR4);

return VAR2;
}

void FUN6()
{
}

int main(void)
{
int VAR7 = 0;
VAR8 *VAR9 = NULL;
FUN6();
VAR9 = FUN7(FUN1());
FUN8(VAR9, "");
FUN9(VAR9, VAR10);
VAR7 = FUN10(VAR9);
FUN11(VAR9);
return VAR7;
}