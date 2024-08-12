static int FUN1(void)
{
int VAR1 = 0;
int VAR2 = 10;
int VAR3 = 20;
int *VAR4 = NULL;

FUN2(void *, VAR5);
FUN3(VAR5);

VAR4 = FUN4(VAR5);
if (VAR4 != NULL)
goto VAR6;

(void)FUN5(VAR5, &VAR2);
VAR4 = FUN4(VAR5);
if (VAR4 == NULL)
goto VAR6;
if (*VAR4 != VAR2)
goto VAR6;

(void)FUN5(VAR5, &VAR3);
VAR4 = FUN4(VAR5);
if (VAR4 == NULL)
goto VAR6;
if (*VAR4 != VAR3)
goto VAR6;

VAR1 = 1;

VAR6:
return VAR1;
}