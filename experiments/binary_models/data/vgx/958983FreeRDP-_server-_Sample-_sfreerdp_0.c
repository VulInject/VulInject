static VAR1 FUN1(VAR2* VAR3, VAR4* VAR5)
{
HANDLE VAR6;
struct VAR7* VAR8;

FUN2(VAR3);

FUN3(VAR3);
FUN3(VAR5);

VAR8 = VAR3->VAR8;
VAR5->VAR9 = VAR8;

if (!(VAR6 = FUN4(NULL, 0, VAR10, (void*)VAR5, 0, NULL)))
return VAR11;

FUN5(VAR6);
return VAR12;
}