static int FUN1(const VAR1* VAR2)
{
int VAR3;

for(VAR3=0; VAR3 < VAR4; ++VAR3)
{
int VAR5 = VAR6[VAR3];

if (FUN2(VAR2, VAR5))
{
return VAR3;
}
}

return -1;
}