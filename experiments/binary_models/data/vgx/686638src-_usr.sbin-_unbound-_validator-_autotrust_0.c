static int
FUN1(char* VAR1, VAR2** VAR3, VAR4* VAR5)
{
size_t VAR6 = 0;
while(FUN2((unsigned char)*VAR1))
VAR1++;
if(FUN3(VAR1, "", 7) != 0)
return 0;
free(*VAR3);
VAR1 += 7;
while(FUN2((unsigned char)*VAR1))
VAR1++;
*VAR3 = FUN4(VAR1, &VAR6);
*VAR5 = VAR6;
if(!*VAR3)
FUN5("");
return 1;
}