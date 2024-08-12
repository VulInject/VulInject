static int FUN1(VAR1* VAR2)
{
VAR3* VAR4;
FUN2(VAR2, VAR5);

if (!(VAR4 = calloc(1, sizeof(VAR3))))
return 0;

FUN3(&VAR4->VAR6, 4000);
FUN4(VAR2, (void*)VAR4);
return 1;
}