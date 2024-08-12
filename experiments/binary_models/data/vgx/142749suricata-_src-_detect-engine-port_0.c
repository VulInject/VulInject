static int FUN1(void)
{
VAR1 *VAR2= NULL;
VAR1 *VAR3= NULL;
VAR1 *VAR4= NULL;
int VAR5 = 0;

int VAR6 = FUN2(NULL, &VAR2, "");
if (VAR6 != 0)
goto VAR7;

VAR6 = FUN2(NULL, &VAR3, "");
if (VAR6 != 0)
goto VAR7;


FUN3(NULL, VAR2, VAR3, &VAR4);
if (VAR6 != 0)
goto VAR7;

if (!(VAR2->VAR8 == 200))
goto VAR7;
if (!(VAR2->VAR9 == 249))
goto VAR7;
if (!(VAR3->VAR8 == 250))
goto VAR7;
if (!(VAR3->VAR9 == 300))
goto VAR7;

VAR2->VAR8 = 0;
VAR2->VAR9 = 500;
VAR3->VAR8 = 250;
VAR3->VAR9 = 750;


FUN3(NULL, VAR2, VAR3, &VAR4);
if (VAR6 != 0)
goto VAR7;
if (!(VAR2->VAR8 == 0))
goto VAR7;
if (!(VAR2->VAR9 == 249))
goto VAR7;
if (!(VAR3->VAR8 == 250))
goto VAR7;
if (!(VAR3->VAR9 == 500))
goto VAR7;
if (!(VAR4->VAR8 == 501))
goto VAR7;
if (!(VAR4->VAR9 == 750))
goto VAR7;

VAR5 = 1;

VAR7:
if (VAR2 != NULL)
FUN4(NULL, VAR2);
if (VAR3 != NULL)
FUN4(NULL, VAR3);
if (VAR4 != NULL)
FUN4(NULL, VAR4);
return VAR5;
}