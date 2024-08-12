int FUN1(bdb_table_p VAR1)
{
int VAR2, VAR3, VAR4;
char VAR5[VAR6];
char *VAR7 = NULL;
VAR8 *VAR9 = NULL;
DBT VAR10, VAR11;
VAR2 = VAR3 = VAR4 = 0;

if(!VAR1 || !VAR1->VAR9)
return -1;

VAR9 = VAR1->VAR9;
memset(&VAR10, 0, sizeof(VAR12));
memset(&VAR11, 0, sizeof(VAR12));
memset(VAR5, 0, VAR6);
VAR10.VAR11 = VAR13;
VAR10.VAR14 = strlen(VAR13);
VAR11.VAR11 = VAR5;
VAR11.VAR15 = VAR6;
VAR11.VAR16 = VAR17;

if((VAR2 = VAR9->FUN2(VAR9, NULL, &VAR10, &VAR11, 0)) != 0) {
VAR9->FUN3(VAR9, VAR2, "");
FUN4("");
return VAR2;
}

VAR7 = strtok(VAR5, "");
while(VAR7 != NULL && VAR3 < VAR1->VAR18) {
VAR2 = sscanf(VAR7, "", &VAR4);
if(VAR2 != 1)
return -1;
if(VAR1->VAR19[VAR4]) {
VAR1->VAR19[VAR4]->VAR20 = 1;
VAR1->VAR21++;
}
VAR3++;
VAR7 = strtok(NULL, "");
}

return 0;
}