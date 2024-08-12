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