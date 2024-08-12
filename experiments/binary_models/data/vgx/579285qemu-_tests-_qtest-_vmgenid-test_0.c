int main(int argc, char **argv)
{
int VAR1;

VAR1 = FUN1(VAR2);
if (VAR1) {
return VAR1;
}

FUN2(&argc, &argv, NULL);

FUN3("",
VAR3);
FUN3("",
VAR4);
FUN3("",
VAR5);
VAR1 = FUN4();
FUN5(VAR2);

return VAR1;
}