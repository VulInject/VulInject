int main() {
int VAR1;
struct VAR2 *VAR3;
char VAR4[256];
char *const VAR5[4] = { "", "", "", 0 };

VAR3 = FUN1 (VAR5);

FUN2 (VAR3, "");
FUN3 ("");
for(;;) {
if (!FUN4 (VAR3, 0,0))
break;
VAR1 = FUN5 (VAR3, VAR4, 128);
FUN3("", VAR1);
if (VAR1<0) break;
else if (VAR1>0)
FUN3 (""%VAR6\"", VAR1, VAR4);
else FUN3 ("");
}
FUN6(VAR3);
return 0;
}