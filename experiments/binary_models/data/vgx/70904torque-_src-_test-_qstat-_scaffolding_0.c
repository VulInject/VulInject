int FUN1(VAR1 **VAR2, const char *VAR3)
{ 
fprintf(VAR4, "");
return(VAR5);
}

int FUN2(

const char *VAR6,
char **VAR7,
char **VAR8,
char **VAR9)

{
int VAR10;
const char *VAR11;
char VAR12[VAR13+VAR14+1];
int VAR15;
char VAR16[VAR17];
int VAR18;
char VAR19[VAR17];
int VAR20;




for (VAR10 = 0; VAR10 < VAR13 + VAR14 + 1; VAR10++) VAR12[VAR10] = '';

VAR15 = 0;

for (VAR10 = 0; VAR10 < VAR17; VAR10++) VAR16[VAR10] = '';

VAR18 = 0;

for (VAR10 = 0; VAR10 < VAR17; VAR10++) VAR19[VAR10] = '';

VAR20 = 0;


VAR11 = VAR6;

while (FUN3(*VAR11)) VAR11++;


while (*VAR11 != '')
{

if (FUN4(*VAR11) || *VAR11 == '' || *VAR11 == '')
{
if (VAR15 >= VAR13 + VAR14) return 3;

VAR12[VAR15++] = *VAR11;
}
else
break;

VAR11++;
}

if (VAR15 == 0) return 1;


if (*VAR11 == '')
{
VAR11++;

while (*VAR11 != '')
{
if (FUN5(*VAR11))
{
if (VAR18 >= VAR17) return 3;

VAR16[VAR18++] = *VAR11;
}
else
break;

VAR11++;
}

if (VAR18 == 0) return 1;
}


if (*VAR11 == '')
{
VAR11++;

while (*VAR11 != '')
{
if (FUN5(*VAR11))
{
if (VAR20 >= VAR17) return 3;

VAR19[VAR20++] = *VAR11;
}
else
break;

VAR11++;
}

if (VAR20 == 0) return 1;
}

if (*VAR11 != '') return 2;


if (VAR7 != NULL) *VAR7 = VAR12;

if (VAR8 != NULL) *VAR8 = VAR16;

if (VAR9 != NULL) *VAR9 = VAR19;

return 0;
}



int FUN6(const char *VAR21, char *VAR22, int VAR23, char *VAR24, int VAR25)
{ 
char *VAR12 = NULL;
char *VAR16 = NULL;
char *VAR19 = NULL;
int  VAR26;

VAR26 = FUN2(VAR21, &VAR12, &VAR16, &VAR19);
if (VAR26 != VAR5)
{
fprintf(VAR4, "");
return(VAR26);
}

if ((VAR19 != NULL) && (VAR19[0] != ''))
{
sprintf(VAR24, "", VAR19);
}
else if ((VAR16 != NULL) && (VAR16[0] != ''))
{
sprintf(VAR24, "", VAR16);
}
else
{
VAR24[0] = '';
}

return(VAR5);
}

void FUN7(const char *VAR27, int connect, const char *VAR28)
{ 
fprintf(VAR4, "");
return;
}

struct VAR29 *FUN8(int VAR11, char *VAR28, struct VAR30 *VAR31, char *VAR32)
{ 
fprintf(VAR4, "");
return(VAR5);
}

struct VAR29 *FUN9(int VAR11, char *VAR28, struct VAR30 *VAR31, char *VAR32, int *VAR33)
{ 
static struct batch_status VAR34;


return(&VAR34);
}

char *FUN10(void)
{ 
fprintf(VAR4, "");
return(VAR5);
}

void FUN11() {}

extern ""
{
void FUN12(
struct VAR30 **VAR31,        
const char   *VAR35,   
const char   *VAR36)   
{
}

char *FUN13(int VAR37)
{ 
return((VAR37 == VAR5)? NULL : strdup(VAR38));
}
}