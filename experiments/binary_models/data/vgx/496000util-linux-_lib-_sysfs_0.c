int FUN1(struct VAR1 *VAR2, int *VAR3, int *VAR4, int *VAR5, int *VAR6)
{
char VAR7[VAR8], *VAR9;
struct VAR10 *VAR11;
ssize_t VAR12;

VAR11 = FUN2(VAR2);

if (!VAR11 || VAR11->VAR13)
return -VAR14;
if (VAR11->VAR15)
goto VAR16;

VAR11->VAR13 = 1;
VAR12 = FUN3(VAR2, VAR7, sizeof(VAR7), "");
if (VAR12 < 0)
return VAR12;

VAR9 = strrchr(VAR7, '');
if (!VAR9)
return -1;
VAR9++;

if (sscanf(VAR9, "",	&VAR11->VAR17, &VAR11->VAR18,
&VAR11->VAR19, &VAR11->VAR20) != 4)
return -1;

VAR11->VAR15 = 1;
VAR16:
if (VAR3)
*VAR3 = VAR11->VAR17;
if (VAR4)
*VAR4 = VAR11->VAR18;
if (VAR5)
*VAR5 = VAR11->VAR19;
if (VAR6)
*VAR6 = VAR11->VAR20;

VAR11->VAR13 = 0;
return 0;
}