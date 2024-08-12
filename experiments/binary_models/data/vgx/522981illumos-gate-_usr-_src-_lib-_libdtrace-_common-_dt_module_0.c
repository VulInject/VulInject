static int
FUN1(void *VAR1, const VAR2 *VAR3, const char *VAR4)
{
VAR5 *VAR6;
char VAR7[VAR8], *VAR9;
VAR10 *VAR11 = VAR1;
int VAR12 = VAR11->VAR13;
Lmid_t VAR14;

VAR6 = FUN2(VAR11->VAR15, VAR4);
if (VAR6 == NULL)
return (0);
VAR6 = FUN3(VAR6);
if (VAR6 == NULL)
return (0);
VAR11->VAR16->VAR17[VAR12] = VAR6;

(void) FUN4(VAR11->VAR15, VAR3->VAR18, VAR7, sizeof (VAR7));
if ((VAR9 = strrchr(VAR7, '')) == NULL)
VAR9 = VAR7;
else
VAR9++;


if (FUN5(VAR11->VAR15, VAR3->VAR18, &VAR14) != 0)
VAR14 = 0;

if (VAR14 == 0)
VAR11->VAR16->VAR19[VAR12] = strdup(VAR9);
else
(void) asprintf(&VAR11->VAR16->VAR19[VAR12],
"", VAR14, VAR9);
if (VAR11->VAR16->VAR19[VAR12] == NULL)
return (1);
FUN6(VAR6, VAR11->VAR16);
VAR11->VAR13++;
return (0);
}