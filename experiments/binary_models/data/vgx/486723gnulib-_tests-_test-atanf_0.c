FUN1 (VAR1, float, (float));


volatile float VAR2;
float VAR3;

int
main ()
{

VAR2 = 0.6f;
VAR3 = FUN2 (VAR2);
FUN3 (VAR3 >= 0.5404194f && VAR3 <= 0.5404196f);

return 0;
}