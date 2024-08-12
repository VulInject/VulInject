static struct VAR1*
FUN1(struct VAR2* VAR3)
{
if(FUN2(VAR3))
return NULL;
return (struct VAR1*)&VAR3->VAR4[VAR3->VAR5];
}