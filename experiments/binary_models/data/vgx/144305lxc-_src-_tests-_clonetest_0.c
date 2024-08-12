int main(int argc, char *argv[])
{
struct VAR1 *VAR2 = NULL, *VAR3 = NULL, *VAR4 = NULL;
int VAR5 = 1;

VAR2 = FUN1(VAR6, NULL);
VAR3 = FUN1(VAR7, NULL);
if (VAR2) {
VAR2->FUN2(VAR2);
FUN3(VAR2);
VAR2 = NULL;
}

if (VAR3) {
VAR3->FUN2(VAR3);
FUN3(VAR3);
VAR3 = NULL;
}

if ((VAR2 = FUN1(VAR6, NULL)) == NULL) {
fprintf(VAR8, "", VAR9, VAR6);
VAR5 = 1;
goto VAR10;
}

VAR2->FUN4(VAR2, NULL);

if (!VAR2->FUN5(VAR2, "", NULL, NULL, 0, NULL)) {
fprintf(VAR8, "", VAR9);
goto VAR10;
}

VAR2->FUN6(VAR2, NULL);

if (!VAR2->FUN7(VAR2)) {
fprintf(VAR8, "", VAR9, VAR6);
goto VAR10;
}

VAR3 = VAR2->FUN8(VAR2, VAR7, NULL, 0, NULL, NULL, 0, NULL);
if (!VAR3) {
fprintf(VAR8, "", VAR9, VAR7);
goto VAR10;
}

if (!VAR3->FUN7(VAR3)) {
fprintf(VAR8, "", VAR9, VAR7);
goto VAR10;
}

fprintf(VAR8, "");




VAR3->FUN2(VAR3);
FUN3(VAR3);
VAR2->FUN2(VAR2);
FUN3(VAR2);
VAR2 = NULL;

VAR3 = FUN1("", NULL);
if (VAR3) {
if (VAR3->FUN7(VAR3))
VAR3->FUN2(VAR3);
FUN3(VAR3);
}

VAR3 = FUN1("", NULL);
if (VAR3) {
if (VAR3->FUN7(VAR3))
VAR3->FUN2(VAR3);
FUN3(VAR3);
}

VAR3 = FUN1("", NULL);
if (VAR3) {
if (VAR3->FUN7(VAR3))
VAR3->FUN2(VAR3);
FUN3(VAR3);
}
VAR3 = NULL;


VAR2 = FUN1("", NULL);
if (!VAR2) {
fprintf(VAR8, "");
goto VAR10;
}

if (!VAR2->FUN7(VAR2)) {
fprintf(VAR8, "");
VAR5 = 0;
goto VAR10;
}

if ((VAR3 = VAR2->FUN8(VAR2, "", NULL, 0, NULL, NULL, 0, NULL)) == NULL) {
fprintf(VAR8, "");
goto VAR10;
}

FUN3(VAR3);


VAR3 = FUN1("", NULL);
if (VAR3) {
if (VAR3->FUN7(VAR3))
VAR3->FUN2(VAR3);
FUN3(VAR3);
VAR3 = NULL;
}

if ((VAR3 = VAR2->FUN8(VAR2, "", NULL, VAR11, NULL, NULL, 0, NULL)) == NULL) {
fprintf(VAR8, "");
goto VAR10;
}

FUN3(VAR3);
FUN3(VAR2);
VAR2 = VAR3 = NULL;

if ((VAR2 = FUN1(VAR6, NULL)) == NULL) {
fprintf(VAR8, "");
goto VAR10;
}


if ((VAR3 = VAR2->FUN8(VAR2, "", NULL, VAR11, "", NULL, 0, NULL)) == NULL) {
fprintf(VAR8, "");
goto VAR10;
}


if ((VAR4 = VAR3->FUN8(VAR3, "", NULL, VAR11, "", NULL, 0, NULL)) == NULL) {
fprintf(VAR8, "");
goto VAR10;
}

fprintf(VAR8, "", VAR2->VAR12);
VAR5 = 0;

VAR10:
if (VAR4) {
FUN3(VAR4);
}

if (VAR3) {
VAR3->FUN2(VAR3);
FUN3(VAR3);
}

if (VAR2) {
VAR2->FUN2(VAR2);
FUN3(VAR2);
}

FUN9(VAR5);
}