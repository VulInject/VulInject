int
FUN1(int VAR1, char *VAR2, int VAR3, int VAR4)
{
Sys_tree VAR5;		
VAR6 *VAR7;		
di_node_t VAR8;		
struct system_kstat_data VAR9; 
int VAR10 = -1;


VAR11 = VAR2;
VAR12 = VAR3;
VAR13 = VAR4;


VAR5.VAR14 = NULL;
VAR5.VAR15 = NULL;
VAR5.VAR16 = NULL;
VAR5.VAR17 = 0;


if ((VAR8 = FUN2("", VAR18)) == VAR19) {
FUN3(FUN4(""));
}


if ((VAR20 = FUN5()) == NULL) {
FUN3(FUN4(""));
}


VAR7 = FUN6(&VAR5, NULL, VAR8);


FUN7(&VAR5);

FUN8(&VAR5, &VAR9);
VAR10 = FUN9(&VAR5, VAR7, &VAR9, VAR1);

FUN10(VAR8);
FUN11(VAR20);
return (VAR10);
}