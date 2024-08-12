static int FUN1(pid_t VAR1, action_t VAR2)
{
apr_proc_t VAR3;
apr_status_t VAR4;
apr_exit_why_e VAR5;
int VAR6;


if (VAR1 < 1) {
return 1;
}

VAR3.VAR1 = VAR1;
VAR4 = FUN2(&VAR3, &VAR6, &VAR5, VAR7);
if (VAR4 != VAR8) {
if (VAR4 == VAR9)
FUN3(&VAR3, VAR5, VAR6);
return 1;
}

switch(VAR2) {
case VAR10:
break;

case VAR11:

FUN4(VAR12, VAR13,
0, VAR14, FUN5(00045)
"" VAR15
""
"",
VAR1);

case VAR16:
FUN6(VAR1, VAR17);
break;

case VAR18:
FUN4(VAR12, VAR19,
0, VAR14, FUN5(00046)
"" VAR15
""
"",
VAR1);
FUN6(VAR1, VAR20);
break;

case VAR21:

FUN4(VAR12, VAR19,
0, VAR14, FUN5(00047)
"" VAR15
""
"",
VAR1);
break;
}

return 0;
}