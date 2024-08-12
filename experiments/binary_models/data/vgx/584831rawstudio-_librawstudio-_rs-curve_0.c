void 
FUN1(VAR1 *VAR2, const VAR3* VAR4)
{
FUN2 (FUN3(VAR2));
if (VAR4)
{
VAR2->VAR4[0] = (float)VAR4[0]/255.0f;
VAR2->VAR4[1] = (float)VAR4[1]/255.0f;
VAR2->VAR4[2] = (float)VAR4[2]/255.0f;
} 
else
{
VAR2->VAR4[0] = -1;
VAR2->VAR4[1] = -1;
VAR2->VAR4[2] = -1;
}
FUN4(FUN5(VAR2));
}