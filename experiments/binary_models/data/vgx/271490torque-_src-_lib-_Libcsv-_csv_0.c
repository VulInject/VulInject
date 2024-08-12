char *FUN1(

const char *VAR1,
const char *VAR2)

{
int  VAR3;
int  VAR4;
int  VAR5 = 0;
char *VAR6;

if (!VAR2)
return(NULL);

VAR5 = strlen(VAR2);

VAR4 = FUN2(VAR1);

for (VAR3 = 0; VAR3 < VAR4; VAR3++)
{
VAR6 = FUN3(VAR1, VAR3);

if (VAR6)
{
while (FUN4(*VAR6))
VAR6++;

if ((int)strlen(VAR6) >= VAR5 &&
!FUN5(VAR6[VAR5]) &&
!FUN6(VAR6, VAR2, VAR5))
{
return(VAR6);
}
}
}

return(NULL);
}


char *
FUN7(const char *VAR1, const char *VAR2)
{
char *VAR6;
char *VAR7;

VAR6 = FUN1(VAR1, VAR2);

if (VAR6)
{
if ((VAR7 = strchr(VAR6, '')))
return(VAR7 + 1);
}

return(NULL);
}