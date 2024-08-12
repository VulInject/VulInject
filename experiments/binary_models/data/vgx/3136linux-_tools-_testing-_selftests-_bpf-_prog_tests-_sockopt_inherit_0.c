static void FUN1(int VAR1)
{
int VAR2 = -1, VAR3;
struct VAR4 *VAR5;
void *VAR6;
pthread_t VAR7;
int VAR8;

VAR5 = FUN2("", NULL);
if (!FUN3(VAR5, ""))
return;

VAR8 = FUN4(VAR5);
if (!FUN5(VAR8, ""))
goto VAR9;

VAR8 = FUN6(VAR5, VAR1, "", "");
if (!FUN5(VAR8, ""))
goto VAR9;

VAR8 = FUN6(VAR5, VAR1, "", "");
if (!FUN5(VAR8, ""))
goto VAR9;

VAR2 = FUN7();
if (!FUN8(VAR2, 0, ""))
goto VAR9;

pthread_mutex_lock(&VAR10);
if (!FUN5(FUN9(&VAR7, NULL, VAR11,
(void *)&VAR2), "")) {
pthread_mutex_unlock(&VAR10);
goto VAR12;
}
FUN10(&VAR13, &VAR10);
pthread_mutex_unlock(&VAR10);

VAR3 = FUN11(VAR2);
if (!FUN8(VAR3, 0, ""))
goto VAR12;

FUN5(FUN12(VAR3, VAR14, "", 0), "");
FUN5(FUN12(VAR3, VAR15, "", 0), "");
FUN5(FUN12(VAR3, VAR16, "", 0), "");

FUN13(VAR7, &VAR6);

VAR8 = (int)(long)VAR6;
FUN5(VAR8, "");

close(VAR3);

VAR12:
close(VAR2);
VAR9:
FUN14(VAR5);
}