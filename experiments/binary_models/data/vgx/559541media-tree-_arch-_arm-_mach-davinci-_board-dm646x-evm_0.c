static int FUN1(int VAR1, const char *VAR2)
{
int VAR3 = 0;
int VAR4;


if (VAR1 != 0)
return 0;

if (!VAR5)
return -VAR6;

VAR4 = FUN2(VAR5);
if (VAR4 < 0)
return VAR4;

if (!strcmp(VAR2, VAR7) ||
!strcmp(VAR2, VAR8))
VAR4 &= VAR9;
else
VAR4 |= VAR10;

VAR3 = FUN3(VAR5, VAR4);
if (VAR3)
return VAR3;
return 0;
}