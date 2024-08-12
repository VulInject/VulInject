int FUN1(void);

int VAR1;
int FUN2(int *VAR2)
{
int VAR3 = 0;

*VAR2 = 4;
if (VAR1)
goto VAR4;

*VAR2 = FUN1();
if (*VAR2 < 10 || *VAR2 > 100) {
VAR3 = -12;
goto VAR4;
}

VAR4:
return VAR3;
}