int main(int argc, char *argv[])
{
struct VAR1 *VAR2 = NULL;
struct VAR3 *VAR4 = NULL;
err_t VAR5 = NULL;
VAR6 *VAR7 = NULL;

char *VAR8 = "";






VAR2 = (struct VAR1 *) malloc(sizeof(struct VAR1));
if (!VAR2) FUN1("");

memset(VAR2, 0, sizeof(struct VAR1));

FUN2(VAR2);





VAR4 = FUN3(VAR2, "", &VAR5);
if(VAR4 == NULL) FUN1("", VAR5);

VAR2->VAR9.VAR10[VAR11] = 1;
VAR2->VAR9.VAR12[VAR11] = 0;

VAR2->VAR9.VAR13[VAR14] = 1;
VAR2->VAR9.VAR15[VAR14] = strdup("");

VAR4->VAR16 = strdup("");

VAR4->VAR17.VAR18 = (unsigned char *)"";
VAR4->VAR17.VAR19 = (unsigned char *)"";

VAR4->VAR20 = VAR21;

VAR4->VAR10[VAR22] = 1;
VAR4->VAR12[VAR22] = VAR21;

VAR4->VAR17.VAR23 = "";

VAR7 = fopen(VAR8,"");
FUN4(VAR2, VAR7);
fclose(VAR7); 

return 0;
}