int FUN1( cb_function VAR1, unsigned int VAR2, void *VAR3 )
{
struct VAR4	**VAR5;
int	VAR6;


if ( (VAR2&((1u<<VAR7)-1))==0 ) {
FUN2("");
return -1;
}
if ( (VAR2&(~(VAR8|VAR9))) >= 1u<<VAR7 ) {
FUN2("",
VAR2);
return -1;
}
if ( (VAR2&(VAR8|VAR9))==0 ||
(VAR2&VAR8 && VAR2&VAR9) ) {
FUN2("");
return -1;
}

if (VAR2&VAR8)
VAR5 = VAR10;
else
VAR5 = VAR11;


for (VAR6=0; VAR6<VAR7; VAR6++) {
if ((VAR2&(1u<<VAR6)) == 0)
continue;
if (FUN3(&VAR5[VAR6], VAR1, VAR3) < 0)
goto VAR12;
}
return 0;

VAR12:
FUN4("");
return -1;
}