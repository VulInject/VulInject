static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
int VAR4;
int VAR5;

VAR3 = FUN2(VAR2, VAR6);
if (VAR3 < 0)
return VAR3;

if ((VAR3 & 1) == 0)
goto VAR7;

VAR4 = FUN2(VAR2, VAR8);
if (VAR4 < 0)
return VAR4;

if ((VAR4 & 1) == 0)
goto VAR7;

VAR5 = FUN2(VAR2, VAR9);
if (VAR5 < 0)
return VAR5;

if ((VAR5 & 0x1000) == 0)
goto VAR7;

VAR2->VAR10 = 10000;
VAR2->VAR11 = 1;
VAR2->VAR12 = 1;
return 0;

VAR7:
VAR2->VAR11 = 0;
return 0;
}