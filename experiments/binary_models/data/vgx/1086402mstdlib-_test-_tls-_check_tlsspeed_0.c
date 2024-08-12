int main(int argc, char **argv)
{
VAR1 *VAR2;
int      VAR3;

(void)argc;
(void)argv;

VAR2 = FUN1(FUN2());
if (getenv("")==NULL) FUN3(VAR2, "");

FUN4(VAR2, VAR4);
VAR3 = FUN5(VAR2);
FUN6(VAR2);

return VAR3 == 0 ? VAR5 : VAR6;
}